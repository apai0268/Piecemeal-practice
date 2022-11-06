#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int CountDigit(int number, int digit);
//
//int main()
//{
//    int number, digit;
//
//    scanf("%d %d", &number, &digit);
//    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
//
//    return 0;
//}
//
//int CountDigit(int number, int digit)
//{
//    if (number < 0)
//    {
//        number *= ( - 1);
//     }
//    int remainder,count= 0;
//    for (;number >= 1;number /= 10)
//    {
//        remainder = number % 10;
//        if (remainder == digit) count++;
//    }
//    return count;
//}
