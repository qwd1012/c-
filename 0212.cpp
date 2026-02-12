//#include <stdio.h>
//int main()
//{
//	int number;
//	int count = 1;
//	printf("숫자 입력: ");
//	scanf("%d", &number);
//	int ori = number;
//	while (1) {
//		if (number < 10)
//			break;
//		number /= 10;
//		count *= 10;
//	}
//
//	while (count > 0) {
//		int share;
//		share = ori / count;
//
//		int i = 0;
//		while (i < share * 2) {
//			printf("\u2665");
//			i++;
//		}
//		printf("\n");
//
//		ori %= count;
//		count /= 10;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int health = 0;
//	int game = 0;
//	int draw = 0;
//	do {
//		printf("\n%d번째 날!\n", ++day);
//		printf("오늘은 뭐할까요?\n");
//		printf("1.코딩공부한다 2.운동한다 3.게임한다 4.그림그린다\n");
//		printf("그외. 끝낸다.\n >>");
//		scanf("%d", &command);
//		if (command < 1 || command > 4) break;
//		int randInt = rand() % 5 + 1;
//		switch(command){
//		case 1:
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("도서관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5:
//				printf("학원에서 ");
//			}
//			printf("코딩 공부합니다.\n");
//			study++;
//			break;
//		case 2:
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("체육관에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("집에서 ");
//				break;
//			case 5:
//				printf("공원에서 ");
//			}
//			printf("운동합니다.\n");
//			health++;
//			break;
//		case 3:
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("pc방에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("집에서 ");
//				break;
//			case 5:
//				printf("학원에서 ");
//			}
//			printf("게임합니다.\n");
//			game++;
//			break;
//		case 4:
//			switch (randInt) {
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 3:
//				printf("밖에서 ");
//				break;
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 4:
//				printf("집에서 ");
//				break;
//			case 5:
//				printf("학원에서 ");
//			}
//			printf("그림그립니다.\n");
//			draw++;
//			break;
//		}
//	} while (1);
//
//	if (day <= 3) {
//		printf("그대로입니다...\n");
//	}
//	else if (health > study && health > game && health > draw) {
//		int level = health / 8;
//		switch (level) {
//		case 0:
//			printf("건강한 사람이 되었습니다!\n");
//			break;
//		case 1:
//			printf("운동선수가 되었습니다!\n");
//			break;
//		default:
//			printf("국가대표가 되었습니다!\n");
//			break;
//		}
//	}
//	else if (game > study && game > health && game > draw) {
//		int level = game / 8;
//		switch (level) {
//		case 0:
//			printf("백수가 되었습니다!\n");
//			break;
//		case 1:
//			printf("프로게이머2군이 되었습니다!\n");
//			break;
//		default:
//			printf("프로게이머가 되었습니다!\n");
//			break;
//		}
//	}
//	else if (draw > study && draw > health && draw > game) {
//		int level = draw / 8;
//		switch (level) {
//		case 0:
//			printf("일러스트레이터가 되었습니다!\n");
//			break;
//		case 1:
//			printf("웹툰작가가 되었습니다!\n");
//			break;
//		default:
//			printf("화가가 되었습니다!\n");
//			break;
//		}
//	}
//	else {
//		int level = study / 8;
//		switch (level) {
//		case 0:
//			printf("코딩새싹이 되었습니다!\n");
//			break;
//		case 1:
//			printf("프로그래머가 되었습니다!\n");
//			break;
//		case 2:
//			printf("FrontEnd 개발자가 되었습니다!\n");
//			break;
//		case 3:
//			printf("BackEnd 개발자가 되었습니다!\n");
//			break;
//		default:
//			printf("풀스택 개발자가 되었습니다!\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3) {
//			printf("도중에 잠들었다!\n");
//			continue;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++) {
//		if (sheep == 3) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++) {
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep == 45)
//			printf("잠들었다!\n");
//			break;
//		if (sheep % 10 == 0) {
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round <= 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++)
//	{
//		sum_number += number;
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요: ");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("삐약");
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	for (number = 10; number <= 99; number++)
//	{
//		printf("%d\n",number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int result = 1;
//	for (number = 3; number <= 8; number++)
//	{
//		result *= number;
//	}
//	printf("%d", result);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	for (number = 1; number <= 50; number++)
//	{
//		if (number % 10 == 3 || number % 10 == 6 || number % 10 == 9 || number / 10 == 3) {
//			printf("%d ", number);
//			continue;
//		}
//	}
//		return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("100이하의 제곱수를 출력합니다.\n");
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num;
//	printf("100이하 7의 배수를 출력합니다.\n");
//	for (num = 7; num <= 100; num += 7)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char input;
//	for (;;)
//	{
//		scanf(" %c", &input);
//		switch (input)
//		{
//		case 's' :
//			printf("START GAME\n");
//			break;
//		case 'e' :
//			printf("EXIT GAME\n");
//          return 0;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력: ");
//	for (number = 10, exitFor = number - 1; exitFor ; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}

#include <stdio.h>
int main()
{
	printf("1부터 10까지 곱한 수 출력: ");
	for(int number=10,int exitFor=number-1;exitFor)
}