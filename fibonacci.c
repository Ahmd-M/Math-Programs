#include <stdio.h>

/*
Calculate the N-th term  UN of the FIBONACCI sequence that is given by the recurrence relation:
U1=1   U2=1   UN=UN−1+UN−2 (for N>2)

User may enter a  negative number, so keep reading till he enters a strictly positive number !

------------
For example:
Input	Result
-5      2
3
*/

int main()
{
    
    //enter your code here
    int n, U_n, aux, first, second;
    first = second = 1;
    U_n = first + second; // U_3 = U_2 + U_1 = 2

    do
    {
        scanf("%d", &n);
    } while (n<=0);


    if(n==1 || n==2)
        U_n = 1;

    for(int i=0; i<n-3; i++)
        {
            U_n = U_n + first;
            aux = first;
            first += second;
            second = aux;
        }

    printf("%d", U_n);

    
    return 0;
}