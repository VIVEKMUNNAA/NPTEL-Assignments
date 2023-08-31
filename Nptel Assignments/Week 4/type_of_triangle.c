#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c);
	if((a<b+c)&&(b<a+c)&&(c<b+a)){
  		if((a==b)&&(b==c)){
    		printf("Equilateral Triangle");
    	}
  		else if((a==b)||(b==c)||(c==a)){
    		printf("Isosceles Triangle");
   		}
  		else if((a*a == (b*b + c*c))||(b*b == (a*a + c*c))||(c*c == (a*a + b*b))){
    		printf("Right-angle Triangle");
    	}
  		else
    		printf("Scalene Triangle");
	}
	else
  		printf("Triangle is not possible");
	return 0;
}
