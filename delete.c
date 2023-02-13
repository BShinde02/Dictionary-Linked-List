#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "dictionary.h"
Node_t * deleteWord(Node_t *head){
    char input_word[20]={'\0'};
    printf("Enter the word that you want to delete-");
    scanf("%s",input_word);
    Node_t *temp = head;
    Node_t *prev;
    int result = strcmp(input_word,temp -> name);
    
    if(result == 0){
        head = temp -> next;
        
        free(temp);
        printf("The word has been deleted.\n");
    }
    else{
        while(temp->next !=NULL)
        {
            prev = temp;
            temp = temp -> next;
            result = strcmp(input_word,temp->name);
            if(result == 0){
                prev -> next = temp -> next;
                free(temp);
                printf("The word has been deleted.\n");
                break;
            }
        }
    }
    
   
    return head;
}

void writeToFile(Node_t *head)
{
 Node_t *temp1 = head;
    FILE *fp = fopen("dict.txt", "w");
    while(temp1 !=NULL)
    {
        fputs(temp1->name, fp);
        fputc(' ', fp);
        fputs(temp1->meaning, fp);
        fputc('\n', fp);
        // Incrementing temp
        temp1 = temp1 -> next;
        
    }
    fclose(fp);
}
