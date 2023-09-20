#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); 
void reverse(char[], int, int);
printf("The string after reversing is: ");
reverse(str1,strlen(str1),0);
return 0;
}
void reverse(char str1[],int len,int ind){
  if(ind==len-1)
    printf("%c",str1[ind]);
  else{
    reverse(str1,len,ind+1);
    printf("%c",str1[ind]);
  }
}