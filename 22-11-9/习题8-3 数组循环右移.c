#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAXN 10

void ArrayShift(int a[], int n, int m);

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    ArrayShift(a, n, m);
    for (i = 0; i < n; i++) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

void ArrayShift(int a[], int n, int m)
{

    int b[MAXN] = { 0 }; 
    //int c[MAXN] = { 0 };
    for (int i = 0;i < n;i++)
    {
        b[i] = a[i];
    }
   /* for (int i = 0;i < n;i++)
    {
        c[i] = a[i];
    }*/
    int d = m;
    for (int i = 0;i < n - d;i++)
    {
        a[m] = b[i];
        m++;
    }
    int e = n - d; //5
    for (int p = 0;p <d;p++)
    {
        a[p] = b[e];
        e++;
    }
}
