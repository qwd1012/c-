//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("숫지 입력:");
//	scanf("%d", &k);
//	if (k % 3 == 0)
//	{
//		printf("%d은 3의 배수입니다.", k);
//
//		if (k % 6 == 0)
//		{
//			printf("%d은 6의 배수입니다.", k);
//		}
//		if (k % 9 == 0)
//		{
//			printf("%d은 9의 배수입니다.", k);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//	case 'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		break;
//	case 'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("커맨드를 입역하세요:");
//	scanf("%c", &command);
//	switch(command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//			break;
//	case 'm': printf("지도창 오픈\n");
//			break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int x, y;
//	char sign;
//	printf("숫자 입력: ");
//	scanf("%d %d", &x, &y);
//    printf("기호 입력: ");
//	scanf(" %c", &sign);
//
//	switch (sign)
//	{
//	case '+': printf("%d+%d=%d", x, y, x + y); break;
//	case '-': printf("%d-%d=%d", x, y, x - y); break;
//	case '*': printf("%d*%d=%d", x, y, x * y); break;
//	case '/': printf("%d/%d=%d", x, y, x / y); break;
//	case '%': printf("%d%%%d=%d", x, y, x % y); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int month;
//	printf("숫자 입력:");
//	scanf("%d", &month);
//
//	switch (month)
//	{
//	case 1: printf("January"); break;
//	case 2: printf("February"); break;
//	case 3: printf("March"); break;
//	case 4: printf("April"); break;
//	case 5: printf("May"); break;
//	case 6: printf("June"); break;
//	case 7: printf("July"); break;
//	case 8: printf("August"); break;
//	case 9: printf("September"); break;
//	case 10: printf("October"); break;
//	case 11: printf("November"); break;
//	case 12: printf("December"); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//
//	printf("<, a 왼쪽으로 이동\n");
//	printf(">, d 오른쪽으로 이동\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<' :
//	case 'a' :
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case '>' : case 'd' :
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	const int option = 3;
//	printf("메뉴를 선택하세요.");
//	printf("1. 새 게임 2. 이어하기 3. 옵션\n");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 1 :
//		printf("새 게임 시작.\n");
//		break;
//	case 2 :
//		printf("세이브 데이터 로드.\n");
//		break;
//	case option :
//		printf("옵션 세팅.\n");
//		break;
//	default : 
//		printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("숫자 입력: ");
//	scanf("%d", &k);
//	switch (k)
//	{
//	case 3: case 6: case 9:
//		printf("짝\n");
//	}
//}

#include <stdio.h>
int main()
{
	char command = 'x';
}