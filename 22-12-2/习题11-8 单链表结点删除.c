#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode* next;
};

struct ListNode* readlist();
struct ListNode* deletem(struct ListNode* L, int m);

void printlist(struct ListNode* L)
{
    struct ListNode* p = L;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int m;
    struct ListNode* L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}


struct ListNode* readlist()
    /* 函数readlist从标准输入读入一系列正整数，按照读入顺序建立单链表。
    当读到−1时表示输入结束，函数应返回指向单链表头结点的指针。*/
{
    struct ListNode* header = malloc(sizeof(struct ListNode));//创建头结点
    header->data = -1;
    header->next = NULL;
  struct ListNode* pRear = header;//尾部指针。不需要分配动态内存。直接指向头结点
    int val = -1;
    scanf("%d", &val);
    while (val != -1)
    {
        struct ListNode* Newnode = malloc(sizeof(struct ListNode));//新节点
        Newnode->data = val;
        Newnode->next = NULL;

        pRear->next = Newnode; //将还在头部的指针指向Newnode；
        pRear = Newnode;//尾部指针指向新节点
        scanf("%d", &val);
    }
    while (val == -1)
    {
        break;
    }
    return header;
}
struct ListNode* deletem(struct ListNode* L, int m)
    //函数deletem将单链表L中所有存储了m的结点删除。
    //返回指向结果链表头结点的指针。
{
    if (L->next==NULL)
    {
        printf("error！\n");
        return NULL;
    }
    struct ListNode* h1 = NULL;
    struct ListNode* p1 = NULL;
    struct ListNode* pcurrent = L->next;

    while (pcurrent != NULL)
    {
        if (pcurrent->data != m)
        {
            struct ListNode* p = malloc(sizeof(struct ListNode));
                p->data = pcurrent->data;
                 p->next = NULL;
                 if (h1 == NULL)
                 h1 = p;
                 else  p1->next = p;
                 p1 = p;
        }
        pcurrent = pcurrent->next;
    }
    return h1;
}