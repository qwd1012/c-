//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main()
//{
//    int a, b, c, d;
//    int hap;
//
//    printf("1번째 숫자를 입력하세요 : ");
//    scanf("%d", &a);
//
//    printf("2번째 숫자를 입력하세요 : ");
//    scanf("%d", &b);
//
//    printf("3번째 숫자를 입력하세요 : ");
//    scanf("%d", &c);
//
//    printf("4번째 숫자를 입력하세요 : ");
//    scanf("%d", &d);
//
//    hap = a + b + c + d;
//
//    printf("합계 ==> %d \n", hap);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main()
//{
//    int aa[4];
//    int hap;
//
//    printf("1번째 숫자를 입력하세요 : ");
//    scanf("%d", &aa[0]);
//
//    printf("2번째 숫자를 입력하세요 : ");
//    scanf("%d", &aa[1]);
//
//    printf("3번째 숫자를 입력하세요 : ");
//    scanf("%d", &aa[2]);
//
//    printf("4번째 숫자를 입력하세요 : ");
//    scanf("%d", &aa[3]);
//
//    hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//    printf("합계 ==> %d \n", hap);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main()
//{
//    int aa[4];
//    int hap = 0;
//    int i;
//
//    for (i = 0; i <= 3; i++)
//    {
//        printf("%d번째 숫자를 입력하세요 : ", i + 1);
//        scanf("%d", &aa[i]);
//    }
//
//    hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//    printf("합계 ==> %d \n", hap);
//}

#include <stdio.h>

void main()
{
    int aa[4] = { 100, 200, 300, 400 };
    int bb[] = { 100, 200, 300, 400 };
    int cc[4] = { 100, 200 };
    int dd[4] = { 0 };
    int i;

    for (i = 0; i <= 3; i++)
        printf("aa[%d]==>%d\t", i, aa[i]);
    printf("\n");

    for (i = 0; i <= 3; i++)
        printf("bb[%d]==>%d\t", i, bb[i]);
    printf("\n");

    for (i = 0; i <= 3; i++)
        printf("cc[%d]==>%d\t", i, cc[i]);
    printf("\n");

    for (i = 0; i <= 3; i++)
        printf("dd[%d]==>%d\t", i, dd[i]);
    printf("\n");
}