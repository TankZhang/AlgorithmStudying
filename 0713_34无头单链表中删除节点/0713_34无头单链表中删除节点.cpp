// 0713_34无头单链表中删除节点.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"

struct Node
{
	int num;
	struct Node *next;
};

typedef Node* Link;

//删除某个节点
void Delete(Node *p);

int main()
{
	Link head= (Node*)malloc(sizeof(Node));
	head->num = 0;
	Node *p = head;
	for (int i = 1; i < 5; i++)
	{
		Link m=(Node*)malloc(sizeof(Node));
		m->num = i; 
		m->next = NULL;
		p->next = m;
		p = m;
	}
	Node *n = p;
	for (int i = 5; i < 10; i++)
	{
		Link m = (Node*)malloc(sizeof(Node));
		m->num = i;
		m->next = NULL;
		n->next = m;
		n = m;
	}
	Delete(p);

	while (head != NULL)
	{
		printf("%d\n", head->num);
		head = head->next;
	}

	getchar();
    return 0;
}

void Delete(Node *p)
{
	if (p->next == NULL)
		return;
	p->num = p->next->num;
	p->next = p->next->next;
}

