//input three values from user and find maximum
#include<stdio.h>
#include<conio.h>

int main()
{
	int num1,num2,num3,maxx;
	clrscr();

	printf("\n ENTER THE FIRST NUMBER: ");
	scanf("%d", &num1);
	printf("\n ENTER SECOND NUMBER: ");
	scanf("%d", &num2);
	printf("\n ENTER THIRD NUMBER: ");
	scanf("%d", &num3);

	if ((num1>num2) && (num1>num3)){
		maxx = num1;
	}
	else if (num2>num3){
		maxx = num2;
		}
	else {
		maxx = num3;
		}
	printf("\nMAXIMUM NUMBER FROM INPUTS IS: %d", maxx);
	getch();
	return 0;
}

