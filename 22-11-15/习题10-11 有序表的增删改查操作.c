#define _CRT_SECURE_NO_WARNINGS 1
/* 有序表的增删改查操作 */
#include<stdio.h>
#define MAXN 10000    /* 定义符号常量表示数组a的长度 */

int Count = 0;        /* 用全局变量Count表示数组a中待处理的元素个数 */
void select(int a[], int option, int value); /* 决定对有序数组a进行何种操作的控制函数 */
int input_array(int a[]);    /* 输入有序数组a的函数 */
void print_array(int a[]);    /* 输出有序数组a的函数 */

int insert(int a[], int value);    /* 在有序数组a中插入一个值为value的元素的函数 */
int del(int a[], int value);    /* 删除有序数组a中等于value的元素的函数 */
int modify(int a[], int value1, int value2); /* 将有序数组a中等于value1的元素，替换为value2 */
int query(int a[], int value);     /* 用二分法在有序数组a中查找元素value的函数 */

int main(void)
{
    int option, value, a[MAXN];

    if (input_array(a) == -1) {     /* 调用函数输入有序数组 a */
        printf("Error");        /* a不是有序数组，则输出相应的信息 */
        return 0;
    }

    printf("[1] Insert\n");    /* 以下4行显示菜单*/
    printf("[2] Delete\n");
    printf("[3] Update\n");
    printf("[4] Query\n");
    printf("[Other option] End\n");
    while (1) {            /* 循环 */
        scanf("%d", &option);         /* 接受用户输入的编号 */
        if (option < 1 || option > 4) {    /* 如果输入1、2、3、4以外的编号，结束循环 */
            break;
        }
        scanf("%d", &value);         /* 接受用户输入的参数value */
        select(a, option, value);         /* 调用控制函数 */
        printf("\n");
    }
    printf("Thanks.");            /* 结束操作 */

    return 0;
}

/* 控制函数 */
void select(int a[], int option, int value)
{
    int index, value2;

    switch (option) {
    case 1:
        index = insert(a, value);      /* 调用插入函数在有序数组 a 中插入元素value */
        if (index == -1) {        /* 插入数据已存在，则输出相应的信息 */
            printf("Error");
        }
        else {
            print_array(a);        /* 调用输出函数，输出插入后的有序数组a */
        }
        break;
    case 2:
        index = del(a, value);      /* 调用删除函数在有序数组 a 中删除元素value */
        if (index == -1) {        /* 没找到value，则输出相应的信息 */
            printf("Deletion failed.");
        }
        else {
            print_array(a);         /* 调用输出函数，输出删除后的有序数组a */
        }
        break;
    case 3:
        scanf("%d", &value2);         /* 接受用户输入的参数value2 */
        index = modify(a, value, value2);      /* 调用修改函数在有序数组 a 中修改元素value的值为value2 */
        if (index == -1) {            /* 没找到value或者vaule2已存在，则输出相应的信息 */
            printf("Update failed.");
        }
        else {
            print_array(a);         /* 调用输出函数，输出修改后的有序数组a */
        }
        break;
    case 4:
        index = query(a, value);     /* 调用查询函数在有序数组 a 中查找元素value */
        if (index == -1) {        /* 没找到value，则输出相应的信息 */
            printf("Not found.");
        }
        else {            /* 找到，则输出对应的下标 */
            printf("%d", index);
        }
        break;
    }
}

/* 有序表输入函数 */
int input_array(int a[])
{
    scanf("%d", &Count);
    for (int i = 0; i < Count; i++) {
        scanf("%d", &a[i]);
        if (i > 0 && a[i] <= a[i - 1]) {    /* a不是有序数组 */
            return -1;
        }
    }

    return 0;
}

/* 有序表输出函数 */
void print_array(int a[])
{
    for (int i = 0; i < Count; i++) { /* 输出时相邻数字间用一个空格分开，行末无空格 */
        if (i == 0) {
            printf("%d", a[i]);
        }
        else {
            printf(" %d", a[i]);
        }
    }
}



int k = 0;//新全局变量，主要从Del那接收删掉后的数组长度。

int insert(int a[], int value)
{
    for (int i = 0;i < Count;i++)//检查是相同
    {
        if (a[i] == value) return -1;
    }
    int cp[MAXN] = { 0 };
    for (int i = 0;i < Count;i++)   //copy a数组
    {
        cp[i] = a[i];
    }
    int k = 0;
    while (0<=a[k])//输入的最初位数
    {
        k++;
    }

    ///-----------------现a长度不为初始长度的情况-----------//

    while (Count < k)//如果不是最初位数就加一位，是的话不变
    {
        Count++;int b = 0;
        if (value > a[Count-2])//输入值最小情况
        {
            a[Count - 1] = value;
        } 
        else if (value < a[0])
        {
            for (int i = 0;i < Count;i++)//输入值最大情况
            {
                a[i + 1] = cp[i];
            }
            a[0] = value;
        }
        else if(value > a[0] && value < a[Count - 2])//在数中间的情况
        {
           for (int i = 0;i < Count - 1;i++)
            {
               if (value > a[i] && value < a[i + 1])
               {
                   b = i; 
                   for (b = i;b < Count;b++)
                   {
                       a[i + 2] = cp[i + 1];
                   }
                   a[i + 1] = value;
                   break;
               }
             
            }
        }

        return a;
    }

///-----------------现长度为初始长度的情况-----------//

      if (value < a[0])//输入值最小情况
        {
        for (int i = 0;i<Count;i++)
        {
            a[i + 1] = cp[i];
        }
           a[0] = value;
        }
 
      else if (value > a[Count-1])//输入值是最大的情况
        {
            
            for (int i = Count-1;i>0;i--)
            {
                a[i-1] = cp[i];
            }
            a[Count-1] = value;     
        }
 
      else if (value > a[0] && value < a[Count-1]) //在数中间的情况
        {
          for (int i = 0;i < Count;i++)
          {
              if (a[i] <value && a[i+1]>value)
              {
                  int b = i;
                  for (i = b;i > 0;i--)
                  {
                      a[i - 1] = cp[i];
                  }
                  a[b] = value;
                  break;
              }
          }
        }
      return a;
    }

int del(int a[], int value)
{
   
    int flag = 0;
    for (int i = 0;i < Count;i++) //找value在不在数组里
    {
        if (value == a[i])//如果找到，flag标1
        {
            a[i] = 0;//找到后把相应数值变成0
            flag = 1;
        }
    }

    while (flag == 0) return -1;//没找到，退出。

        int cp[MAXN] = { 0 };
       for (int i = 0;i < Count;i++)   //copy a数组
        {
        cp[i] = a[i];
        }
   
        for (int i = 0; i < Count; i++) //利用复制过来的cp数组完成a中的新排序
        {
            if (a[i] == 0)
            {
                int b = i;
                for (b;b < Count - 1;b++)
                {
                    a[b] = cp[b + 1]; //如果a里i项为0，则用cp中的i+1项代替。
                }
                Count--;
                break;
            }
        }
    }
int modify(int a[], int value1, int value2)
{
    int flag = 0;
    for (int i = 0;i < Count;i++) //找value1 value2在与不在数组中。
    {
        if (value2 == a[i])
        {
            return -1;
        }
        if (value1 == a[i]) //如果找到相同的数则改变flag值。
        {
            flag = 1;
        }
    }
    while (flag = 0) return -1;   //value1没有对应的一项，退出。


    for (int i = 0;i < Count;i++)
    {
        if (value1 == a[i])
        {
            a[i] = value2;
        }
       
    }
    int cp[MAXN] = { 0 };
    for (int i = 0;i < Count;i++)   //copy a数组
    {
        cp[i] = a[i];
    }

    int max = 0;int k = 0;int o = 1;
    max = cp[0];  //设置数组的第一个数字为最大值，然后与其他数字比较。
    while (1)
    {
        for (int i = 0; i < Count; i++)
        {
            if (max < cp[i])
            {
                max = cp[i];
                k = i;
            }
        }
        a[Count - o] = cp[k]; //最大的位数放入a数组的最大位。
        cp[k] = -9999; //不再考虑刚才放入的一项。
        max = 0;
        o++;
        if (Count - o < 0) break;
    }
    return a;
}
int query(int a[], int value)
//二分法在有序数组a中查找元素value，
{
    int left = 0;int right = Count-1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == value)
        {
            return mid;
        }
        else if (mid < value)
        {
            left = mid + 1;
        }
        else if (mid > value) {
            right = mid + 1;
        }
    }
    return -1;
}

