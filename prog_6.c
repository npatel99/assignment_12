/**Write a recursive function to print first N even natural numbers in reverse order
Output:: 2*n, ....10 8 6 4 2
*/

#include <stdio.h>

void printNatEven(int n)
{
    if(n>0)
    {
        printf("%d ", 2*n);
        printNatEven(n-1);
    }
}

int main() {
    int n;
    printf("Enter the nth number: ");
    scanf("%d", &n);
    
    printf("The n even natural numbers in reverse order are: ");
    printNatEven(n);
    printf("\n");

    return 0;
}
