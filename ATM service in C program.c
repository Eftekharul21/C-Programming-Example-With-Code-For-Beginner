/* C Program to Display the ATM Service */
#include <stdio.h>
unsigned long amount=1000,deposit,withdraw;
int choice,pin,k;
char transaction='y';
void main()
{
	while(pin!=1234)
	{
		printf("ENTER YOUR SECRET PIN NUMBER: ");
		scanf("%d",&pin);
		if (pin!=1234)
		printf("PLEASE ENTER VALID PASSWORD.\n");
	}
	do
	{
		printf("\n********Welcome to ATM Service*********\n");
		printf("\t1. Check Balance\n");
		printf("\t2. Withdraw Cash\n");
		printf("\t3. Deposit Cash\n");
		printf("\t4. Quit\n");
		printf("\n***************************************\n\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			printf("\nYOUR BALANCE IS = %lu ",amount);
			break;
		case 2:
			printf("\nENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu",&withdraw);
			if(withdraw%100!=0)
			{
				printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
			else if(withdraw>(amount-500))
			{
				printf("\nINSUFFICENT BALANCE.");
			}
			else
			{
				amount=amount-withdraw;
				printf("\n\nPLEASE COLLECT YOUR CASH.");
				printf("\nYOUR CURRENT BALANCE IS =%lu",amount);
			}
			break;
		case 3:
			printf("\nENTER THE AMOUNT TO DEPOSIT = ");
			scanf("%lu",&deposit);
            amount=amount+deposit;
			printf("YOUR BALANCE IS = %lu",amount);
			break;
		case 4:
			printf("\nTHANK U USING ATM");
			break;
		default:
			printf("\nINVALID CHOICE");
		}
		printf("\n\nDO U WISH TO HAVE ANOTHER SERVICE?(y/n): \n");
		fflush(stdin);
		scanf("%c",&transaction);
		if (transaction=='n'||transaction=='N')
        k=1;
	}
	while (!k);
	printf("\n\nTHANKS FOR USING OUR ATM SERVICE.");
}
