#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node *head, *newnode, *temp, *temp2;

void add(int item)
{
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = item;	
	
	if(head == NULL)
	{
		head = newnode;
		newnode->next = NULL;	
	}
	
	else
	{
		temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = NULL;
	}
}

void remove_end()
{
	temp = head;
	while(temp->next != NULL)
	{
		temp2 = temp;
		temp = temp->next;
	}
	temp2 -> next = NULL;
	free(temp);
}

void display()
{
	temp = head;
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

int main()
{
	int item;
	int ch;
	while(ch != 4)
    {
        printf("\nMenu\n1. Insert\n2. Remove\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d" , &ch);

        switch(ch)
        {
            case 1:
                printf("\nEnter the item: ");
                scanf("%d" , &item);
                add(item);
                break;
            case 2:
                remove_end();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("\nWrong choice...Try Again\n"); 
        }
    }
	
	return 0;
}
