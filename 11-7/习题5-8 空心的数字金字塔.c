//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void hollowPyramid(int n);
//
//int main(){
//    int n;
//    scanf("%d", &n);
//    hollowPyramid(n);
//    return 0;
//}
//
//void hollowPyramid(int n)
//{
//    int i = 1;int last = 1;
//   for (i = 1;i <= n-1;i++) //除最后一行之外
//   {
//       for (int i2 = 1;i2 <=2*n;i2++)
//       {
//
//               if (i2 == n - i + 1)      { //打印左边的“墙”
//                   printf("%d", i);      }       
//               else if (i2 == n + i - 1) {//打印右边的“墙”
//                       printf("%d", i);   }
//               else if (i2 == 2*n)       { //到最后换行
//                   printf("\n");          }
//                else     printf(" ");  
//        }
//     }
//   if (i == n) //最后一行打印底
//   {
//       for (int p = 1;p < 2*n;p++)
//           printf("%d", n);
//   }
//}
//
/////////////////////////////////////////////以下是我不成功的代码/////////////////////

    //int i = 1;int last = 1;
    //for (i = 1;i <= n;i++)
    //{
    //    for (int i2 = 1;i2 <= n;i2++)
    //    {
    //            if (i2 == n - i + 1)
    //            {
    //                printf("%d", i);
    //            }
    //            if (i2 == n) {
    //                printf("\n");
    //            }
    //            else printf(" ");
    //       
    //    }
    // 
   /* }*/

    /*int i;int num = n;int i1 = 0;int i2 = num;
        for (i = 1;i <= num;i++)
        {
            if (i == num)
            {
                i1++;
                printf("%d", i1);
                for (i2 = num;i2 >= 1;i2--)
                {
                    while (i2 == 1)
                    {
                        printf("\n");
                        break;
                    }
                    printf("-");
                }
            }
            else printf("-");

        }*/
    
