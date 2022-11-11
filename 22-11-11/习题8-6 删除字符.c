//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define MAXN 20
//
//void delchar(char* str, char c);
//void ReadString(char s[]);
//
//int main()
//{
//    char str[MAXN], c;
//
//    scanf("%c\n", &c);
//    ReadString(str);
//    delchar(str, c);
//    printf("%s\n", str);
//
//    return 0;
//}
//
//void ReadString(char s[])
//{
//    gets(s);
//}
//void delchar(char* str, char c)
//{
//    int k = 0;
//    char a[MAXN] = { 0 };//新建数组a
//    while (str[k])//计算位数
//    {
//        k++;
//    }
//    for (int i = 0;i < k;i++)//将str值给a，同时str初始化
//    {
//        a[i] = str[i];
//        str[i] = 0;
//    }
//
//    int e = 0;//e统计删掉了几个字符
//    for (int i = 0;i < k;i++)
//    {
//        if (a[i] == c)
//        {
//            a[i] = 0;
//            e++;
//        }
//    }
//    int b = 0;//a的第一项下标
//    int i = 0;//str的第一项下标
//    while (i < k - e)//k-e为删去指定字符后的长度
//    {
//        while (a[b])//遇到非0后i的下标才增加，否则不变。
//        {
//            str[i] = a[b];
//            i++;
//            break;
//        }
//        b++;
//    }
//}