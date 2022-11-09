#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void splitfloat(float x, int* intpart, float* fracpart);
//
//int main()
//{
//    float x, fracpart;
//    int intpart;
//
//    scanf("%f", &x);
//    splitfloat(x, &intpart, &fracpart);
//    printf("The integer part is %d\n", intpart);
//    printf("The fractional part is %g\n", fracpart);
//
//    return 0;
//}
//
//void splitfloat(float x, int* intpart, float* fracpart)
//{
//    int a = 0;//Î»Êý
//    int b = x;
//    while (b > 0)
//    {
//        b /= 10;
//        a++;
//    }
//    b = x;  int d = 1;int e = 0;* intpart = 0;
//    for (int i = 1;i <= a;i++) {
//        e = b % 10 * d;
//        * intpart += e;
//        b /= 10;
//        d *= 10;
//    }
//    b = x;
//    *fracpart = x - *intpart;
//}

