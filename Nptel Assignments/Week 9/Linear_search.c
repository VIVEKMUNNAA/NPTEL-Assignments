#include <stdio.h>
int linear_search(int[], int, int);
int main()
{
int array[100], search, c, n, position;
scanf("%d", &n); 
for (c = 0; c < n; c++)
scanf("%d", &array[c]); 
scanf("%d", &search);
int result=linear_search(array,n,search);
if(result==-1)
  printf("%d is not present in the array.",search);
else
  printf("%d is present at location %d.",search,result+1);
return 0;
}

int linear_search(int array[],int n,int search){
  int c,flag=0;
  for(c=0;c<n;c++){
    if(array[c]==search){
	  return c;
    }
  }
  if(flag==0)
    return -1;
}