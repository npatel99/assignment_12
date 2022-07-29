/**Write a recursive function to print squares of first N natural numbers
Output:: 2 4 9 16 25 36 49 64 ........n*n
*/

#include <stdio.h>

void printNatSquare(int n)
{
    if(n>0)
    {
        printNatSquare(n-1);
        printf("%d ", n*n);
    }
}

int main() {
    int n;
    printf("Enter the nth number: ");
    scanf("%d", &n);
    
    printf("The squares of n natural numbers are: ");
    printNatSquare(n);
    printf("\n");

    return 0;
}
