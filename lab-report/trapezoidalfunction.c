#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
    return x*sin(x)+cos(x)+5;
}

void main()
{
    float x0, xn, h, xi, yi, sum;
    int n, i;

    printf("Enter the limits of integration (x0, xn): ");
    scanf("%f%f", &x0, &xn);

    printf("Enter the number of sub-intervals: ");
    scanf("%d", &n);

    h = (xn-x0)/n;

    sum = f(x0) + f(xn);

    for(i=1; i<n; i++)
    {
        xi = x0 + i*h;
        yi = f(xi);
        sum = sum + 2*yi;
    }

    sum = sum *h/2;

    printf("\n Solution: %f", sum);

    getch();
    return 0;
}
