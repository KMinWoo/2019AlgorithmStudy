#include <iostream>
#include<algorithm>
using namespace std;


void main() {
	int sum = 0;
	int* array = new int[9];

	for (int i = 0; i < 9; i++) {
		cin >> array[i];
	}

	for (int i = 0; i < 9; i++) {
		sum = sum + array[i];
	}
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - (array[i] + array[j]) == 100) {
				array[i] = -1;
				array[j] = -1;
				break;
			}
		}
	}
	sort(array, array + 9);

	for (int i = 0; i < 9; i++) {
		if (array[i] > 0) {
			cout << array[i] << endl;
		}
	}
}








