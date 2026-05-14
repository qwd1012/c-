//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//using namespace std;
//
//void main()
//{
//	int number = 0;
//	int* student;
//	cin >> number;
//	student = new int[number];
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < number; i++)
//	{
//		student[i] = rand() % 101;
//	}
//	cout << "성적 : ";
//	for (int i = 0; i < number; i++)
//	{
//		cout << student[i] << " ";
//	}
//	cout << endl;
//
//	int count[101] = {};
//
//	for (int j = 0; j < number; j++) {
//		count[student[j]]++;
//	}
//
//	int maxcount = count[0];
//	int maxscore = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (maxcount < count[i]) {
//			maxcount = count[i];
//			maxscore = i;
//		}
//	}
//
//
//	cout <<"최다점수 : " << maxscore << ", " << "인원 : " << maxcount << endl;
//
//
//	delete[] student;
//}

#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	printf("안녕하세요");
//	fclose(pFile);
//}

//#include <stdio.h>
//void main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	fprintf(pFile, "안녕하세요");
//	fclose(pFile);
//}

//#include <stdio.h>
//void main()
//{
//	FILE* pFile;
//	char name[100];
//
//	pFile = fopen("myfile.txt", "w");
//	fscanf(pFile, "%s", name);
//	printf("%s", name);
//	fclose(pFile);
//}

//#include <stdio.h>
//void main()
//{
//	FILE* pFile;
//	char name[100];
//	pFile = fopen("myfile.txt", "w");
//	for (int n = 0; n < 5; ++n) {
//		printf("파일에 쓰고 싶은 말을 입력하세요 : ");
//		scanf("%s", name);
//		fprintf(pFile, "%d번째 내용 [% - 10s]\n", n, name);
//	}
//	fclose(pFile);
//}

//#include <stdio.h>
//int main()
//{
//	FILE* fp = fopen("Coding.txt", "w");
//	int i = 123;
//	int j = -123;
//	double f = 3.141592;
//
//	fprintf(fp, "폭맞추기\n");
//	fprintf(fp, "i: %6d \n", i);
//	fprintf(fp, "i: %7d \n", i);
//	fprintf(fp, "i: %2d \n\n", i);
//
//	fprintf(fp, "오른쪽정렬\n");
//	fprintf(fp, "i: %5d \n", i);
//	fprintf(fp, "왼쪽정렬\n");
//	fprintf(fp, "i: %-5d끝\n\n", i);
//
//	fprintf(fp, "#문자의 사용\n");
//	fprintf(fp, "i: %#x \n", i);
//	fprintf(fp, "j: %#x\n\n", j);
//
//	fprintf(fp, "부호붙이기\n");
//	fprintf(fp, "i: %+d, j: %+d \n", i, j);
//
//	fclose(fp);
//	return 0;
//}

#include <stdio.h>
int main()
{
	char name[100];
	FILE* fp = fopen("myfile1.txt", "w");
	//fprintf(fp, "\"HelloWorld\"");
	scanf("%s", name);
	fprintf(fp, "%s", name);
	fclose(fp);

	fp = fopen("myfile2.txt", "w");
	//fprintf(fp, "\"byeworld\"");
	scanf("%s", name);
	fprintf(fp, "%s", name);
	fclose(fp);

	char buff1[1025];
	char buff2[1025];
	fp = fopen("myfile1.txt", "r");
	char* ps = fgets(buff1, 1024, fp);
	printf("%s\n", buff1);
	fclose(fp);

	fp = fopen("myfile2.txt", "r");
	char* ps1 = fgets(buff2, 1024, fp);
	printf("%s\n", buff2);
	fclose(fp);

	int size = fread(buff1, 1, 1024, fp);
	int count = 0;
	for (int i = 0; i < size ; i++)
	{
		if (buff1[i] == buff2[i]) {
			count++;
		}
	}
	printf("%d\n", count);
}