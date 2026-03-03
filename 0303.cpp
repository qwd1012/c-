//#include <stdio.h>
//int main()
//{
//	int for_flag = 1;//1
//	int number = 0;//2
//	for (;for_flag;)//3 8 17
//	{
//		printf("number = %d\n", number);//4 9
//		for (;number++;)//5 10
//		{
//			printf(" >number = %d\n", number);//11
//			if (number == 3)//12
//			{
//				for_flag = 0;//13
//				break;//14
//			}
//		}
//		number++;//6 15
//		printf(">>number = %d\n", number);//7 16
//	}
//	printf("%d %d\n", for_flag, number);//18
//	return 0;//19
//}

//#include <stdio.h>
//void function_test1()
//{
//	printf("function_test1()");
//	printf("함수안에서 실행\n");
//}
//int main()
//{
//	printf("실행전\n");
//	function_test1();
//	printf("실행후\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("\"5 + 7 = 12\"");
//}

#include <stdio.h>
int suyel(int n)
{
	int sum = 0;
	for (int x = 0; x <= n; x++)
	{
		sum += x;
	}
	return sum;
}

int main()
{
	int result = suyel(10);
	printf("%d\n", result);

	return 0;
}