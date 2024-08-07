#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float x0, xn, h, sum;
    int n, i, m;
    float y[100];

    printf("Enter the limits of integration (x0, xn): ");
    scanf("%f%f", &x0, &xn);

    do{
    printf("Enter the number of sub-intervals: ");
    scanf("%d", &n);
    }while(n%3 !=0);

    h = (xn-x0)/n;

    sum = f(x0) + f(xn);
    for(i=1; i<n; i++)

    {
        xi = x0 + i*h;
        yi = f(xi);

        if(i%3 ==0)
            m=2;
        else
            m=3;

        sum = sum + m*yi;
    }

    sum = sum * 3 * h/8;

    printf("\n Solution: %f", sum);

    getch();
    return 0;
}
