#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> height(9, 0); // 난쟁이의 키를 넣을 공간
    int sum = 0, temp = 0;


    for (int i = 0; i < 9; ++i) {
        cin >> height[i];
        sum += height[i]; // 난쟁이 키들의 총합
    }

    sort(height.begin(), height.end());

    for (int j = 0; j < 9; ++j) {
        for (int i = j + 1; i < 9; ++i) {
            temp = sum - height[j] - height[i]; // 두명의 난쟁이 키를 뻄

            if (temp == 100) { // 값이 100이면 출력후 종료
                for (int k = 0; k < 9; ++k)
                    if (k != i && k != j) cout << height[k] << endl;
                return 0;
            }
        }
    }
}