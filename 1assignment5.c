#include<stdio.h>

int main()

{
	int i,j,n;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)

	{
		for(j=n;j>i;j--)

		{
			printf(" ");

		}
		for(j=1;j<=i;j++)
		printf("%d",j);
		for(j=i-1;j>=1;j--)

		{
			printf("%d ",j);

		}

	printf("\n");

	}
	return 0;
}

output:

Enter number of rows:5
    1
   121
  1232 1
 12343 2 1
123454 3 2 1
