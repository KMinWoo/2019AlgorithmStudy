#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>

using namespace std;

int add(int *height) {
	int sum = 0;
	int i;

	for (i = 0; i < 9; i++)
		sum += height[i];

	return sum;
}

int solution (int *height) {
	
	int i, j;
	int sum = add(height);

	for (i = 0; i < 8; i++) {
		for (j = i + 1; j < 9; j++) {
			if (sum - (height[i] + height[j]) == 100) {
				height[i] = -1;
				height[j] = -1;

				return 0;
			}
		}
	}
	return -1;
}
int main(void) {

	int height[9];
	int index;
	int sum = 0;

	for (index = 0; index < 9; index++) {
		scanf("%d", height + index);
	}

	solution(height);

	sort(height, height + 9);

	for (index = 2; index < 9; index++)
		printf("%d ", height[index]);

	printf("\n");
	return 0;
}