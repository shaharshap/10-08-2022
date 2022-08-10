#include<stdio.h>
int main()
{
	int n,temp;
	printf("enter a number:");
	scanf("%d",&n);
	int sum=0;
	temp=n;
	while(temp)
	{
		sum+=temp%10;
		temp=temp/10;
	}
	int r=n%sum;
	if(r==0)
	printf("Harshad Number");
	else
	printf("Not Harshad Number");
	return 0;
}
enter a number:156
Harshad Number
