//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int input;
//	scanf("%d", &input);
//
//	char arr[100];
//	sprintf(arr, "%d",input);
//	//gets_s(arr);
//	int len = strlen(arr);
//	
//	for (int i = len-1; i > 0; i--) {
//		printf("%c", arr[i]);
//	}
//}

#include <stdio.h>
struct GM {
	int no;
	char name[10];
	int part;
	int salary;
};
struct COMPANY {
	GM gms[5];
	int gmCount = 0;
};
COMPANY HireGM_once(COMPANY n)
{
	n.gms[n.gmCount].no = n.gmCount + 1;

	printf("GM의 이름를 입력하세요");
	scanf("%c", &GM.name);
	printf("GM의 역할을 입력하세요");
	scanf("%d", &GM.part);
	printf("GM의 월급을 입력하세요");
	scanf("%d", &GM.salary);
}
void main()
{
	printf("게임을 출시해보자!\n");
	COMPANY gameCo;
	
	printf("먼저 GM부터 고용할까?\n");
	while (1) {
		gameCo = HireGM_once(gameCo);
		printf("더 고용할까?(y/n) : ");
		char ch;
		do {
			ch = getchar();
		} while (ch != 'y' && ch != 'n');
		if (ch == 'n') break;
	}
	printf("GM %d명을 뽑았다!\n", gameCo.gmCount);
}