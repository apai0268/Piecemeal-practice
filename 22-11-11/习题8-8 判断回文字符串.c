#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//
//#define MAXN 20
//typedef enum { false, true } bool;
//
//bool palindrome(char* s);
//
//int main()
//{
//    char s[MAXN];
//
//    scanf("%s", s);
//    if (palindrome(s) == true)
//        printf("Yes\n");
//    else
//        printf("No\n");
//    printf("%s\n", s);
//
//    return 0;
//}
//
//bool palindrome(char* s)
//{
//    int k = 0; 
//    int a = 0;
//    while (s[k])//¼ÆËãÎ»Êý
//    {
//        k++;
//    }
//    int b = k;
//    for (int i = 0;i < k;i++)
//    {
//        if (s[i] == s[b-1])
//        {
//           a++;
//           b--;
//        }
//        while (a == k)
//        {
//            return 1;
//        }
//        
//    }
//    return 0;
//
//
//}