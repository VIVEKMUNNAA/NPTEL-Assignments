#include <stdio.h>
int main()
{
int a[100],i, n;
scanf("%d",&n); 
for (i=0; i<n; i++)
    {
        scanf("%d",a+i); 
    }
int j,t;
for(i=0;i<(n-1);i++){
  for(j=i+1;j<n;j++){
    if(*(a+i)>*(a+j)){
      t=*(a+i);
      *(a+i)=*(a+j);
      *(a+j)=t;
    }
  }
}
    for (i=0; i<n; i++)
    {
        printf("%d\n",*(a+i));
    }
    return 0;
   }