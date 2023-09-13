#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i,j,r,c;
    scanf("%d",&r); 
    scanf("%d",&c); 
    for(i=0;i< r;i++) 
    {
        for(j=0;j< c;j++)
        {
            scanf("%d",&matrix[i][j]); 
        }
    }
int sum;
for(i=0;i<r;i++)
{
  sum=0;
  for(j=0;j<c;j++){
    sum+=matrix[i][j];
  }
  printf("%d\n",sum);
}
return 0;
}