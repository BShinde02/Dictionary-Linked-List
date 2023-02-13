#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "dictionary.h"
void displayDict(Node_t *head){
   Node_t* p = head;
  
	if (NULL == p)
	{
		printf("\n\tDictionay has No Words!\n\n");
		return;
		
	}
	
    printf("--------------------------------------------------------------\n");
	printf("\n\t\tName\t\t       Meaning\n");
	printf("--------------------------------------------------------------\n");
	
	while (p != NULL)
	{
		printf("\t\t%s\t\t", p->name);
		printf("\t%s\n", p->meaning);
		p = p->next;
		
	}
	
}
 






