//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//double calc_pow(double x, int n);
//
//int main()
//{
//    double x;
//    int n;
//
//    scanf("%lf %d", &x, &n);
//    printf("%.0f\n", calc_pow(x, n));
//
//    return 0;
//}
//
///* ��Ĵ��뽫��Ƕ������ */
//double calc_pow(double x, int n)
//{
//    if (n == 0) return 1;
//    else if (n == 1) return x;
//    else if (n > 1)   return calc_pow(x,n - 1)*x;
//
//}