#include<stdio.h>
#include<string.h>
int main()
{
char str[100]={0},substr[100][100]={0}; 
scanf("%[^\n]s", str); 
int i,j =0,wcount=0,smallest=0,largest=0;
for(i=0;str[i]!='\0';i++){
  if(str[i]=='.'){
	continue;
  }
  if(str[i]==' '){
    j=0;
    wcount+=1;
  }
  else{
    substr[wcount][j]=str[i];
    j+=1;
  }
}
for(i=1;i<=wcount;i++){
  if(strlen(substr[i])>strlen(substr[largest]))
    largest=i;
  if(strlen(substr[i])<strlen(substr[smallest]))
    smallest=i;
}
printf("Largest Word is: %s\nSmallest word is: %s\n", substr[largest],substr[smallest]);
return 0;
}