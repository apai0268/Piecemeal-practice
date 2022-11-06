#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int narcissistic(int number);
//void PrintN(int m, int n);
//
//int main()
//{
//    int m,n;
//    scanf("%d %d",&m,&n);
//    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
//    PrintN(m, n);
//    if (narcissistic(n)) printf("%d is a narcissistic number\n", m);
//    return 0;
//}
//
//
//int pow_n(int a, int b)//定义新函数：计算 a 的 b 次方
//{  
//    int sum = 1;
//    for (int i = 0; i < b; i++)
//        sum = sum * a;
//    return sum;
//}
//int narcissistic(int number)
//{
//    int a[5] = { 0 };
//    int i = 0;
//    int t = number;
//    while (t != 0) //把数逐个拆开存入数组中并记下位数；
//    {
//        a[i] = t % 10;
//        t /= 10;
//        i++;
//    }
//    t = number;
//    int p = 0;
//    int sum = 0;
//    for (p = 0;p < i;p++)// 将每个数的i（位数）次幂相加；
//    {
//        sum += pow_n(a[p], i);
//     }
//    if (sum == t)// 如果结果为number则是水仙花数
//    {
//        return 1;
//    }
//    else 
//        return 0;
//}
//
//void PrintN(int m, int n)
//{
//    int i = m + 1;
//    for (i;i < n;i++)
//    {
//        if (narcissistic(i))
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//
//}