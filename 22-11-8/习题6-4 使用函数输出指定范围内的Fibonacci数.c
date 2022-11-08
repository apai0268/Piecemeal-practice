#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main()
{
    int m, n, t;
    //scanf("%d",&t);
    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);
    return 0;
}

/* 你的代码将被嵌在这里 */
int fib(int n)
{
    int a = 1; int b = 1;int c = 0;
    if (n == 1) {
        return 1;
    }
    else if (n == 2)
    {
        return 1;
    }
    else {
        for (int i = 3;i < 10000;i++)
        {
            if (i == 3)
            {
                c = a + b;
                a = c;
                c = a + b;
                b = a;
                a = c;
            }
            while (i > 3)
            {
                c = a + b;
                b = a;
                a = c;            
                break;
            }
            while (i == n)
            {
                return b;
                break;
            }
        }
    }
}

void PrintFN(int m, int n)
{
    int flag = 0;
    for (int i = m;i <= n;i++)
    {
        int q = 1;
        while (fib(q) < n)
        {
            int a = fib(q);
            if (i == a)
            {
                printf("%d ", i);
                flag = 1;
            }
            q++;
        }
           
    }
    if (flag == 0)
    {
        printf("No Fibonacci number\n");
    }
}