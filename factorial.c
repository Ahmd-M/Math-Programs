#include <stdio.h>

/*
Calculate the factorial N!=1×2×3⋯×(N−1)×N of a positive natural integer N respecting that 0! = 1.
User may enter a  negative number, so keep reading till he enters a positive number !

------------
For example:

Input	Result
5       5! = 120

*/

int main()
{
    
    //enter your code here

    int number=0, answer=1;
    do
        scanf("%d", &number);
    while (number<0);
    
    for(int i=0; i<number; i++)
        answer *= number-i;

    printf("%d! = %d", number, answer);

    return 0;
}