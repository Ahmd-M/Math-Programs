#include <stdio.h>
#include <math.h>

/*
Write a program that reads each time a digit (separated by a space) ended with 0.
You should combine only positive digits into one number but in reverse order. Stop when you encounter a 0.
------------
For example:
Intput = 1 -5 9 7 4 0 7 4 
Result = 4791
*/

int main()
{
    
    //enter your code here
    int list[100], i=0;
    long long reversed = 0;
    
    do
    {
        scanf("%d", &list[i]);
        if(!list[i])
            break;
        i++;
    } while (1);
    
    
    for(int i=0, n=0; list[i]; i++)
        {
            if(list[i]>0)
            {
                reversed += list[i]*pow(10,n);
                if(!n)
                    reversed = list[i];
                n++;
            }
        }

        printf("%lld", reversed);

    
    return 0;
}
