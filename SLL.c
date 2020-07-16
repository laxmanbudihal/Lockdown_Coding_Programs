/*

Hint: First Create a Singly Linked List Stack with the node corresponding to First Element is the base of the stack; and its link field must be always Null.
When you push First Element, It is the First and it is Base of the stack. Its Link must be Null. top pointer pointing to First. (top = First)
When you push any element, (No need of checking Stack full case because SLL is dynamic) Create a new node called temp using malloc function and insert the a number into Data field, and Link field must be pointing to top; and move the pointer top to point to temp.
When you pop, First check for stack Empty. if First == NULL, then Stack Empty. If it is not empty, The pointer temp must be pointing to top. Move the pointer top to top->link. delete temp.
When you display the stack element, First Check for Stack Empty as in pop operation. If it is not empty, Display all the elements of current stack starting from top to First.

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct NODE             /* NODE structure for Student Data*/
{
    int sem;
    char name[20],branch[10],usn[20],phno[20];
    struct NODE *link;  /* Node Link to next Student Data*/
};

typedef struct NODE *NODEPTR; /* Node Pointer for NODE structure*/
NODEPTR first = NULL;         /* first Pointer for LIST*/
int count=0;


NODEPTR create_node()
{
    NODEPTR newnode = (NODEPTR)malloc(sizeof(struct NODE)); /* Create NODE dynamically*/
    printf("Enter the Student USN\n");
    scanf("%s",newnode->usn);
    printf("Enter the Student Name\n");
    scanf("%s",newnode->name);
    printf("Enter the Student BRANCH\n");
    scanf("%s",newnode->branch);
    printf("Enter the Student SEMESTER\n");
    scanf("%d",&newnode->sem);
    printf("Enter the Student PHONE NO.\n");
    scanf("%s",newnode->phno);
    newnode->link = NULL;  /* Initially NODE link is set to NULL*/
    count++;            /* Increment count when NODE i created*/
    return newnode;        /* return NODE Pointer */
}

void insert_front() /* Function to insert NODE to front */
{
    NODEPTR temp = create_node();
    if(first==NULL)
    first=temp;
    else
    {
    temp->link = first;
    first=temp;
	}
}
void delete_front()
{
    NODEPTR temp;
    temp = first;
    if(first != NULL)
    {
        first = temp->link;
        temp-> link = NULL;
        free(temp);
        count--;
        printf("Front node deleted successfully\n");
    }
    else
        printf("ALERT!!!:List is Empty\n");
}
void insert_end()
{
    NODEPTR ptr;
    NODEPTR temp = create_node();
    if(first==NULL)
    first=temp;
    else
    {
    	ptr = first;
        while(ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = temp;
	}

}

void delete_end()
{
    NODEPTR ptr, prev;
    ptr = first;
    if(first==NULL)
    printf("ALERT!!!:List is Empty\n");
	else if(first->link == NULL)
    {
        first = NULL;
        free(ptr);
        count--;
        printf("End node deleted successfully\n");
    }
    else
    {
        while(ptr->link != NULL)
        {
            prev = ptr;
            ptr = ptr->link;
        }
        prev->link = NULL;
        free(ptr);
        count--;
        printf("End node deleted successfully\n");
    }    
}

void display()
{
    NODEPTR ptr;
    ptr = first;
    if(first == NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        printf("The List values are ....\n");
        printf("[USN, Name, Branch, Sem, Phone]\n");
        while(ptr!= NULL)
        {
            printf("\n[%s,%s,%s,%d,%s]-->",ptr->usn,ptr->name,ptr->branch,ptr->sem,ptr->phno);
            ptr = ptr->link;
        }
        printf("\nNODE COUNT = %d\n",count);
    }

}

int main()
{
	int  n, ch, i;
	while (1)
	{
		printf("\n**********Singly Linked List Operations Menu**********\n");
		printf("1. Create a SLL of N Students Data by using front insertion\n");
		printf("2. Display the status of SLL\n");
		printf("3. Insertion / Deletion at End of SLL\n");
		printf("4. Insertion / Deletion at Front of SLL\n");
		printf("5. Exit\n");
		printf("Enter your choice:\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1: printf("Enter the value of N to create SLL\n");
                scanf("%d", &n);
                for(i=1;i<=n;i++)
                {
                    printf("Enter a %d node to insert towards front of SLL\n",i);
                    insert_front();
                }
                break;
		case 2: display();
				break;
		case 3: printf("Press 1 to Insert End or 2 to Delete End\n");
                scanf("%d", &ch);
                if(ch == 1)
                {
                    printf("Enter a node to insert towards end of SLL\n");
                    insert_end();
                }
                else if(ch == 2)
                {
                    delete_end();
                }
                else
                    printf("Invalid Entry\n");
                break;
		case 4: printf("Press 1 to Insert Front or 2 to Delete Front\n");
                scanf("%d", &ch);
                if(ch == 1)
                {
                    printf("Enter a node to insert to Front of SLL\n");
                    insert_front();
                }
                else if(ch == 2)
                {
                    delete_front();
                }
                else
                    printf("Invalid Entry\n");
                break;
        case 5: exit(0);
		default: printf("Enter the valid choice\n\n");
			break;
		}
	}
	return 0;
}
