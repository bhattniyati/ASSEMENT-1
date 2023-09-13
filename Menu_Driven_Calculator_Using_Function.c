// Menu driven calculator using function :

#include<stdio.h>

// Function Declarations
void add();
void subtract();
void multiply();
void divide();

// Main Function
void main()
{
	int no1,no2,ans,choice;
	char c;
	
	do{
		printf("----------MENU----------");
		printf("\n 1. Addition \n 2. Substraction \n 3. Multiplication \n 4. Division");
		printf("\n\n\n Enter Your Choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				add();
				break;
				
			case 2:
				subtract();
				break;
				
			case 3:
				multiply();
				break;
				
			case 4:
				divide();
				break;
				
			default:
				printf("Invalid Choice !!!");
				break;
		}
		printf("\n\n Do you want to perform action again: \n y for Yes \n n For No \n\n");
		scanf("\n%c",&c);
	} while(c=='y');
}

// Function for addition of two numbers:
void add()
{
	int no1,no2,ans;
	printf("\nEnter First Number :");
	scanf("%d",&no1);
	printf("\nEnter Second Number :");
	scanf("%d",&no2);
	ans=no1+no2;
	printf("\n Addition = %d",ans);
}

// Function for substraction of two numbers:
void subtract()
{
	int no1,no2,ans;
	printf("\nEnter First Number :");
	scanf("%d",&no1);
	printf("\nEnter Second Number :");
	scanf("%d",&no2);
	ans=no1-no2;
	printf("\n Substraction = %d",ans);
}

// Function for multiplication of two numbers:
void multiply()
{
	int no1,no2,ans;
	printf("\nEnter First Number :");
	scanf("%d",&no1);
	printf("\nEnter Second Number :");
	scanf("%d",&no2);
	ans=no1*no2;
	printf("\n Multiplication = %d",ans);
}

// Function for division of two numbers:
void divide()
{
	int no1,no2,ans;
	printf("\nEnter First Number :");
	scanf("%d",&no1);
	printf("\nEnter Second Number :");
	scanf("%d",&no2);
	ans=no1/no2;
	printf("\n Division = %d",ans);
}
