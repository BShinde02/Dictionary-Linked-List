#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dictionary.h"
int main(){
    int option = 0;
    Node_t *head = NULL, *head2=NULL;

	head = importWords(head);
    printf("Displaying from Main  \n");
	displayDict(head);  
    while(option!=6)
        printf("1.Insert a word\n");
        printf("2.delete a word\n");
        printf("3.Search a word\n");
        printf("4.Display list\n");
        printf("5.Edit meaning or word\n");
        printf("6.Quit\n");
        
        printf("Enter your option - ");
        scanf("%d",&option);
        
        switch(option){
            case 1:
                head = insert(head);
                break;
            case 2:
                head2 = deleteWord(head);
                writeToFile(head2);
                break;
            case 3:
                searchWord(head);
                break;
            case 4:
                displayDict(head);
                break;
            case 5:
                edit(head);
                break;
            case 6:
                break;
        }
    }
}



