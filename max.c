#include <stdio.h>

/*
Write a program which reads a sequence of positive integer numbers.
The program stops when the user fills a negative value and show the maximum of these numbers.

------------
For example:

Input	            Result
36	95	42	62	45  Max = 99
93	6	42	48	81
14	13	18	32	83
66	45	93	59	69
73	20	35	31	99
42	39	79	61	11
55	46	85	35	70
-5	37	-4	-3	65
98	69	85	36	70
9	25	77	90	97
35	28	-4	9	96
35	47	32	73	52
43	63	4	-4	32
67	100	87	73	58
11	9	38	48	-4
0	68	37	26	80
11	46	50	96	34
94	34	54	88	59
33	26	67	52	61
78	73	6	97	23
*/

int main()
{
    
    //enter your code here

    int list[100], MAX=0;

    for(int i=0; i<100; i++)
        scanf("%d", &list[i]);

    for(int i=0; i<100; i++)
        {
            if(list[i]<0)
                break;
            MAX = (MAX>=list[i]) ? MAX : list[i];
        }    

    printf("Max = %d", MAX);
    
    return 0;
}