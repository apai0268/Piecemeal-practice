//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define MAXN 10
//
//struct student {
//    int num;
//    char name[20];
//    int score;
//    char grade;
//};
//
//int set_grade(struct student* p, int n, struct student stu[]);
//
//int main()
//{
//    struct student stu[MAXN], * ptr; //指针变量跟stu的是一样的
//    int n, i, count;
//
//    ptr = stu;
//    //指针变量 ptr 指向结构体数组的第一个元素，即指向 stu[0]。
//
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);
//    }//输入部分
//
//    count = set_grade(ptr, n, stu);
//
//    printf("The count for failed (<60): %d\n", count);
//   // 利用set_grade部分输出有几个不及格
//    printf("The grades:\n");
//    for (i = 0; i < n; i++)
//        printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
//    //输出分数评级
//    return 0;
//}
//
//int set_grade(struct student* p, int n, struct student stu[])
//{
//    p = stu;
//    int a = 0;//不及格个数
//    for (p;p<stu+n;++p)
//    {
//        while (p->score < 60)
//        {
//            a++;
//            break;
//        }
//        while (p->score >= 0 && p->score <= 100)
//        {
//            if (p->score < 60)
//                p->grade = 'D';
//            else if (p->score >= 60 && p->score < 70)
//                p->grade = 'C';
//            else if (p->score >= 70 && p->score <= 84)
//                p->grade = 'B';
//            else 
//                p->grade = 'A';
//            break;
//        }
//  
//    }
//    return a;
//}
