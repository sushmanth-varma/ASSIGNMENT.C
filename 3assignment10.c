#include<stdio.h>
#include<string.h>
 
main(){
   int i,j,n;
   char name[100][100],s[100];
   printf("Enter the number of names :\n");
   scanf("%d",&n);
   printf("Enter random names in any order:\n");
   for(i=0;i<n;i++){
      scanf("%s",name[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(name[i],name[j])>0){
            strcpy(s,name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],s);
         }
      }
   }
   printf("\nSorted names in Alphabetical order\n");
   for(i=0;i<n;i++){
      printf("%s\n",name[i]);
   }
}
OUTPUT:
Enter the number of names :
4
Enter random names in any order:
AJAY NIRAJ SAI BANANA

Sorted names in Alphabetical order
AJAY
BANANA
NIRAJ
SAI
