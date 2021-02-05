#include<stdio.h>
#define MAX 5
void insert();
void deq();
void display();
int q[MAX];
int front = -1;
int rear = -1;
void main()
{
	int choice;
	while(choice != 3)
	{
		printf("MENU\n");
		printf("1.insert\n 2.remove\n 3.display\n 4.exit");
		printf("Enter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				deq();
				break;
			case 3:
				display();
				break;
			default:
				printf("\n invalid choice!!!!");
		}
	}
	
}
void insert()
{
	int item;
	printf("Enter element : ");
	scanf("%d",&item);
	if(rear == MAX-1 );
	{
		printf("\n overflow");
		return;
	}
	if(rear == -1 && front == -1)
	{
		front = 0;
		rear = 0;
	}
	else
	{
		rear = rear+1;
	}
	q[front] = item;
}

void deqs()
{
	int item;
	if(front == -1 || front>rear)
	{
		printf("underflow");
		return;
	}
	if(front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
	{
		front = front+1;
	}
}
void display()
{
	int i;
	if(front == rear)
	{
		printf("empty queue");
	}
	else
	{
		for(i=0;i<MAX;i++)
		{
			printf("\n%d",&q[i]);
		}
	}
}