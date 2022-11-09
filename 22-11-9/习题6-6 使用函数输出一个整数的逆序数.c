//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int reverse(int number);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    printf("%d\n", reverse(n));
//
//    return 0;
//}
//
//int reverse(int number)  //注意符号位，以0结尾的舍去0;
//{
//    int k = 1; //符号
//    int c = number;
//    int v = 0;
//    ///
//    if (c < 0)
//        k = -1;
//    c *= k;
//    for (v=0;c > 0;v++)
//        c /= 10; 
//    c = number;
//
//int sum = 0;int b = v;
//    for (int i = 0;i < v;i++)
//    {
//        int d = c % 10;
//        for (int a = b-1;a>0;a--)//计算d*10
//        {
//            d *= 10;
//        }
//        sum += d;
//        b =b- 1;
//        c /= 10;
//    }
//    return sum;
//}