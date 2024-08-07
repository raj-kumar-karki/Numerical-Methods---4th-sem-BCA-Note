#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
    return 1/(1+x*x);
}

int main()
{
    float x0, xn, h, xi, yi, sum;
    int n, i, m;

    printf("Enter the limits of integration (x0, xn): ");
    scanf("%f%f", &x0, &xn);

    do{
    printf("Enter the number of sub-intervals: ");
    scanf("%d", &n);
    }while(n%2 !=0);

    h = (xn-x0)/n;

    sum = f(x0) + f(xn);
    for(i=1; i<n; i++)

    {
        xi = x0 + i*h;
        yi = f(xi);

        if(i%2 ==0)
            m=2;
        else
            m=4;
        sum = sum + m*yi;
    }

    sum = sum * h/3;

    printf("\n Solution: %f", sum);

    return 0;
}
