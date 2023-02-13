
#define CONTACT_SIZE	50
struct Node
{
	/* data */
	char name[CONTACT_SIZE];     //name of contact
	char meaning[CONTACT_SIZE];    //meaning
	
	struct Node* next; //next pointer to store the address of next node
};

typedef struct Node Node_t;

struct dict_entry{
    char word[20];
    char mean[300];
    int synonym_count;
    struct dict_entry* next;
    
    
};
Node_t* createNode(char words[], char meaning[]);
void displayDict(Node_t *head);

Node_t * insert(Node_t *head);
Node_t* importWords(Node_t *head);
Node_t * deleteWord(Node_t *head);
void searchWord();
void writeToFile(Node_t *head);
Node_t * edit(Node_t *head);

void reset();