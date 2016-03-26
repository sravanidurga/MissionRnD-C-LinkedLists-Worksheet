/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	struct node *temp;
	int count[3] = { 0 },i;
	temp = head;
	while (temp)
	{
		count[temp->data]++;
		temp = temp->next;
	}
	temp = head;
	
	for (i = 0; i < 3; i++)
	{
		while (count[i] != 0)
		{
			temp->data = i;
			temp = temp->next;
			count[i]--;
		}
	}
	
}