//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int k;
//	printf("숫자 입력: ");
//	scanf("%d", &k);
//	if (!k)
//	{
//		printf("0입니다.\n");
//	}
//	else if (k > 0)
//	{
//		printf("양수 입니다.\n");
//	}
//	else
//	{
//		printf("음수 입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int k;
//	printf("숫자 입력: ");
//	scanf("%d", &k);
//	if (k < 10 || k>99)
//	{
//		printf("두 자리 숫자가 아닙니다.\n");
//	}
//	else
//	{
//		printf("두자리 숫자입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	else if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int age;
//	printf("나이 입력: ");
//	scanf("%d", &age);
//	if (age > 0)
//	{
//		printf("전체 관람가\n");
//	}
//	if (age >= 12)
//	{
//		printf("12세 관람가\n");
//	}
//	if (age >= 15)
//	{
//		printf("15세 관람가\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char initial;
//	printf("문자 입력: ");
//	scanf("%c", &initial);
//	if (initial >= 0x41 && initial <= 'Z')
//	{
//		printf("대문자\n");
//	}
//	else if (initial >= 97 && initial <= 122)
//	{
//		printf("소문자\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number>answer)
//	{
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else
//	{
//		if (number< answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//	{
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if (score > 90)
//	{
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80)
//	{
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70)
//	{
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60)
//	{
//		printf("성적은 D등급입니다.\n");
//	}
//	else
//	{
//		printf("성적은 F등급입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0)
//	{
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number는 음수입니다.\n");
//	}
//	else
//	{
//		printf("number는 0입니다.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("numbeer는 짝수입니다.\n");
//	}
//	else
//	{
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arrowkey;
//	scanf("%c", &arrowkey);
//	if (arrowkey == 'w')
//	{
//		printf("위 방향키를 입력하셨습니다.\n");
//	}
//	else if (arrowkey == 'a')
//	{
//		printf("좌 방향키를 입력하셨습니다.\n");
//	}
//	else if (arrowkey == 'd')
//	{
//		printf("우 방향키를 입력하셨습니다.\n");
//	}
//	else if (arrowkey == 's')
//	{
//		printf("아래 방향키를 입력하셨습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int gauge;
//	scanf("%d", &gauge);
//	if (gauge >= 45 && gauge <= 55)
//	{
//		printf("Perfect\n");
//	}
//	else if (gauge >= 35 &&  gauge <= 65)
//	{
//		printf("Exellent\n");
//	}
//	else
//	{
//		printf("good\n");
//	}
//	return 0;
//}
