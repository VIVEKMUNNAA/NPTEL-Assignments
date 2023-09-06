#include <stdio.h>

int main()
{
int i, n, largest;
int arr[100];
scanf("%d", &n); 
for(i = 0; i < n; ++i)
{
scanf("%d", &arr[i]); 
}
largest=arr[0];
for(i=0;i<n;i++)
{
    if(arr[i]>largest)
    {
    largest=arr[i];
    }
}
printf("Largest element = %d", largest);
return 0;
}