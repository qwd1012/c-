//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	printf("%d번째에 %d 저장\n", 0, num[0]);
//	printf("%d번째에 %d 저장\n", 1, num[1]);
//	printf("%d번째에 %d 저장\n", 2, num[2]);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	int k = 0;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//	printf("%d번째에 %d 저장\n", k, num[k]); k++;
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	for (int k = 0; k < 3; k++)
//	{
//		printf("%d번째에 %d 저장\n", k, num[k]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num[5];
//	for (int k = 0; k < 5; k++)
//	{
//		scanf("%d", &num[k]);
//	}
//
//	printf("\n\n");
//	
//	for (int k = 0; k < 5; k++)
//	{
//		printf("%d", num[k]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num[10];
//	int intput;
//	int find=1;
//	for (int k = 0; k < 10; k++)
//	{
//		scanf("%d", &num[k]);
//	}
//	while (find)
//	{
//		scanf("%d", &intput);
//		for (int k = 0; k < 10; k++) {
//			if (intput == num[k]) {
//				find = 0;
//				break;
//			}
//		}
//	}
//	printf("exist");
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	printf("left=%d,", left);
//	printf("right=%d\n", right);
//}

//#include <stdio.h>
//void main()
//{
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//	printf("left=%d,", left);
//	printf("right=%d\n", right);
//}

//#include <stdio.h>
//void main()
//{
//	int num[2] = { 10,3 };
//	int temp;
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//	printf("num[0]=%d, ", num[0]);
//	printf("num[1]=%d\n", num[1]);
//}

//#include <stdio.h>
//int main()
//{
//	int num[4] = { 4,3,1,2 };
//	int temp;
//	temp = num[0];
//	num[0] = num[2];
//	num[2] = temp;
//	temp = num[1];
//	num[1] = num[3];
//	num[3] = temp;
//	temp = num[2];
//	num[2] = num[3];
//	num[3] = temp;
//	for (int i = 0; i < 4; i++) {
//		printf("%d", num[i]);
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int num[4];
	int temp;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		for (int i = 0; i < 3; i++)
		{
			if (num[i] > num[i + 1])
			{
				temp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		printf("%d", num[i]);
	}
	return 0;
}