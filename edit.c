#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "dictionary.h"
Node_t * edit(Node_t *head)
{
	char comp[20];
	int choice;
	Node_t *q = head;
	Node_t *p = q->next;
	printf("\n\tEnter the word to be Modified: ");
	scanf("%s", comp);
	
	while (p != NULL && (strcmp(q->name, comp) != 0))
	{
		q = p;
		p = p->next;
	}
	if (NULL == q)
	{
		printf("\n\tThere is No such word!\n\n");
		return head;
	}
	else
	{
		printf("\n\t1. Modify word\n");
		printf("\t2. Modify meaning\n");
		printf("\t3. Exit Modification\n");
		printf("\n\tEnter your Choice: ");
		scanf("%d", &choice);
		
		switch (choice)
		{
		case 1:
			printf("\n\tEnter Modified word: ");
			scanf("%s", q->name);
			
			break;

		case 2:
		
			
			printf("\n\tEnter the Modified meaning: ");
			scanf("%s", q->meaning);
			break;
				
		    
		    
		
		case 3:
			break;
		}
	}
	FILE *fp = fopen("dict.txt", "w");
    Node_t *p1 = head;
	while (p1 != NULL)
	{
		fprintf(fp, "%s %s \n",p1->name, p1->meaning);
		p1 = p1->next;
	}
	fclose(fp);
	
	
}