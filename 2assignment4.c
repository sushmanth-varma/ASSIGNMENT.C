#include<stdio.h>
void main()
{
  int const * p=5;
  printf("%d",++(*p));
}

Answer: Compiler error: Cannot modify a constant value.
Explanation: p is a pointer to a "constant integer". 
But we tried to change the value of the "constant integer".
