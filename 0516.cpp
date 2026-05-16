//#include <stdio.h>
//#include <string.h>
//
//char* upper_lower(char inStr[])
//{
//	char result[100];
//	
//	for (int i=0;i<100;i++)
//	{
//		if (inStr[i] >= 'A' && inStr[i] <= 'Z') {
//			result[i] = inStr[i] + ' ';
//		}
//		else if (inStr[i] >= 'a' && inStr[i] <= 'z') {
//			result[i] = inStr[i] - 'a'+'A';
//		}
//		else
//			result[i] = inStr[i];
//	}
//	return result;
//}
//
//void main()
//{
//	char inStr[100], outStr[100];
//
//	printf("문자열을 입력(100자 이내) : ");
//	scanf("%s", inStr);
//	
//	strcpy(outStr, upper_lower(inStr));
//
//	printf("대소문자 변환 결과 ==> %s\n", outStr);
//}

#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//{
//	char name[100];
//	FILE* fp1 = fopen("myfile1.txt", "w");
//	//fprintf(fp1, "\"HelloWorld\"");
//	scanf("%s", name);
//	fprintf(fp1, "%s", name);
//	fclose(fp1);
//
//	FILE* fp2 = fopen("myfile2.txt", "w");
//	fp2 = fopen("myfile2.txt", "w");
//	//fprintf(fp2, "\"byeworld\"");
//	scanf("%s", name);
//	fprintf(fp2, "%s", name);
//	fclose(fp2);
//
//	char buff1[1025];
//	char buff2[1025];
//
//	fp1 = fopen("myfile1.txt", "r");
//	fp2 = fopen("myfile2.txt", "r");
//	int size1 = fread(buff1, 1, 1024, fp1);
//	printf("%s\n", buff1);
//	int size2 = fread(buff2, 1, 1024, fp2);
//	printf("%s\n", buff2);
//	fclose(fp1);
//	fclose(fp2);
//
//	int count = 0;
//	for (int i = 0; i < size1 && i < size2; i++)
//	{
//		if (buff1[i] == buff2[i]) {
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//#define MAXENERGY 6
//
//void printenergy(int my)
//{
//	printf("내 목숨 : ");
//	for (int i=0;i<my;i++)
//		printf("■");
//	for (int i = my; i < MAXENERGY; i++)
//		printf("□");
//	printf("\n");
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	char num[4] = "___", tmp[4];
//	int answer = rand() % 1000;
//	sprintf(tmp, "%03d", answer);
//	int energy = MAXENERGY;
//	char input;
//	while (1) {
//		printenergy(energy);
//		if (!energy) {
//			printf("게임 오버...\n");
//			printf("정답 : %s", tmp);
//			break;
//		}
//		printf("정답 : %s\n\n", num);
//		if (atoi(num) == answer) {
//			printf("게임 승리!\n");
//			break;
//		}
//		printf("숫자를 맞춰보세요 : ");
//		scanf(" %c", &input);
//
//		bool check = true;
//		for (int i = 0; i < 3; i++) {
//			if (tmp[i] == input) {
//				num[i] = input;
//				check = false;
//			}
//		}
//		if (check)
//			energy--;
//	}
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;

//void main()
//{
//	string s = "Hello, World!";
//
//	cout << s.length() << endl;
//	cout << s.empty() << endl;
//
//	s.clear();
//	cout << s.empty() << endl;
//}

//void main()
//{
//	string s = "Hello, World!";
//	cout << s.substr(7, 5) << endl;
//
//	s.append(" :");
//	s += "\n hi";
//	cout << s << endl;
//	s.insert(5, "??");
//	printf("%s", s.c_str());
//}

//void main()
//{
//	string s = "Hello!";
//	cout << s[0] << endl;
//	cout << s.at(1) << endl;
//	cout << s.front() << endl;
//	cout << s.back() << endl;
//}

void main()
{
	string s = "example string";
	char search = 'e';
	int at = s.find(search, 0);
	cout << "'e' is at" << at << " " << endl;
	cout << s.rfind("e") << endl;
	if (s.find("xyz") == string::npos)
		cout << "없음" << endl;
}