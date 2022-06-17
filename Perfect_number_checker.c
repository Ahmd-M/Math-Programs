#include <stdio.h>


int main()
{
    int number, sum, i=1;

    do
    {
        scanf("%d", &number);
    } while (number<=0);
    
    while(i<number)
    {
        if(!(number%i))
            sum += i;
        i++;
    }

    if(sum == number)
        printf("%d is Perfect.", number);
    else
        printf("%d is not Perfect.", number);

    return 0;
}