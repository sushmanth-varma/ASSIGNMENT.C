#include<stdio.h>

int main()
{
    int arr[]={0,0,2,1};
    printf("%u, %u, %u\n", arr, &arr[0], &arr);
    return 0;
}
output:
6487568, 6487568, 6487568
