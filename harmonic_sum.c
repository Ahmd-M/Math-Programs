#include <stdio.h>

/*
Calculate the sum of the first N terms of the harmonic series:
1+12+13+⋯+1N

User may enter a  negative number, so keep reading till he enters a strictly positive number !

------------
For example:

Input	Result
-2      1.500000
0
2
*/

int main()
{
    //enter your code here

    int n;
    double answer=0;

    do
    {
        scanf("%d", &n);
    } while (n<=0);

    for(int i=0; i<n; i++)
        answer += 1.0 / (i+1);

    printf("%lf", answer);

    return 0;
}