#include<stdio.h>
int HCF(int, int); 	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d);    
   result = HCF(HCF(a, b), HCF(c,d));
   printf("The HCF is %d", result);
}
int HCF(int a,int b){
  if(b>a){
    int temp=a;
    a=b;
    b=temp;
  }
  int quo,rem;
  quo=a/b;
  rem=a%b;
  if(rem==0)
    return b;
  else
    HCF(b,rem);
}