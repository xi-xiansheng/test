#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	const int len = 5;
//	char num;
//	scanf("%c", &num);
//	for (int i = 0; i < len; i++)
//	{   // ѭ��5�Σ���Ϊ��5��
//		for (int j = len - 1; j > i; j--)
//		{   // ��ʾ�ո�  ��һ�� 4��  �ڶ��� 3��  ���εݼ�
//			printf(" ");
//		}
//		for (int n = 0; n <= i; n++)
//		{   // ��ʾ1  ��һ����ʾ1��   �ڶ�����ʾ2��  ��������
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
//KiKi�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽����������ǡ�˫11����11��11�գ������
//�·���7�ۣ���˫12�� ��12��12�գ�������·���8�ۣ�������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫
//11��˫12ʹ�ã�����KiKi����������Ǯ����
//һ�У��ĸ����֣���һ������ʾС�����е��·��۸񣬵ڶ��͵����������ֱ��ʾ������·ݡ���������ڡ�
//���ĸ�������ʾ�Ƿ����Ż�ȯ�����Ż�ȯ��1��ʾ�����Ż�ȯ��0��ʾ��
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