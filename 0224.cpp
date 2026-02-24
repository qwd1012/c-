//#include <stdio.h>
//int main()
//{
//	int LINE;
//	scanf("%d", &LINE);
//
//	for (int y = LINE; y >= 1; y--) {
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int line = 4;
//	scanf("%d", &line);
//
//	int y = 1;
//	
//
//	for (int z = line-1; z >= 0;z--){
//		for (int x = 1; x <= z; x++)
//		{
//			printf(" ");
//		}
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		y += 2;
//	}
//	
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	for (int x = 1; x <= 5; x++)
	{
		printf("*");
	}
	printf("\n");
	for (int x = 1; x <= 1; x++){
		printf(" ");
}
	printf("*");
	printf("*");
	printf("*");
	printf("\n");
	printf(" ");
	printf(" ");
	printf("*");

	return 0;
}