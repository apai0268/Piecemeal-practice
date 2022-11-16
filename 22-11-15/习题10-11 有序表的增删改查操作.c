#define _CRT_SECURE_NO_WARNINGS 1
/* ��������ɾ�Ĳ���� */
#include<stdio.h>
#define MAXN 10000    /* ������ų�����ʾ����a�ĳ��� */

int Count = 0;        /* ��ȫ�ֱ���Count��ʾ����a�д������Ԫ�ظ��� */
void select(int a[], int option, int value); /* ��������������a���к��ֲ����Ŀ��ƺ��� */
int input_array(int a[]);    /* ������������a�ĺ��� */
void print_array(int a[]);    /* �����������a�ĺ��� */

int insert(int a[], int value);    /* ����������a�в���һ��ֵΪvalue��Ԫ�صĺ��� */
int del(int a[], int value);    /* ɾ����������a�е���value��Ԫ�صĺ��� */
int modify(int a[], int value1, int value2); /* ����������a�е���value1��Ԫ�أ��滻Ϊvalue2 */
int query(int a[], int value);     /* �ö��ַ�����������a�в���Ԫ��value�ĺ��� */

int main(void)
{
    int option, value, a[MAXN];

    if (input_array(a) == -1) {     /* ���ú��������������� a */
        printf("Error");        /* a�����������飬�������Ӧ����Ϣ */
        return 0;
    }

    printf("[1] Insert\n");    /* ����4����ʾ�˵�*/
    printf("[2] Delete\n");
    printf("[3] Update\n");
    printf("[4] Query\n");
    printf("[Other option] End\n");
    while (1) {            /* ѭ�� */
        scanf("%d", &option);         /* �����û�����ı�� */
        if (option < 1 || option > 4) {    /* �������1��2��3��4����ı�ţ�����ѭ�� */
            break;
        }
        scanf("%d", &value);         /* �����û�����Ĳ���value */
        select(a, option, value);         /* ���ÿ��ƺ��� */
        printf("\n");
    }
    printf("Thanks.");            /* �������� */

    return 0;
}

/* ���ƺ��� */
void select(int a[], int option, int value)
{
    int index, value2;

    switch (option) {
    case 1:
        index = insert(a, value);      /* ���ò��뺯������������ a �в���Ԫ��value */
        if (index == -1) {        /* ���������Ѵ��ڣ��������Ӧ����Ϣ */
            printf("Error");
        }
        else {
            print_array(a);        /* ������������������������������a */
        }
        break;
    case 2:
        index = del(a, value);      /* ����ɾ���������������� a ��ɾ��Ԫ��value */
        if (index == -1) {        /* û�ҵ�value���������Ӧ����Ϣ */
            printf("Deletion failed.");
        }
        else {
            print_array(a);         /* ����������������ɾ�������������a */
        }
        break;
    case 3:
        scanf("%d", &value2);         /* �����û�����Ĳ���value2 */
        index = modify(a, value, value2);      /* �����޸ĺ������������� a ���޸�Ԫ��value��ֵΪvalue2 */
        if (index == -1) {            /* û�ҵ�value����vaule2�Ѵ��ڣ��������Ӧ����Ϣ */
            printf("Update failed.");
        }
        else {
            print_array(a);         /* �����������������޸ĺ����������a */
        }
        break;
    case 4:
        index = query(a, value);     /* ���ò�ѯ�������������� a �в���Ԫ��value */
        if (index == -1) {        /* û�ҵ�value���������Ӧ����Ϣ */
            printf("Not found.");
        }
        else {            /* �ҵ����������Ӧ���±� */
            printf("%d", index);
        }
        break;
    }
}

/* ��������뺯�� */
int input_array(int a[])
{
    scanf("%d", &Count);
    for (int i = 0; i < Count; i++) {
        scanf("%d", &a[i]);
        if (i > 0 && a[i] <= a[i - 1]) {    /* a������������ */
            return -1;
        }
    }

    return 0;
}

/* ������������ */
void print_array(int a[])
{
    for (int i = 0; i < Count; i++) { /* ���ʱ�������ּ���һ���ո�ֿ�����ĩ�޿ո� */
        if (i == 0) {
            printf("%d", a[i]);
        }
        else {
            printf(" %d", a[i]);
        }
    }
}



int k = 0;//��ȫ�ֱ�������Ҫ��Del�ǽ���ɾ��������鳤�ȡ�

int insert(int a[], int value)
{
    for (int i = 0;i < Count;i++)//�������ͬ
    {
        if (a[i] == value) return -1;
    }
    int cp[MAXN] = { 0 };
    for (int i = 0;i < Count;i++)   //copy a����
    {
        cp[i] = a[i];
    }
    int k = 0;
    while (0<=a[k])//��������λ��
    {
        k++;
    }

    ///-----------------��a���Ȳ�Ϊ��ʼ���ȵ����-----------//

    while (Count < k)//����������λ���ͼ�һλ���ǵĻ�����
    {
        Count++;int b = 0;
        if (value > a[Count-2])//����ֵ��С���
        {
            a[Count - 1] = value;
        } 
        else if (value < a[0])
        {
            for (int i = 0;i < Count;i++)//����ֵ������
            {
                a[i + 1] = cp[i];
            }
            a[0] = value;
        }
        else if(value > a[0] && value < a[Count - 2])//�����м�����
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

///-----------------�ֳ���Ϊ��ʼ���ȵ����-----------//

      if (value < a[0])//����ֵ��С���
        {
        for (int i = 0;i<Count;i++)
        {
            a[i + 1] = cp[i];
        }
           a[0] = value;
        }
 
      else if (value > a[Count-1])//����ֵ���������
        {
            
            for (int i = Count-1;i>0;i--)
            {
                a[i-1] = cp[i];
            }
            a[Count-1] = value;     
        }
 
      else if (value > a[0] && value < a[Count-1]) //�����м�����
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
    for (int i = 0;i < Count;i++) //��value�ڲ���������
    {
        if (value == a[i])//����ҵ���flag��1
        {
            a[i] = 0;//�ҵ������Ӧ��ֵ���0
            flag = 1;
        }
    }

    while (flag == 0) return -1;//û�ҵ����˳���

        int cp[MAXN] = { 0 };
       for (int i = 0;i < Count;i++)   //copy a����
        {
        cp[i] = a[i];
        }
   
        for (int i = 0; i < Count; i++) //���ø��ƹ�����cp�������a�е�������
        {
            if (a[i] == 0)
            {
                int b = i;
                for (b;b < Count - 1;b++)
                {
                    a[b] = cp[b + 1]; //���a��i��Ϊ0������cp�е�i+1����档
                }
                Count--;
                break;
            }
        }
    }
int modify(int a[], int value1, int value2)
{
    int flag = 0;
    for (int i = 0;i < Count;i++) //��value1 value2���벻�������С�
    {
        if (value2 == a[i])
        {
            return -1;
        }
        if (value1 == a[i]) //����ҵ���ͬ������ı�flagֵ��
        {
            flag = 1;
        }
    }
    while (flag = 0) return -1;   //value1û�ж�Ӧ��һ��˳���


    for (int i = 0;i < Count;i++)
    {
        if (value1 == a[i])
        {
            a[i] = value2;
        }
       
    }
    int cp[MAXN] = { 0 };
    for (int i = 0;i < Count;i++)   //copy a����
    {
        cp[i] = a[i];
    }

    int max = 0;int k = 0;int o = 1;
    max = cp[0];  //��������ĵ�һ������Ϊ���ֵ��Ȼ�����������ֱȽϡ�
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
        a[Count - o] = cp[k]; //����λ������a��������λ��
        cp[k] = -9999; //���ٿ��Ǹղŷ����һ�
        max = 0;
        o++;
        if (Count - o < 0) break;
    }
    return a;
}
int query(int a[], int value)
//���ַ�����������a�в���Ԫ��value��
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

