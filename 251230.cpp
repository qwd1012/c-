//#include<stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요");
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n안녕하세요\n안녕하세요\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n");
//	printf("안녕하세요");
//	printf("안녕하세요\n");
//	return 0;
//} 

//#include <stdio.h>
//
//int main()
//{
//	printf("사과 1개\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 1;
//	printf("사과 %d개\n", apple);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("키보드 3개\n");
//	printf("마우스 2개\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드; %d개\n", keyboard);
//	printf("마우스; %d개\n", mouse);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d = %d\n",
//		coin1, coin2, coin1 + coin2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char A;
//	A = 'A';
//	printf("A = %c, A = %d\n", A, A);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718l;
//	printf("pi = %.2lf, e = %.3f.. \n", pi, e);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int r = 5;
//	//원주율*반지름*반지름
//	float pi = 3.14;
//	float S = pi * r * r;
//	float l = 2 * pi * r;
//	printf("S = %.2lf, l = %.2lf\n", S, l);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int bottomside = 3;
//	int upperedge = 5;
//	int h = 7;
//	int S = (bottomside + upperedge) * h / 2;
//	printf("S = %d", S);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d" , &k);
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf("%d %d", &y, &x);
//	printf("두 값의 합은 %d입니다.\n", y + x);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자 두 개 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int r;
	printf("r값을 입력 : ");
	scanf("%d" , &r);
	float pi = 3.14;
	float S = pi * r * r;
	float l = 2 * pi * r;
	printf("S = %f, l = %f\n", S, l);
	return 0;
}