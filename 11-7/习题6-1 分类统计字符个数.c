//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define MAXS 15
//
//void StringCount(char s[]);
//void ReadString(char s[]);
//
//int main()
//{
//    char s[MAXS];
//    ReadString(s);
//    StringCount(s);
//    return 0;
//}
//void ReadString(char s[])
//{
//    gets(s);//���������ַ���������س�����
//}
//void StringCount(char s[])
//{//letter = Ӣ����ĸ����, blank = �ո��س�����, digit = �����ַ�����, other = �����ַ�����
//    int a = strlen(s);
//    int letter = 0;
//    int blank = 0;
//    int digit = 0;
//    int other = 0;
//    for (int i = 0;i < a;i++)
//    {
//        int n= s[i];
//        if (n >= 65 && n <= 90) {
//            letter++;
//         }
//        else if (n >= 95 && n <= 122)
//        {
//            letter++;
//        }
//        else if (n == 32|| n == 13)
//        {
//           blank++;
//        }
//        else if (n>=49 && n <= 57 )
//        {
//            digit++;
//        }
//        else
//        {
//            other++; }
//         }
//    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
//   
//}