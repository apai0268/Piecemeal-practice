//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//#define MAXS 10
//
//char* match(char* s, char ch1, char ch2);
//
//int main()
//{
//    char str[MAXS], ch_start, ch_end, * p;
//
//    scanf("%s\n", str);
//    scanf("%c %c", &ch_start, &ch_end);
//    p = match(str, ch_start, ch_end);
//    printf("%s\n", p);
//
//    return 0;
//}
//
//char* match(char* s, char ch1, char ch2)
//{
//    int k = 0;
//    while (s[k])
//    {
//        k++;
//    }
//    for (int i = 0;i < k;i++)
//    {
//        if (s[i] == ch1)
//        {
//            int a = i; 
//            for (a = i;a < k;a++)
//            {
//                printf("%c", s[a]); 
//                if (s[a] == ch2)
//                {
//                    printf("\n");
//                    s = s + i;
//                    return s;//情况1，ch1找到 ch2也找到
//                }
//            }   
//                for (a = 0;a < i;a++) 
//                {
//                    s++;
//                }
//                printf("\n");
//                return s;//情况2 只找到了ch1
//            
//        }
//       
//    }
//    printf("\n");
//    for (int i = 0;i < k;i++)
//    {
//        s++;
//    }
//    return s;//都没找到
//
//}
