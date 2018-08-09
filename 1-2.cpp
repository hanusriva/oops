#include<stdio.h>
int main()
{
	int a,c=0,m;
	printf("enter a number");
	scanf("%d",&a);
	while(a>0)
	{
		m=a%10;
		c++;
		a=a/10;
	}
	printf("total digits=%d",c);
}
