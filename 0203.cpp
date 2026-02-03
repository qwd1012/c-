//#include <stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1)
//	{
//		printf("양수를 입력해 주세요(0입력시 종료):");
//		scanf("$d", &number);
//		if (number == 0) { break; }
//		else if (number < 0) { break; }
//		
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	int multi = 1;
//	while (1)
//	{
//		multi *= number;
//		if (multi >= 50000) break;
//		number++;
//	}
//	printf("%d", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char ch = 'A';
//	while (ch <= 'Z')
//	{
//		if (ch == 'F') { ch++; }
//		printf("%c", ch);
//		ch++;
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int sum = 0;
	int count;
	int player = 0;
	while (1)
	{
		printf("%c : ",'A'+ player);
		player = ++player % 2;


		scanf("%d", &count);
		sum += count;
		printf("=> %d\n", sum);
		if (sum >= 31)
		{
			break;
		}
	}
	if () {
		printf("A가 이겼습니다");
	}
	else {
		printf("B가 이겼습니다");
	}
	return 0;
}