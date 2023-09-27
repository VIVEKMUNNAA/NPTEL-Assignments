#include <stdio.h>
int main() {
  int array[100], n, c;
  scanf("%d", &n); 
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
int temp;
for(c=0;c<n/2;c++){
  temp=array[c];
  array[c]=array[n-1-c];
  array[n-1-c]=temp;
}
printf("Reversed array elements are:\n");

  for (c = 0; c < n; c++) {
    printf("%d\n", array[c]);
  }
  return 0;
}