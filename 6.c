#include<stdio.h>
int main()
{
	int a,b,i,j,k;
	printf("Enter the length of horizontal side");
	scanf("%d",&a);
	printf("Enter the length of vertical height");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		for(j=a-i+1;j>0;j--)
		{
			printf(" ");
		}
		for(k=1;k<=a;k++)
		{
			printf("*");
		}
	printf("\n");
	}
	return(0);
}
