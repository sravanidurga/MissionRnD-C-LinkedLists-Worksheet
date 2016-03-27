/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	
	int  temp;
	struct node *p, *q;

	if (head==NULL)
		return NULL;
	p = head;
	while (p)
	{
		q = p->next;
		while (q)
		{
			if (p->num > q->num)
			{
				temp = p->num;
				p->num = q->num;
				q->num = temp;
			}
			q = q->next;
		}
		p = p->next;
	}
	return head;
}