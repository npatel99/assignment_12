/**Write a recursive function to print first N odd natural numbers in reverse order
Output:: 2*n-1,......9 7 5 3 1
*/

#include <stdio.h>

void printNatOdd(int n)
{
    if(n>0)
    {
        printf("%d ", 2*n-1);
        printNatOdd(n-1);
    }
}

int main() {
    int n;
    printf("Enter the nth number: ");
    scanf("%d", &n);
    
    printf("The n odd natural numbers in reverse order are: ");
    printNatOdd(n);
    printf("\n");

    return 0;
}
