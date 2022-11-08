#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int factorsum(int number);
//void PrintPN(int m, int n);
//
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m,&n);
//    if (factorsum(m) == m) printf("%d is a perfect number\n", m);
//    //if (factorsum(m) != m)printf("%d is not a perfect number\n", m);
//    if (factorsum(n) == n) printf("%d is a perfect number\n", n);
//    PrintPN(m, n);
//
//    return 0;
//}
//
//int factorsum(int number)
//{
//    int a = 1;int sum = 0;
//    for (int i = 2;i <= number / 2;i++)
//    {
//        a = number % i;
//        while (a == 0) {
//            sum += number / i;
//            break;
//        }   
//    }  if (sum == number-1)
//        {
//            return number;
//        }
//    return 0;
//}
//void PrintPN(int m, int n)
//{
//    for (int i = m;i <= n;i++)//遍历m→n
//    {
//        while (factorsum(i) == i)//m-》n查找完数
//        {
//            printf("1");
//            for (int u = i-1;u > 1;u--)//逆序找出完数的因子
//            {
//                if (i%u == 0)
//                {
//                    int c = i / u;
//                    printf("+%d", c);
//                }
//            }
//            printf("=%d\n", i);
//            break;      
//        }
//
//    }
//}