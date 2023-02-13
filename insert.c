#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "dictionary.h"
Node_t * insert(Node_t *head){
    Node_t *temp = head;
    char input_word[20]={'\0'};
    char arr[300]={'\0'};
    
    printf("Enter your word-");
    scanf(" %[^\n]s",input_word);
    
    while(temp!=NULL){
        if(strcmp(input_word,temp->name)==0)
        {
            printf("Same word found in dictionary \n");
            return head;
        }
        temp=temp->next;
    }
    
    printf("enter the meaning of the word-");
    scanf(" %[^\n]s",arr);
    
    Node_t* newN = createNode(input_word,arr);
    
    if(head == NULL)
    {
        head = newN;
    }
    else if ( strcmp(input_word , head->name)  < 0){
        newN->next = head;
        head = newN;
    }
    else
    {
        
        Node_t *prev = head;
        temp = head;           
        while(temp != NULL && strcmp(input_word, temp->name) > 0)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = newN;
        newN->next = temp;
    }
     FILE *fp=fopen("dict.txt","a");
        fputs(input_word, fp);
        fputs(" ", fp);
        fputs(arr, fp);
        fputs("\n", fp);
        fclose(fp);
   printf("Word added Successfullly in Dictionary!\n");
    return head;
}
