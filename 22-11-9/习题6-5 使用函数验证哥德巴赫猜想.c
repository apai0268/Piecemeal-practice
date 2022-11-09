//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//
//int prime(int p);
//void Goldbach(int n);
//
//int main()
//{
//    int m, n, i, cnt;
//    scanf("%d %d", &m, &n);
//    if (prime(m) != 0) printf("%d is a prime number\n", m);
//    if (m < 6) m = 6;
//    if (m % 2) m++;
//    cnt = 0;
//    for (i = m; i <= n; i += 2) {
//        Goldbach(i);
//        cnt++;
//        if (cnt % 5) printf(", ");
//        else printf("\n");
//    }
//    return 0;
//}
//
//int prime(int p)
//{
//    if (p == 2) return 1;
//    else {
//        for (int i = 2;i < p;i++)
//        {
//            if (p % i == 0)
//                return 0;
//        }
//    }
//    return 1;
//}
//
//void Goldbach(int n)
//{
//    int a = 0;int x = 2;int flag = 0;
//    for (x = 2;x < n;x++)
//    {
//        if (prime(x)) 
//        {   a = n - x;
//           if(prime(a))
//           { printf("%d=%d+%d", n, x, a); 
//           flag = 1;
//                break;
//            }
//        }
//
//    }
 