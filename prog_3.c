/**Write a recursive function to print first N odd natural numbers
Output:: 1 3 5 7 9 .......
*/

#include <stdio.h>
void printNatOdd(int n)
{
    if(n>0)
    {
        printNatOdd(n-1);
        printf("%d ", 2*n-1);
    }
}

int main() {
    int n;
    printf("Enter the nth number: ");
    scanf("%d", &n);
    
    printf("The %d odd natural numbers are: %d", n);
    printNatOdd(n);
    printf("\n");

    return 0;
}
