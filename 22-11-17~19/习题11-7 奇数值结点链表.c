#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode* next;
};

struct ListNode* readlist();
struct ListNode* getodd(struct ListNode** L);

void printlist(struct ListNode* L)
{
    struct ListNode* p = L;
    while (p) {
        printf("%d ", p->data); //遍历
        p = p->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode* L, * Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

struct ListNode* readlist()
{
    struct ListNode* header = malloc(sizeof(struct ListNode));//创建头结点
    header->data = -1;
    header->next = NULL;

    struct ListNode* pRear = header; //尾部指针
    int val = -1;
    scanf("%d", &val);
    while (val != -1)
    {
        struct ListNode* newnode = malloc(sizeof(struct ListNode));//新节点
        newnode->data = val;
        newnode->next = NULL;

        pRear->next = newnode; //尾部指向新节点
        pRear = newnode;
        scanf("%d", &val);
    }
    while (val == -1)
    {
        break;
    }
    return header;
}
struct ListNode* getodd(struct ListNode** L)
{
    struct ListNode* p = 0;
    struct ListNode* p1 = 0;
    struct ListNode* p2 = 0;
    struct ListNode* h1 = NULL; struct ListNode* h2 = NULL;
    int a;
    while (*L)//如果原链表节点存在，就持续进行程序
    {
        a = (*L)->data;
        if (a % 2 == 1)//如果是奇数,就让新链表指针指向新生成的节点，
        {
            p = (struct ListNode*)malloc(sizeof(struct ListNode));
            p->data = a;
            p->next = NULL;
            if (h1 == NULL)      h1 = p;//这里是首元节点
            else    p1->next = p;//不是首元节点，就一直在链表的尾部添加节点
            p1 = p;
        }
        else if (a>0)//是数值区域为偶数的节点，就新生成一条新的链表
        {
            p = (struct ListNode*)malloc(sizeof(struct ListNode));
            p->data = a;
            p->next = NULL;
            if (h2 == NULL)      h2 = p;
            else    p2->next = p;
            p2 = p;
        }
        *L = (*L)->next;//让旧链表一直往后走，来生成两条新链表
    }
    *L = h2;//把新偶数链表的地址给原来旧链表的指针
    return h1;//返回奇数链表 
}
