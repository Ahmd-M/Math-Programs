

#include <stdio.h>
#include<math.h>

int main()
{
    
    //enter your code here
    
    long number, i=2;

    do
    {
        scanf("%ld", &number);
    } while (number<0);
    
    while(i<=number)
    {
        if(!(number%i))
        {
            if(i!=number)
                printf("%ld is not prime.", number);
            else
                printf("%ld is prime.", number);
            break;
        }
        i++;
    }
    
    return 0;
}