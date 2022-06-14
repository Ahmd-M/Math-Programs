#include <stdio.h>

/*
Write a program that reads an integer and then calculates and displays its reverse.
Number should be positive

------------
For example:
Input	Result
-6      7654321
1234567  
*/
int main() {

    int number, reverse = 0, remainder;

    do
    {
        scanf("%d", &number);
    } while (number<=0);
    

    while (number != 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }

    printf("%d", reverse);

    return 0;
}