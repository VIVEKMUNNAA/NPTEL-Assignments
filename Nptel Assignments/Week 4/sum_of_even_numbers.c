#include <stdio.h>  
void main()
{
	int N, sum=0; 
	scanf("%d", &N);
	if(N%2==1)
  		N-=1;
	while(N>0)
	{
  		sum+=N;
  		N-=2;
	}
	printf("Sum = %d", sum);
}
