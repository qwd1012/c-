//#include <stdio.h>
//int main()
//{
//	int num[4];
//	int temp;
//	for (int i = 0; i < 4; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//
//	for (int i = 3; i > 0; i--) {
//		for (int j = 0; j < i; j++)
//		{
//			if (num[j] > num[j + 1])
//			{
//				temp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	int one = 1, two = 2;
//	int max = 0;
//
//	if (one > two)max = one;
//	else max = two;
//	printf("max = %d\n", max);
//}

//#include <stdio.h>
//void main()
//{
//	int one = 1, two = 2, three = 3;
//	int max = 0;
//	if (one > two) {
//		if (one > three)max = one;
//		else max = three;
//	}
//	else {
//		if (two > three)max = two;
//		else max = three;
//	}
//	printf("max = %d\n", max);
//}

//#include <stdio.h>
//void main()
//{
//	int a[3] = { 1,3,2 };
//	int max = a[0];
//	for (int i = 1; i < 3; i++) {
//		if (max < a[i])
//			max = a[i];
//	}
//	printf("max = %d\n", max);
//}

//#include <stdio.h>
//int main()
//{
//	int a[5] = { 1,3,6,4,2 };
//	int max = a[0];
//	int min = a[0];
//	int sum = a[0];
//	float avg = a[0];
//
//	for (int i = 1; i < 5; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//		if (min > a[i])
//			min = a[i];
//		sum += a[i];
//	}
//	avg = (float)sum / 5;
//	printf("max = %d\n", max);
//	printf("min = %d\n", min);
//	printf("sum = %d\n", sum);
//	printf("avg = %f\n", avg);
//}

//#include <stdio.h>
//int main()
//{
//	int a[10] = { 1,1,4,5,6,2,3,3,4,1 };
//	int count[7] = { };//0,1-6
//	for (int i = 0; i < 10; i++)
//	{
//		count[a[i]]++;
//	}
//	for (int i = 1; i <= 6; i++)
//	{
//		printf("%d : %d번\n", i, count[i]);
//	}
//}
/*
1: 3번
2: 1번
3: 2번
4: 2번
5: 1번
6: 1번
*/

//#include <stdio.h>
//int main()
//{
//	char arr[2][3] = { '1','2','3','4','5','6' };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[2][3] = { { '1','2','3' }, { '4', '5', '6' } };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

#include <stdio.h>
void main()
{
	int arr2d[5][4] = {
	{662,7,4,74},
	{8,396,299,95},
	{66,73,86,0},
	{116,26,586,42},
	{84,7,41,11}
	};

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%3d", arr2d[i][j]);
		}
		printf("\n");
	}
}