#include <stdio.h>
int main()
{
    int N; 
    scanf("%d",&N);
    int temp=N,count=0;
	while(temp!=0){
  		count+=1;
  		temp/=10;
	}
	printf("The number %d contains %d digits.",N,count);
	return 0;
}
