//#include <stdio.h>
//int main()
//{
//	int arr[3][3] = { {2,4,6}, {8,10,12}, {14,16,18} };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%3d",arr[j][i]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//void main()
//{
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//			data[i][j] = i + j;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%3d", data[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//void main()
//{
//	const int M = 5;
//	int num = 1;
//	int arr[M][M];
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			arr[i][j] = num;
//			num++;
//		}
//	}
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//void main()
//{
//	const int M = 5;
//	int num = 1;
//	int arr[M][M];
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			arr[i][j] = num;
//			num++;
//		}
//	}
//	for (int i = M-1; i >= 0; i--)
//	{
//		for (int j = M-1; j >= 0; j--)
//		{
//			printf("%3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//void main()
//{
//	const int M = 10;
//	int num = 1;
//	int arr[M][M];
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			arr[i][j] = num;
//			num++;
//		}
//	}
//	int arr2[M*M] = {};
//	int num2 = 0;
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			arr2[num2] = arr[i][j];
//			num2++;
//		}
//	}
//
//	for (int i = 0; i < M*M; i++)
//	{
//		printf("%3d", arr2[i]);
//	}
//}

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int num[10];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}

	char arr[10][10] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < num[i]; j++)
		{
			arr[j][i] = '*';
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if(arr[i][j] != 0) printf("%c",arr[i][j]);
			else printf(" ");
		}
		printf("\n");
	}
}