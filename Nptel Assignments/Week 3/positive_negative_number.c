#include <stdio.h>
int main()
{
    double number;
    scanf("%lf", &number);
	if(number==0)
      	printf("The number is 0.");
	else if(number<0)
      	printf("Negative number.");
    else
      	printf("Positive number.");
 	return 0;
}
