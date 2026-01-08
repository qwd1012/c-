//#include <stdio.h>
//
//
//void main()
//{
//	int num1;
//	int num2;
//	num1 = 5;
//	num2 = 10;
//	printf("%d\n", num1 * num2);
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("100\n\n\n200");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	float w1, w2, h;
//	printf("w1, w2, h값 입력: ");
//	scanf("%f %f %f" , &w1, &w2, &h);
//	float S = (w1 + w2) * h / 2;
//	printf("S = %f", S);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2; printf("%2d\n", number);
//	number--; printf("%2d\n", number);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	printf("숫자 2개 입력: ");
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}

#include <stdio.h>

int main()
{
	int number1, number2;
	scanf("%d %d", number1, number2);
	printf("%d = number1%%4\n", number1 % 4);
	printf("%d = number2%%3\n", number2 % 3);
	return 0;
}