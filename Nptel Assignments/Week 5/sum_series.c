#include<stdio.h>
int main()
{
	int i,N;
	float sum = 0.0;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
  		sum+=(1.0/i);
	}
	printf("Sum of the series is: %.2f",sum);
	return 0;
}
