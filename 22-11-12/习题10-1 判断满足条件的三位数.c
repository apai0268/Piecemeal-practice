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
///* ��Ĵ��뽫��Ƕ������ */
//int search(int n)
//{
//    int count = 0;//�𰸣�������
//    int sz[3] = { 0 }; //����һ�����顣�����ж�������λ�Ƿ���ȵ����
//    int d = 0;//��������i�ĸ�ֵ����d����Բ��ı�i��ֵ
//
//    for (int i = 101;i <= n;i++)
//    {
//        float a = sqrt(i);
//        int b = sqrt(i); //��Ϊ��mathͷ�ļ������Կ�������sqrt����ֱ�ӿ�����
//        
//        if (a - b == 0)//�����ƽ����������a-b�жϣ���������һ���жϡ�
//        {
//            int p = i;
//            for (int c = 0;c < 3;c++)  //���������ֲ�װ�����顣
//            {
//                d = p % 10;
//                sz[c] = d;
//                p /= 10;
//            }
//            if (sz[0] == sz[1] || sz[0] == sz[2]) //�ж�������ÿλ�Ƿ�����ȡ�
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