#include <stdio.h>
int main()
{
  int a[]={1,2,3,4,5};
  int n,i,e,p,f=0,x=-1;
  n=sizeof(a)/sizeof(a[0]);
  printf("enter element to search");
  scanf("%d",&e);

  for(i=0;i<n;i++)
    if (a[i]==e)
    {
       f=1;
       p=i;
    }
       
  if(f==1)
     printf("%d is Found at %d",e,p+1);
  else
     printf("%d is Not found",e);
    if(f!=1)
  {
	  printf("print number:%d",x);
	  
}
	return 0;
}
outpu:
enter element to search7
7 is Not foundprint number:-1
