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
//    char a[MAXN] = { 0 };//�½�����a
//    while (str[k])//����λ��
//    {
//        k++;
//    }
//    for (int i = 0;i < k;i++)//��strֵ��a��ͬʱstr��ʼ��
//    {
//        a[i] = str[i];
//        str[i] = 0;
//    }
//
//    int e = 0;//eͳ��ɾ���˼����ַ�
//    for (int i = 0;i < k;i++)
//    {
//        if (a[i] == c)
//        {
//            a[i] = 0;
//            e++;
//        }
//    }
//    int b = 0;//a�ĵ�һ���±�
//    int i = 0;//str�ĵ�һ���±�
//    while (i < k - e)//k-eΪɾȥָ���ַ���ĳ���
//    {
//        while (a[b])//������0��i���±�����ӣ����򲻱䡣
//        {
//            str[i] = a[b];
//            i++;
//            break;
//        }
//        b++;
//    }
//}