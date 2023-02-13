#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "dictionary.h"
Node_t* importWords(Node_t* head)
{
	FILE *fp;
	fp = fopen("dict.txt", "r");
	if(fp == NULL)
	{
		printf("File does not exist \n");
		return NULL;
	}
	while(1)
	{
		char name[50],meaning[50];
		if (fscanf(fp, "%s %s", name,meaning) <= 0)
			break;

		Node_t* newNode = (Node_t *)malloc(sizeof(Node_t));
		if (newNode == NULL)
		{
			printf("Unable to allocate memory for node \n");
			exit(EXIT_FAILURE);
		}
		strncpy(newNode->name, name, 50);
		strncpy(newNode->meaning, meaning, 50);
		newNode->next = NULL;
		if (head == NULL)
		{
			head = newNode;
		}
		else if (strcmp(name, head->name) < 0)
		{
			newNode->next = head;
			head = newNode;
		}
		else
		{
			Node_t* prev = head;
			Node_t* cur = head->next;
			while (cur != NULL)
			{				
				if (strcmp(newNode->name, cur->name) < 0)
					break;
				prev = cur;
				cur = cur->next;
			}
			prev->next = newNode;
			newNode->next = cur;
		}
	}
	fclose(fp);
	return head;
	
	
}