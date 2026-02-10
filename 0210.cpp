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
	printf("%d\n", count);

	while (1) {
		int share;
		share = ori / count;
		printf("%d\n", share);
		ori %= count;
		count /= 10;
	}

	return 0;
}