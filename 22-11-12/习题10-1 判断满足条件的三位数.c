//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//
//int search(int n);
//
//int main()
//{
//    int number;
//
//    scanf("%d", &number);
//    printf("count=%d\n", search(number));
//
//    return 0;
//}
//
//
///* 你的代码将被嵌在这里 */
//int search(int n)
//{
//    int count = 0;//答案，计数。
//    int sz[3] = { 0 }; //定义一个数组。用于判断随意两位是否相等的情况
//    int d = 0;//用来计算i的赋值，用d算可以不改变i的值
//
//    for (int i = 101;i <= n;i++)
//    {
//        float a = sqrt(i);
//        int b = sqrt(i); //因为有math头文件，所以可以利用sqrt函数直接开方。
//        
//        if (a - b == 0)//如果开平方是整数（a-b判断），进入下一步判断。
//        {
//            int p = i;
//            for (int c = 0;c < 3;c++)  //挨个把数字拆开装进数组。
//            {
//                d = p % 10;
//                sz[c] = d;
//                p /= 10;
//            }
//            if (sz[0] == sz[1] || sz[0] == sz[2]) //判断数组中每位是否互相相等。
//            {
//                count++;
//            }
//            else if (sz[1] == sz[2])
//            { 
//                count++;
//            }
//
//        }
//
//    } 
//    return count;
//}