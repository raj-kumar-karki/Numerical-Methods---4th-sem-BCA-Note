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
    }while(n%2 !=0);

    printf("Enter y ordinates: \n");
    for(i=0;i<=n;i++) scanf("%f",&y[i]);

    h = (xn-x0)/n;

    sum = y[0] + y[n];
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

    getch();
    return 0;
}
