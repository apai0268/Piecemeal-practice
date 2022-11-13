//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//double fn(double x, int n);
//
//
//int main()
//{
//    double x;
//    int n;
//
//    scanf("%lf %d", &x, &n);
//    printf("%.2f\n", fn(x, n));
//
//    return 0;
//}
//
//
//double calc_pow(double a, int b);//自定义一个pow函数求指数幂
//
//double calc_pow(double a, int b) //定义pow利用了递归函数
//
//{
//    if (b == 0) return 1;
//    else if (b == 1) return a;
//    else if (b > 1)   return calc_pow(a, b - 1) * a;
//}
//double fn(double x, int n)
//{
//    if (n == 1)
//    {
//        return x;
//    }
//    else if (n > 1)
//    {
//        if (calc_pow(-1, n - 1) == -1) //当系数为负数时
//            return fn(x, n - 1) - calc_pow(x, n);
//        else if (calc_pow(-1, n - 1) == 1)//当系数为正数时
//            return fn(x, n - 1) + calc_pow(x, n);
//    }
// 
//}
//
