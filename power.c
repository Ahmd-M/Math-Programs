#include <stdio.h>

/*
Calculate of XN by successive multiplications of two natural numbers X and N entered on the keyboard.

User may enter negative numbers, so keep reading till he enters a positive number for each X and N!

Input: X followed by N
Output:
    Undefined ! (0^0)
    X ^ N = XN

------------
For example:

Input:	    Result:
-5 -6 0     Undefined !
-8 -1 0

-5 -6 2     2 ^ 5 = 32
-8 -1 5
*/

int main()
{
    //enter your code here
    
    int X, N, answer=1;

    do
    {
        scanf("%d", &X);
    } while (X<0);
    do
    {
        scanf("%d", &N);
    } while (N<0);
    
    if(!(X||N))
        printf("Undefined !");
    else
    {
        for(int i=0; i<N; i++)
            answer *= X;
        printf("%d ^ %d = %d", X, N, answer);
    }
    
    

    return 0;
}