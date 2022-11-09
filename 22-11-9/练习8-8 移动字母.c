#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//#define MAXS 10
//
//void Shift(char s[]);
//void GetString(char s[]); 
//
//int main()
//{
//    char s[MAXS];
//    GetString(s);
//    Shift(s);
//    printf("%s\n", s);
//
//    return 0;
//}
////memset()本题要求编写函数，将输入字符串的前3个字符移到最后。
//void Shift(char s[])
//{
//    int a = strlen(s);
//    char c[MAXS] = {0};
//
//    for (int i = 0;i <= a;i++)
//    {
//        c[i] = s[i];
//    }
//
//    int o = 0;int u = 3;
//    for (int n = a-3 ;n < a ;n++)
//    {
//        s[o] = c[n];
//        s[u] = c[o];
//        o++;
//        u++;   
//     }
//    while (a > 6)
//    {
//        for (o;o < a - 3;o++)
//        {
//            s[u] = c[o];
//            u++;
//        }
//        break;
//    }
//}
//void GetString(char s[])
//{
//    gets(s);
//}
