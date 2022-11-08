#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int fn(int a, int n);
//int SumA(int a, int n);
//
//int main()
//{
//    int a, n;
//
//    scanf("%d %d", &a, &n);
//    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
//    printf("s = %d\n", SumA(a, n));
//
//    return 0;
//}
//
//int fn(int a, int n)
//{
//    int b[10]={0};
//    for (int i=0;i < n;i++) {
//        b[i] = a;
//     }
//    int d = 1;int c = 1;int sum = 0;
//    for (int i = 0;i < n;i++)
//    {
//         c = b[i] * d;
//         sum += c;
//        d *= 10;
//    }
//
//    return sum;
//}
//
//int SumA(int a, int n)
//{
//    int sum = 0;
//    int d = 1;int c = 0;
//    for (int i=0;i < n;i++)
//    {
//        c = fn(a, n) / d;
//        sum += c;
//        d *= 10;
//    }
//    return sum;
//}
//
