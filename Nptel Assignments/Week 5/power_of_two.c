#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int temp=N;
	while((temp%2==0)&&(temp!=2)){
  		temp/=2;
	}
	if(temp==2)
  		printf("%d is a number that can be expressed as power of 2.",N);
	else
  		printf("%d cannot be expressed as power of 2.",N);
	return 0;
}
