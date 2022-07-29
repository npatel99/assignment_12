/**Write a recursive function to print first N natural numbers in reverse order
*Output:: n, n-1, ......5 4 3 2 1**/
#include <stdio.h>
void printN(int n)
{
    if(n>0)
    {
        printf("%d ", n);
        printN(n-1);
    }
}

int main() {
    int n;
    printf("Enter the nth number: ");
    scanf("%d", &n);
    
    printf("The N natural numbers are: ");
    printN(n);
    printf("\n");

    return 0;
}
