#include<stdio.h>
float func(float x);
int main()
{
int n=10; //Taking n=10 sub intervals
float a,b,integral; 
scanf("%f",&a); 
scanf("%f",&b);
int i;
float h,x,sum=0;
if(b>a)
  h=(b-a)/n;
else
  h=-(b-a)/n;
for(i=1;i<n;i++){
  x=a+i*h;
  sum+=func(x);
}
integral=(h/2)*(func(a)+func(b)+2*sum);
printf("The integral is: %0.6f\n",integral);
return 0;
}
float func(float x){
  return x*x;
}