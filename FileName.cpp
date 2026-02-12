#include <stdio.h>
int main()
{
	int number;
	int count = 1;
	printf("숫자 입력: ");
	scanf("%d", &number);
	int ori=number;
	while (1) {
		if (number < 10)
			break;
		number /= 10;
		count *= 10;
	}

	while (count > 0) {
		int share;
		share = ori / count;
		
		int i = 0;
		while (i < share * 2) {
			printf("\u2665");
			i++;
		}
		printf("\n");

		ori %= count;
		count /= 10;
	}

	return 0;
}