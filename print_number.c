#include <stdio.h>

int course_number[6] = {4, 2, 1, 4, 3, 2};
int main() {
	for(int j = 5; j >= 0; j--) {
		printf("%d", course_number[j]);
	}
	printf("\n");
	return 0;
}
