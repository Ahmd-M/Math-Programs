#include <stdio.h>

/*
Calculate the gcd between two natural numbers using the EUCLIDE algorithm.

Example: gcd(1220,516)=?
1220 mod 516 = 188
 516 mod 188 = 140
 188 mod 140 = 48
 140 mod  48 = 44
   48 mod  44 = 4
   44 mod    4= 0
gcd(1220,516)= 4

User may enter negative numbers, this is fine, but keep reading if he enters 0 ! 
One more thing, first number should be greater or equal to the second number!! So keep reading till he complies with this rule too !!

------------
For example:

Input	        Result
1220 516        GCD(1220,516)=4
GCD(1220,516)=4
0 0 0 516
0 0  1220
0 0 0  1220
0 0  516
*/

int main()
{
    
    //enter your code here
    int A, B;

    do
    {
        scanf("%d", &A);
        if(!A)
            continue;
        do
        {
            scanf("%d", &B);
        } while (!B);
        
            
    } while (!(A*B) || A<B);

    int first=A, second=B, GCD;
    while (second)
    {
        GCD = second; //In case second=first%second=0 we lose the value of the last second, which is the GCD
        second = first % second;
        first = GCD; //"GCD" here is the GCD of the previous first and second, not current one
    }

    printf("GCD(%d,%d)=%d", A, B, GCD);

    


    
    return 0;
}