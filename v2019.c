#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	const int len = 5;
//	char num;
//	scanf("%c", &num);
//	for (int i = 0; i < len; i++)
//	{   // 循环5次，因为有5行
//		for (int j = len - 1; j > i; j--)
//		{   // 显示空格  第一行 4个  第二行 3个  依次递减
//			printf(" ");
//		}
//		for (int n = 0; n <= i; n++)
//		{   // 显示1  第一行显示1个   第二行显示2个  依次增加
//			printf("%c ", num);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    float c;
//    scanf("%d %d", &a, &b);
//    float da = (float)a;
//    float db = (float)b;
//        db = db / 100.0;
//        c = da / db / db;
//        printf("%.2f", c);
//            return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float a, b, c, p;
//
//    scanf("%f%f%f", &a, &b, &c);
//    p = (a + b + c) / 2;
//    printf("circumference=%.2f area=%.2f\n", a + b + c, sqrt(p * (p - a) * (p - b) * (p - c)));
//
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	float len = a + b + c;
//	float p = (a + b + c) / 2.0;
//	float area = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("circumference=%.2f area=%.2f\n", len, area);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//main()
//{
//    int a, b, c;
//    float circumference, area;
//    scanf("%d %d %d", &a, &b, &c);
//    float p = (a + b + c) / 2.0;
//    circumference = (a + b + c) / 1.0;
//    area = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("circumference=%.2f area=%.2f", circumference, area);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 10000;
//	int p = 0;
//	for (i = 10000;i <= 99999;i++)
//	{
//		p = (i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) * (i % 100) + (i / 10) * (i % 10);
//		if (p == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d", (a + b)%100);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int seconds = 0;
//    scanf("%d", &seconds);
//    printf("%d %d %d", seconds / 3600, (seconds % 3600) / 60, seconds % 60);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float a, b, c;
//	scanf("%f %f %f", &a, &b, &c);
//	printf("%.2f %.2f", a + b + c, (a + b + c) / 3);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int m, n, h;
//again:
//    scanf("%d %d %d", &m, &n, &h);
//    if (m <= n * h)
//    {
//        printf("%d", n - m / h - 1);
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%x %o", &a, &b);
//    printf("%d", a+b);
//    return 0;
//}
//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，如果今天是“双11”（11月11日）则这件
//衣服打7折，“双12” （12月12日）则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双
//11或双12使用），求KiKi最终所花的钱数。
//一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份、当天的日期、
//第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）
//#include<stdio.h>
//int main()
//{
//    float a;
//    int b, c, d;
//    scanf("%f %d %d %d", &a, &b, &c, &d);
//    if (b == 11 && c == 11)
//    {
//        if (d == 1)
//        {
//        if (0.7 * a - 50 < 0)
//            printf("0.00");
//        else
//            printf("%.2f", 0.7 * a - 50);
//        }
//        else
//        {
//            printf("%.2f", 0.7 * a);
//        }
//    }
//    else
//    {
//        if (b == 12 && c == 12)
//        {
//            if (d == 1)
//            {
//                if (0.8 * a - 50 >= 0)
//                    printf("%.2f", 0.8 * a - 50);
//                else
//                printf("0.00");
//            }
//            else
//            {
//                printf("%.2f", 0.8 * a);
//            }
//        }
//        else
//        {
//            printf("%.2f", a);
//        }
//    }
//    return 0;
//}