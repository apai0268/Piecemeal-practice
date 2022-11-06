#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double funcos(double e, double x)
{
    double i = 2;
    double sum1 = 1;
    double fenmu = 1;
    double fenzi = 1;
    int k = -1;double sum = 1;double sum2 = 0;int sum3 = 0;
    for (i = 2;sum1 > e;i += 2)
    {
        fenmu = fenmu * (i-1)*i;
        fenzi = pow(x, i);
        sum1 = fenzi / fenmu;
        sum = sum + k * sum1;
        k=-k;  
    }
    return sum;
}
