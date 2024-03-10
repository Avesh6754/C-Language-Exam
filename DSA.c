#include<stdio.h>
#define size 5

void push();
void pop();
void peek();
void display();
void search();
void update();

int s[size],top=-1;

int main()
{
	int ch;
	do
	{
		printf("\n1. push :\n");
		printf("2.Pop : \n");
		printf("3. Peek :\n");
		printf("4. Display :\n");
		printf("5. search :\n");
		printf("6. update :\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peek();
			break;
			case 4:display();
			break;
			case 5:search();
			break;
			case 6:update();
			break;
		}
	}while(ch!=0);
	return 0;
}

void push()
{
	int x[5],i;
	system("CLS");
	if(top==size-1)
	{
		printf("Stack is full overflow :  ");
	}
	else
	{
		for( i=0;i<5;i++)
		{
		printf("Enter the number :\n[%d]",i);
		scanf("%d",&x[i]);
		top++;
		s[top]=x[i];
			
		}
	}
}
void pop()
{
	int x;
	system("CLS");
	if(top==-1)
	{
		printf("Stack is empty underflow :  ");
	}
	else
	{
		
		x=s[top];
		top--;
		printf("%d is deleted ! ",x);
	}
}
void peek()
{
	
	system("CLS");
	if(top==-1)
	{
		printf("Empty :\n");
	}
	else
	{
		
		printf("Top element is %d \n",s[top]);
	}
}
void display()
{
	int i;
	system("CLS");
	for(i=top;i>=0;i--)
	{
		printf("\n stack[%d] = %d",i,s[i]);
	}
}
void search()
{
	int search_data,i,flag=0;
	system("CLS");
	if(top==-1)
	{
		printf("Satck is empty ");
	}
	else
	{
		printf("Enter search element : \n");
		scanf("%d",&search_data);
		for(i=top;i>=0;i--)
		{
			if(search_data==s[i])
			{
				printf("%d is located at %d ",search_data,i);
				flag=1;
				break;
			}
			
		}
		if(flag==0)
		{
			printf("The data not found !:\n");
		}
	}
}

void update()
{
	int x,pos,i;
	if(top==-1)
	{
		printf("Satck is empty : ");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\nstack [%d] =%d ",i,s[i]);
		}
		printf("Enter the position : \n");
		scanf("%d",&pos);
		
		printf("Entre new number : \n");
		scanf("%d",&s);
		s[pos]=x;
	}
	for(i=top;i>=0;i--)
	{
		printf("\nstack [%d] = %d ",i,s[i]);
	}
}
	



