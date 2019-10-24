#include<stdio.h>
int main()
{
	int a,b,i,j,k;
	printf("hii .Enter the length of horizontal side");
	scanf("%d",&a);
	printf("Enter the length of vertical height");
	scanf("%d",&b);
	if(a>=b)
	for(i=1;i<=b;i++)
	{
		for(j=a-i;j>0;j--)
		{
			printf(" ");
		}
		for(k=1;k<=a;k++)
		{
			printf(" *");
		}
	printf("\n");
	}
	else
	printf("Interchange the values of length and breadth and try again");
	return(0);
}
