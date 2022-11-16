#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex(char* s);

int main()
{
    int n;
    char s[MAXS];

    scanf("%s", s);
    n = getindex(s);
    if (n == -1) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}
int getindex(char* s)
{
    if (strcmp("Monday", s)==0)
    {
        return 1;
    }
    else if (strcmp("Tuesday", s) == 0)
    {
        return 2;
    }
    else if (strcmp("Wednesday", s) == 0)
    {
        return 3;
    }
    else if (strcmp("Thursday", s) == 0)
    {
        return 4;
    }
    else if (strcmp("Friday", s) == 0)
    {
        return 5;
    }
    else if (strcmp("Sunday", s) == 0)
    {
        return 0;
    }
    else if (strcmp("Saturday", s) == 0)
    {
        return 6;
    }
    else
    {
       return -1;
    }
            }
