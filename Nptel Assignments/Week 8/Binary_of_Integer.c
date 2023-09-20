#include <stdio.h>
int binary_conversion(int); //function to convert binary to decimal number
int main()
  {
  int num, bin;  
  scanf("%d", &num);   
  bin = binary_conversion(num); 
  printf("The binary equivalent of %d is %d\n", num, bin);
  return 0;
  }
  int bin=0;
  int binary_conversion(int num){
  int rem;
  if(num==0)
    return bin;
  else{
    rem=num%2;
    binary_conversion(num/2);
    bin=bin*10+rem;
  }
}