#include<stdio.h>
int main() 
{
   int arr1[20], arr2[20], array_new[40], n1, n2, size, i;
 
   scanf("%d", &n1);    
   for (i = 0; i < n1; i++)
      scanf("%d", &arr1[i]); 
 
   scanf("%d", &n2);    
   for (i = 0; i < n2; i++)
      scanf("%d", &arr2[i]); 

//Merge two arrays
size=n1+n2;
for(i=0;i<n1;i++)
{
  array_new[i]=arr1[i];
}
for(i=0;i<n2;i++)
{
  array_new[n1+i]=arr2[i];
}
for (i = 0; i < size; i++) {
      printf("%d\n", array_new[i]);
   }
}
