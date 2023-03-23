#include <stdio.h>

int main()
{
    int num1, num2, num3, max;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    max = (num1 > num2 && num1 > num3) ? num1 :
          (num2 > num3) ? num2 : num3;

    printf("\nMaximum between %d, %d and %d = %d", num1, num2, num3, max);

    return 0;
}
out put:
Enter three numbers: 10 20 40

Maximum between 10, 20 and 40 = 40
