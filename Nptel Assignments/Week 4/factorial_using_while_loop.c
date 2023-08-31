#include<stdio.h>
void main()
{
    int n;
    long int fact; 
    scanf("%d",&n);
	fact=1;
	int temp=n;
	while(temp>1)
	{
 	 	fact*=temp;
  		temp-=1;
	}
printf("The Factorial of %d is : %ld",n,fact);
}
