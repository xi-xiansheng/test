#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    float d = 0.0;
    float x1 = 0.0;
    float x2 = 0.0;
    while (scanf("%f %f %f", &a, &b, &c) != EOF)
    {
        d = b * b - 4 * a * c;
        x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 / a;
        x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 / a;
        if (a == 0)
        {
            printf("Not quadratic equation\n");
        }
        else
        {
            if (d == 0)
            {
                printf("x1=x2=%.2f\n", x1);
            }
            else if (d > 0)
            {
                if (x1 > x2)
                {
                    float ret = x1;
                    x1 = x2;
                    x2 = ret;
                }
                printf("x1=%.2f;x2=%.2f\n", x1, x2);
            }
            else
            {
                float shi = -b / (2 * a);
                float xu = sqrt(-d) / (2 * a);
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", shi, xu, shi, xu);
            }
        }
    }
    return 0;
}