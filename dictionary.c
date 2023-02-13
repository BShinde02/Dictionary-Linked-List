#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dictionary.h"

struct dict_entry* head=NULL;

Node_t* createNode(char words[], char meaning[])
{
    Node_t *newNode =malloc(sizeof(Node_t));
    if(newNode == NULL)
    
    {
        printf("Unable to allocate memory \n");
        exit(EXIT_FAILURE);
    }
    
    strcpy(newNode->name,words);
    strcpy(newNode->meaning,meaning);
    newNode -> next = NULL;
    return newNode;
}

