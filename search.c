#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "dictionary.h"
void searchWord(Node_t *head)
{
    char input_word[20]={'\0'};
    printf("Enter the word that you want to search-");
    scanf("%s",input_word);
    
         FILE *fp1=fopen("dict.txt","r");
        char line[50];
        while(fgets(line,50,fp1)!=NULL)
        {
            char e[40]="";
            strcpy(e, line);
            char em[40]="";
            char *tk= strtok(line, " ");
            strcpy(em,tk);
            if(strcmp(em,input_word)==0)
            {
            
               printf("\t\tWORD FOUND! \n\t\t%s", e);
            }
            
           
        }
    
        fclose(fp1);
        
}
