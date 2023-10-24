void findFact(int n,long int *f){
  int i;
  *f=1;
  for(i=1;i<=n;i++)
    *f=*f*i;
}


