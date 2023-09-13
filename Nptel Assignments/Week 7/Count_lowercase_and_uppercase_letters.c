#include<stdio.h>
int main() {
int upper = 0, lower = 0;
char ch[100];
scanf(" %[^\n]s", ch); 
int i;
for(int i=0;ch[i]!='\0';i++){
  if(ch[i]>='A'&&ch[i]<='Z'){
    upper+=1;
  }
  else if(ch[i]>='a'&&ch[i]<='z'){
    lower+=1;
  }
  else
    continue;
}
printf("Uppercase Letters : %d\n", upper); 
printf("Lowercase Letters : %d", lower); 
return (0);
}