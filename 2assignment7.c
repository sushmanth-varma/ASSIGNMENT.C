#include <stdio.h>
int main()
{
    int i, j, rows, k;
    printf("Enter the number of rows: \n");
    
    // taking input for number of rows
    scanf("%d", &rows);
    
    // Outer loop to handle number of rows
    for (i = 1; i <= rows; i++)
    {
        // Inner loop to handle number of columns
        for (j = i; j < rows; j++)
        {
            // Printing spaces
            printf("  ");
        }
        
        // loop to handle numbers
        for (k = 1; k <= i; k++)
        {
            // Printing Numbers
            printf(" %d", k);
        }
        
        // Ending line after each row
        printf("\n");
    }
    return 0;
}

output:
Enter the number of rows:
5
         1
       1 2
     1 2 3
   1 2 3 4
 1 2 3 4 5
