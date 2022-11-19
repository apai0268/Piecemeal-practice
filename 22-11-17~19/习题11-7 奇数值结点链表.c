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
        printf("%d ", p->data); //����
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
    struct ListNode* header = malloc(sizeof(struct ListNode));//����ͷ���
    header->data = -1;
    header->next = NULL;

    struct ListNode* pRear = header; //β��ָ��
    int val = -1;
    scanf("%d", &val);
    while (val != -1)
    {
        struct ListNode* newnode = malloc(sizeof(struct ListNode));//�½ڵ�
        newnode->data = val;
        newnode->next = NULL;

        pRear->next = newnode; //β��ָ���½ڵ�
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
    while (*L)//���ԭ����ڵ���ڣ��ͳ������г���
    {
        a = (*L)->data;
        if (a % 2 == 1)//���������,����������ָ��ָ�������ɵĽڵ㣬
        {
            p = (struct ListNode*)malloc(sizeof(struct ListNode));
            p->data = a;
            p->next = NULL;
            if (h1 == NULL)      h1 = p;//��������Ԫ�ڵ�
            else    p1->next = p;//������Ԫ�ڵ㣬��һֱ�������β����ӽڵ�
            p1 = p;
        }
        else if (a>0)//����ֵ����Ϊż���Ľڵ㣬��������һ���µ�����
        {
            p = (struct ListNode*)malloc(sizeof(struct ListNode));
            p->data = a;
            p->next = NULL;
            if (h2 == NULL)      h2 = p;
            else    p2->next = p;
            p2 = p;
        }
        *L = (*L)->next;//�þ�����һֱ�����ߣ�����������������
    }
    *L = h2;//����ż������ĵ�ַ��ԭ���������ָ��
    return h1;//������������ 
}
