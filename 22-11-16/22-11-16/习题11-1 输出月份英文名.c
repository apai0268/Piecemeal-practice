//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//char* getmonth(int n);
//
//int main()
//{
//    int n;
//    char* s;
//
//    scanf("%d", &n);
//    s = getmonth(n);
//    if (s == NULL) printf("wrong input!\n");
//    else printf("%s\n", s);
//
//    return 0;
//}
//char* getmonth(int n)
//{
//    switch (n)
//    {
//    case 1: return "January";
//        break;
//    case 2: return "February";
//        break;
//    case 3: return"March";
//        break;
//    case 4: return"April";
//        break;
//    case 5: return"May";
//        break;
//    case 6: return"June";
//        break;
//    case 7: return"July";
//        break;
//    case 8: return"August";
//        break;
//    case 9: return"September";
//        break;
//    case 10: return"October";
//        break;
//    case 11: return"November";
//        break;
//    case 12: 
//        return"December";
//        break;
//    default: 
//        return NULL;
//        break;
//    }
//    return 0;
//}
////
////函数getmonth应返回存储了n
////对应的月份英文名称的字符串头指针。
////如果传入的参数n不是一个代表月份的数字，则返回空指针NULL。
