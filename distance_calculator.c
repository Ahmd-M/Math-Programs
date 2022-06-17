#include <stdio.h>
#include <math.h>
int main()
{
    //enter your code here
    int XA, YA, XB, YB;
    double deltaX_squared, deltaY_squared, distance;

    scanf("%d%d", &XA, &YA);
    scanf("%d%d", &XB, &YB);

    deltaX_squared = pow(XB-XA,2);
    deltaY_squared = pow(YB-YA,2);\

    distance = sqrt(deltaX_squared+deltaY_squared);

    printf("%.2lf",distance);

    
    return 0;
}