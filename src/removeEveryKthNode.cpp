/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	
	struct node *prev = NULL, *curr = NULL, *temp = NULL;
	int count = 0, i = 0;
	if (head==NULL || K<=0||K==1)
		return NULL;
	curr = head;
	while (curr)
	{
		count++;
		curr = curr->next;
	}
	if (count < K)
		return head;
	else
	{
		temp = prev=head;
		for (i = 1; i <= count; i++)
		{
			if (i % K == 0)
			{
				prev->next = temp->next;

			}
			prev = temp;
			temp = temp->next;
		}
		
	}
	return head;
}