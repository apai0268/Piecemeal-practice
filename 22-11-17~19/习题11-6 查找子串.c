//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define MAXS 30
//
//char* search(char* s, char* t);
//void ReadString(char s[]);
//
//int main()
//{
//    char s[MAXS], t[MAXS], * pos;
//
//    ReadString(s);
//    ReadString(t);
//    pos = search(s, t);
//    if (pos != NULL)
//        printf("%d\n", pos - s);
//    else
//        printf("-1\n");
//
//    return 0;
//}
//void ReadString(char s[])
//{
//    gets(s);
//}
//char* search(char* s, char* t)
////����search���ַ���s�в����Ӵ�t��
////�����Ӵ�t��s�е��׵�ַ����δ�ҵ����򷵻�NULL��
//{
//    int k = 0; int u = 0;
//    while (s[k])
//    {
//        k++;
//    } 
//    while (t[u])
//    {
//        u++;
//    }
//
//    int p = 0; int d = 0;
//    for (int i = 0;i < k;i++)
//    {
//        if (s[i] == t[p])
//        {
//            d = i;
//            for (i;p< u;i++)
//            {
//                if (s[i] == t[p])
//                    p++;
//                else if (s[i] != t[p])
//                {
//                    p = 0;
//                    break;
//                } 
//                while(p == u)
//                {
//                    return &s[d];
//                }
//                
//            }
//        }
//    }
//    return NULL;
//}
