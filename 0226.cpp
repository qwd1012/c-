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
//	y -= 2;
//	for (int z = 0; z <= line-1;z++) {
//		for (int x = 1; x <= z; x++) {
//			printf(" ");
//		}
//		for (int x = 1; x <= y; x++) {
//			printf("*");
//		}
//		printf("\n");
//		y -= 2;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//
//	int line = 4;
//	scanf("%d", &line);
//	
//	int y = 1;
//	int number = 1;
//	
//	for (int z = line-1; z >= 0;z--){
//		for (int x = 1; x <= z; x++){
//			printf(" ");
//		}
//		for (int x = 1; x <= y; x++){
//			printf("%d",number);
//		}
//		printf("\n");
//		y++;
//		number++;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//
//	int player = 0;
//	int count;
//	int number = 1;
//	printf("<베스킨 라빈스 31!>\n");
//	printf("게임을 시작함니다! 31을 말하는 사람이 지게됩니다.\n");
//	for (;;) {
//		for (int x = 1; x <= 3; x++)
//		{
//			printf("%c : ", 'A' + player);
//			scanf("%d", &count);
//
//			if (count == 0) {
//				if (x == 1) {
//					printf("턴을 먼기 위해서는 하나 이상의 수를 말해야 합니다.\n");
//					x--;
//					continue;
//				}
//				else
//					break;
//			}
//
//			if (number != count) {
//				printf("잘못된 입력입니다.\n");
//			    printf("지금 입력해야하는 값은 %d입니다.\n", number);
//				x--;
//				continue;
//			}
//			number++;
//
//			if (count == 31)
//				break;
//		}
//		if (count == 31)
//			break;
//		printf("턴이 넘어갑니다.\n");
//		player = ++player % 2;
//	}
//
//				printf("유저 %c가 졌습니다!", 'A' + player);
//	return 0;
//}

//#include <stdio.h>;
//int main()
//{
//	float conversion = 0;
//	for (; conversion < 2;) {
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float conversion = 90;
//	while (conversion > 0.1) {
//		if (conversion == 10.0) {
//			conversion /= 3;
//			continue;
//		}
//		printf("%.31f\n", conversion);
//		conversion /= 3;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	for (;;) {
//		scanf("%d", &number);
//		if (number == 0) {
//			printf("프로그램 종료\n");
//			break;
//		}
//	}
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int for_flag = 1;
	int number = 0;
	while (for_flag) {
		printf("number = %d\n", number);
		while (number++) {
			printf(" >number = %d\n", number);
			if (number == 3) {
				for_flag = 0;
				break;
			}
		}
		number++;
		printf(">>number = %d\n", number);
	}
	printf("%d %d\n", for_flag, number);
	return 0;
}