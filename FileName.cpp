//#include <stdio.h>
//void main()
//{
//	int i, k;
//
//	for (i = 0;i < 3;i++)
//	{
//		for (k = 0;k < 2;k++)
//		{
//			printf("중첩 for문입니다. (i값: %d, k값: %d)\n", i, k);
//		}
//	}
//}

//#include <stdio.h>
//void main()
//{
//	int i, k;
//
//	for (i = 2;i <= 9;i++)
//	{
//		for (k = 1;k <= 9;k++)
//		{
//			printf("%d * %d = %d \n", i, k, i * k);
//		}
//	}
//}

#include <stdio.h>
void main()
{
	int i, k;

	for (i = 1;i <= 9;i++)
	{
		for (k = 2;k <= 9;k++)
		{
			printf("%2dX%2d=%2d", k, i, i * k);
		}
		printf("\n");
	}
}