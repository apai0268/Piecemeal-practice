//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define MAXS 15
//
//void StringCount(char* s);
//void ReadString(char* s); /* 由裁判实现，略去不表 */
//
//int main()
//{
//    char s[MAXS];
//
//    ReadString(s);
//    StringCount(s);
//
//    return 0;
//}
//void ReadString(char* s)
//{
//    gets(s);
//}
//void StringCount(char* s)
////大写字母个数 小写字母个数 空格个数 数字个数 其它字符个数
//
//{
//    int k = 0;
//    while (s[k])
//    {
//        k++;
//    }
//    int upper = 0;int lower = 0;int blank = 0; int num = 0;int  other = 0;
//    for (int i = 0;i < k;i++)
//    {
//        if
//            (s[i] >= 'A' && s[i] <= 'Z') upper++;
//        else if
//            (s[i] >= 'a' && s[i] <= 'z') lower++;
//        else if
//            (s[i] == ' ')  blank++;
//        else if
//            (s[i] >= '0' && s[i] <= '9') num++;
//        else if
//            (s[i] < '0' && s[i] >= '-9') num++;
//        else
//            other++;
//    }
//    printf("%d %d %d %d %d", upper, lower, blank, num, other);
//}
