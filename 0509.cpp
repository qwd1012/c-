//#include<stdio.h>
//struct SNACK {
//	int price;
//	int stock;
//	char name[20];
//};
//void main()
//{
//	const int N = 2;
//	SNACK snacks[N] = {
//		{1500,3,"레몬칩"},{1000,2,"달고나"}
//	};
//
//	printf("<<과자자판기!>>\n");
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d.[%6s] %4d원 (%d개남음)\n", (i + 1), snacks[i].name, snacks[i].price, snacks[i].stock);
//	}
//	int choice;
//	scanf("%d", &choice);
//	printf("%s가 나왔습니다.\n", snacks[choice - 1].name);
//}

//#include <stdio.h>
//struct DRINK {
//	int price;
//	int stock;
//	char name[20];
//};
//
//void nomaliize(int &choice)
//{
//	choice--;
//}
//
//void main()
//{
//	int money = 0;
//	int choice;
//	int input;
//	const int N = 3;
//	DRINK drink[N] = {
//		{1000,3,"물"},{1500,3,"콜라"},{2000,3,"우유"}
//	};
//	while (1)
//	{
//		printf("<<음료자판기>>\n");
//		for (int i = 0; i < N; i++)
//		{
//			printf("%d.[%4s] %4d원 (%d개남음)\n", (i + 1), drink[i].name, drink[i].price, drink[i].stock);
//		}
//		printf("%d. 돈 넣기\n", N + 1);
//		printf("0. 거스름돈 반환\n");
//		printf("넣은 돈 : %d원\n", money);
//		scanf("%d", &choice);
//		if (choice == 0)
//			break;
//
//		if (choice == N + 1)
//		{
//			printf("넣을 금액을 입력하세요.\n");
//			scanf("%d", &input);
//			if (input <= 0) {
//				printf("1원 이상 넣어야 합니다.\n");
//				continue;
//			}
//			money += input;
//			continue;
//		}
//		nomaliize(choice);
//
//		if (drink[choice].stock > 0 && money >= drink[choice].price) {
//				printf("%s이(가) 나왔습니다.\n", drink[choice].name);
//				drink[choice].stock--;
//				money -= drink[choice].price;
//			}
//		else if (drink[choice].stock == 0)
//			printf("재고가 부족합니다.\n");
//		else
//			printf("잔액이 부족합니다.\n");
//	}
//	printf("거스름돈은 %d원 입니다.\n", money);
//}
//
//#include <iostream>
//void main()
//{
//	int number;
//	int count;
//	std::cin >> number >> count;
//	std::cout << "new : " << number << " " << count << std::endl;
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	int number;
//	int count;
//	cin >> number >> count;
//	cout << "new : " << number << " " << count << endl;
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	int* buff;
//	buff = new int[2];
//	cin >> buff[0] >> buff[1];
//	cout << "new : " << buff[0] << " " << buff[1] << endl;
//  delete buff;
//}

//#include <iostream>
//#include <fstream>
//using namespace std;
//void main()
//{
//	int* buff;
//	buff = new int[2];
//	cin >> buff[0] >> buff[1];
//
//	ofstream fout("file.txt");
//	fout << buff[0] << " " << buff[1] << endl;
//	fout.close();
//
//	ifstream fin;
//	fin.open("file.txt");
//	fin >> buff[2] >> buff[3];
//	cout << "new : " << buff[2] << " " << buff[3] << endl;
//	fin.close();
//
//	delete buff;
//}

#include <iostream>
using namespace std;
void main()
{
	int number;
	cin >> number;
	int* buff;
	buff = new int[number];


	delete buff;
}