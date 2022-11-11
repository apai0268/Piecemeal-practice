//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#define MAXN 20
//
//void strmcpy(char* t, int m, char* s);
//void ReadString(char s[]); 
//
//int main()
//{
//    char t[MAXN], s[MAXN];
//    int m;
//
//    scanf("%d\n", &m);
//    ReadString(t);
//    strmcpy(t, m, s);
//    printf("%s\n", s);
//
//    return 0;
//}
//
//void ReadString(char s[])
//{
//    gets(s);
//}
//
//void strmcpy(char* t, int m, char* s)
//{
//    int k = 0;
//    while (t[k])//计算位数
//    {
//        k++;
// }
//   
//    for (int i = 0;i < m-1;i++)//在m-1位前变0
//    {
//        t[i] = 0;
//    }
//    
//    for (int i = 0;i < MAXN;i++)//初始化S数组
//    {
//        s[i] = 0;
//    }
//    int n = 0;
//    for (int i = 0;i < k;i++)
//    {
//        while (t[i])//遇到非0替换
//        {
//            s[n] = t[i];
//            n++;
//            break;
//        }
//    }
//}