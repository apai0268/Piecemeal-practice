//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define MAXN 20
//
//void CountOff(int n, int m, int out[]);
//
//int main(){
//    int out[MAXN], n, m;
//    int i;
//    scanf("%d %d", &n, &m);
//    CountOff(n, m, out);
//    for (i = 0; i < n; i++)
//        printf("%d ", out[i]);
//    printf("\n");
//
//    return 0;
//}
//
//    void CountOff(int n, int m, int out[])
//    {
//        for (int i = 0;i < n;i++)
//        {
//            out[i] = 0;
//        }
//        int count = 0; int num = 1;
//        while (num <= n) 
//        {
//            for (int i = 0;i < n;i++)
//            {
//                while (out[i] == 0)
//                {
//                    count++;
//                    if (count == m)
//                    {
//                        out[i] = num;
//                        num++;
//                        count = 0;
//                    }
//                    break;
//                }
//            }
//        }
// 
//    }
//
//
//
//
//
//
//


































//{
//    int a[MAXN] = { 0 };
//    int qz[MAXN] = { 0 };
//    int out1[MAXN] = { 0 };
//    int b = 0;
//
//    for (int i = 1;i <= n;i++) //建两个数组
//    {
//        qz[b] = i;
//        a[b] = i;
//        b++;
//    }
//
//    int c = 0;int k = 0;int i = 0;
//    while (b> 0)
//    {
//        if (b <= m/2)
//        {
//            if (i != (m - b*(m/b))-1)
//                i++;
//            else if (i == (m - b * (m / b)) - 1)
//            {
//                out1[c] = a[i];
//                c++;
//                for (int d = m;d < b;d++)
//                {
//                    a[k] = qz[d];
//                    k++;
//                }
//                for (int d = 0;d < m - 1;d++)
//                {
//                    a[k] = qz[d];
//                    k++;
//                }
//                a[b - 1] = 0;
//                b -= 1;
//                for (int i = 0;i <= b;i++)
//                {
//                    qz[i] = a[i];
//                }
//                k = 0;
//                i = 0;
//
//            }
//
//        }
//        else if (b < m&&b>m/2)
//        {
//            if (i != m - b-1)
//                i++;
//            else if (i == m - b-1)
//            {
//                out1[c] = a[i];
//                c++;
//                for (int d = m;d < b;d++)
//                {
//                    a[k] = qz[d];
//                    k++;
//                }
//                for (int d = 0;d < m - 1;d++)
//                {
//                    a[k] = qz[d];
//                    k++;
//                }
//                a[b - 1] = 0;
//                b -= 1;
//                for (int i = 0;i <= b;i++)
//                {
//                    qz[i] = a[i];
//                }
//                k = 0;
//                i = 0;
//              
//            }
//
//        }
//        else
//        {
//            if (i != m - 1)
//                i++;
//            else if (i == m - 1)
//            {
//                out1[c] = a[i];
//                c++;
//                for (int d = m;d < b;d++)
//                {
//                    a[k] = qz[d];                    k++;
//                }
//                for (int d = 0;d < m - 1;d++)
//                {
//                    a[k] = qz[d];
//                    k++;
//                }
//                a[b - 1] = 0;
//                b -= 1;
//                for (int i = 0;i <= b;i++)
//                {
//                    qz[i] = a[i];
//                }
//                k = 0;
//                i = 0;
//               
//            }
//        }
//    }
//    
//
//    for (int i = 0;i <= n;i++)
//    {
//        out[i] = out1[i];
//    }
//}