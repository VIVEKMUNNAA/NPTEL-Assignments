#include <stdio.h>
int checkPrime(int, int); 

int main()
{
    int num, check;
    scanf("%d", &num); 
    check = checkPrime(num, num/2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
int checkPrime(int num, int i){
  if(i==1)
    return 1;
  else{
    if(num%i==0)
      return 0;
    else
      return checkPrime(num,i-1);
  }
}