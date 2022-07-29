/**Write a recursive function to print first N natural numbers*
* output: 1 2 3 4 5 6 7 8 .....n 
*/
#include <stdio.h>
void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf("%d ", n);
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
