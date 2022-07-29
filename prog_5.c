/**Write a recursive function to print first N even natural numbers
Output:: 2 4 6 8 10 12 ..........
*/

#include <stdio.h>

void printNatEven(int n)
{
    if(n>0)
    {
        printNatEven(n-1);
        printf("%d ", 2*n);
    }
}

int main() {
    int n;
    printf("Enter the nth number: ");
    scanf("%d", &n);
    
    printf("The n even natural numbers are: ");
    printNatEven(n);
    printf("\n");

    return 0;
}
