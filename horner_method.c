#include <stdio.h>

/*
Calculate for a given value X of the type float the numerical value of a polynomial of degree n:
P(X)=AnXn+An−1Xn−1+⋯+A1X+A0

The values of n, the value of X, and coefficients An,⋯,A0 will be entered in that order on the keyboard.

Use the Horner schema that avoids exponentiation operations when calculating:
P(X)=((((An×X+An−1)×X+An−2)⋯)×X+A0

User may enter a  negative degree, so keep reading till he enters a positive degree !

------------
For example:

Input	Result
-2 3    P(1.00)=10.00
1
1 2 3 4
*/


int main()
{
    int n;
    float x, answer, coefficiants[100];

    do
    {
        scanf("%d", &n);
    } while (n<0);

    scanf("%f", &x);
    for(int i=0; i<n+1; i++)
        scanf("%f", &coefficiants[n-i]);

    answer = coefficiants[n];
    for(int i=n-1; i>=0; i--)
    {
        answer *= x;
        answer += coefficiants[i];
    }

    printf("P(%.2f)=%.2f", x, answer);

    return 0;
}