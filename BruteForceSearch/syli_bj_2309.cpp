#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> height(9); // 난쟁이의 키를 넣을 공간
int sum = 0, temp = 0;

int main() {

    for (int i = 0; i < 9; ++i) {
        scanf("%d", &height[i]);
        sum += height[i]; // 난쟁이 키들의 총합
    }

    sort(height.begin(), height.end()); // 오름차순정렬

    for (int j = 0; j < 9; ++j) {
        for (int i = j + 1; i < 9; ++i) {
            temp = sum - height[j] - height[i]; //  두명의 난쟁이 키를 뻄

            if (temp == 100) { // 100 이면 출력후 종료
                for (int k = 0; k < 9; ++k)
                    if (k != i && k != j) printf("%d", height[k]);
                return 1;
            }
        }
    }

}