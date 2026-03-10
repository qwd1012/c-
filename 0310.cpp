//#include <stdio.h>
//int number(int n)
//{
//	if (n <= 1)
//		return 1;
//	return number(n-1)+n;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", number(n));
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	struct PERSON
//	{
//		char name[20];
//		int age;
//		char ABO;
//		char addr[120];
//	};
//	PERSON a, me;
//	me.age=14;
//	printf("%d", me.age);
//}

//#include <stdio.h>
//struct byte
//{
//	char a;
//	char b;
//};
//
//void main()
//{
//	struct byte a;
//	a.a = 10;
//	a.b = 20;
//	printf("%d %d", a.a, a.b);
//}

//#include <stdio.h>
//struct student
//{
//	int id;
//	char* name;
//	float aver;
//};
//void main()
//{
//	struct student s = { 1,(char*)"이샘",90.5 };
//	printf("아이디: %d\n", s.id);
//	printf("이름: %s\n",s.name);
//	printf("백분율: %lf\n", s.aver);
//}

//#include <stdio.h>
//struct gun
//{
//	char name[10];
//	float bullet_type;
//	bool scope;
//	bool muzzle;
//	bool hanfgrip;
//	bool magazine;
//	bool tactical_stock;
//	int magazine_size;
//};
//
//int main()
//{
//	struct gun M416 = { "M416", 5.56,true,true,true,true,true,30 };
//	printf("화기명 : %s\n", M416.name);
//	printf("탄 종류 : %.2f\n", M416.bullet_type);
//	printf("스코프유무 : %s", M416.scope ? "true" : "false");
//	return 0;
//}

//#include <stdio.h>
//struct __dummy__
//{
//	int data_0;
//	char data_1;
//	float data_2;
//};
//struct vip_person
//{
//	char grade;
//	char personcode;
//	char mileage;
//};
//int main()
//{
//	int sizedummy = sizeof(__dummy__);
//	int sizevip = sizeof(vip_person);
//	printf("더미 크기 : % d\n", sizedummy);
//	printf("vip정보 크기 : %d\n", sizevip);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	vip_person lee_sam;
//	printf("고객 등급을 입력하세요\n");
//	while (true)
//	{
//		scanf("%c", &lee_sam.grade);
//		if (lee_sam.grade == 'S' || 'A' <= lee_sam.grade && lee_sam.grade <= 'D')
//			break;
//	}
//	int tmp;
//	printf("고객 코드를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.personcode = (char)tmp;
//	printf("마일리지를 입력하세요\n");
//	scanf("%d", &tmp);
//	lee_sam.mileage = (char)tmp;
//	printf("%c %d %d\n", lee_sam.grade, lee_sam.personcode, lee_sam.mileage);
//	return 0;
//}

//#include <stdio.h>
//struct dummy1
//{
//	int data1;
//	char data2;
//};
//struct dummy2
//{
//	int data1;
//	int data2;
//};
//int main()
//{
//	int sizedummy1 = sizeof(dummy1);
//	int sizedummy2 = sizeof(dummy2);
//	printf("더미1 크기: %d\n", sizedummy1);
//	printf("더미2 크기: %d", sizedummy2);
//}

#include <stdio.h>
struct __dummy__
{
	int data_0;
	char data_1;
	float data_2;
};
int main()
{
	__dummy__ a;
	scanf("%d", &a.data_0);
	printf("%d\n", a.data_0);
	scanf(" %c", &a.data_1);
	printf("%c\n", a.data_1);
	scanf("%f", &a.data_2);
	printf("%f\n", a.data_2);

	return 0;
}