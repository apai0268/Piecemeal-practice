#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int factorsum(int number);
void PrintPN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (factorsum(m) == m) printf("%d is a perfect number\n", m);
    if (factorsum(n) == n) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
