#include <stdio.h>
int main()
{
    int N; 
    scanf("%d",&N);
    int i,fsum=0;
	for(i=1;i<=N/2;i++){
  		if(N%i==0){
    	fsum+=i;
  		}
	}	
	if(fsum==N)
  		printf("%d is a perfect number.",N);
	else
  		printf("%d is not a perfect number.",N);
	return 0;
}
