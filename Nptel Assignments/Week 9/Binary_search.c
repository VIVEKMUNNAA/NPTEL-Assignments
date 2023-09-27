#include <stdio.h>
int main()
{
int c, n, search,
array[100];
scanf("%d",&n); 
for (c = 0; c < n; c++)
scanf("%d",&array[c]);
scanf("%d", &search);
int beg=0,end=n-1;
int mid=((beg+end)/2);
while(beg<=end){
  if(array[mid]<search)
    beg=mid+1;
  else if(array[mid]==search){
    printf("%d found at location %d.",search,mid+1);
    break;
  }
  else
    end=mid-1;
  mid=((beg+end)/2);
}
if(beg>end)
  printf("Not found! %d isn't present in the list.",search);
return 0;
}