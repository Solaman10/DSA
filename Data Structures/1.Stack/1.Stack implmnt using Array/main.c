#include<stdio.h>
#include<stdlib.h>

#define MAX 3

int STACK[MAX],TOP;
	
void Display(int []);
void Insert(int [],int);
void Delete(int []);

int main()
{
    int item = 0,choice = 0,get=1;
    TOP =-1;
		
     if(get==1)
	 printf("1.Display\n2.Insert\n3.Delete\n4.Exit\nEnter the choice you want: ");
	 scanf("%d",&choice);
	 get--;
    {
	 switch(choice)
	 {
	 	case 1:
	 		Display(STACK);
	 		break;
	 	case 2:
	 		printf("Enter element to be insert: ");
	 		scanf("%d",&item);
	 		Insert(STACK,item);
	 		break;
	 	case 3:
	 		Delete(STACK);
	 		break;
	 	case 4:
	 		exit(0);
	 		break;
	 	default:
		    printf("Enter valid choice...");
		    break;
     }
    } 
    return 0;
}

void Display(int stack[])
{
	if(TOP==-1)
	{
		printf("The stack is empty(underflow)...");
		return;
	}
	
	printf("%d <-- Top",stack[TOP]);
	for(int i=TOP-1;i>=0;i--)
	{
	 printf("%d ",stack[i]);
    }
    printf("\n\n");
}

void Insert(int stack[],int item)
{
	if(TOP==MAX-1)
	{
		printf("Stack is full(overflow)...");
		return;
	}
	TOP++;
	stack[TOP]=item;
	printf("%d inserted successfully\n",item);
}

void Delete(int stack[])
{
	int deletedItem;
	if(TOP==-1)
	{
		printf("Stack is empty...");
		return;
	}
	deletedItem=stack[TOP];
	TOP--;
	printf("%d deleted successfully...",deletedItem);
	return;
}
