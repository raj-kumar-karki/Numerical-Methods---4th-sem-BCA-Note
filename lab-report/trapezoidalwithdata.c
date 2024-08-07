#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float x0, xn, h, sum;
    int n, i;
    float y[100];

    printf("Enter the limits of integration (x0, xn): ");
    scanf("%f%f", &x0, &xn);

    printf("Enter the number of sub-intervals: ");
    scanf("%d", &n);

    printf("Enter y ordinates:\n");

    for(i=0;i<=n;i++) scanf("%f",&y[i]);

    h = (xn-x0)/n;

    sum = y[0] + y[n];

    for(i=1; i<n; i++)
    {
        sum = sum + 2*y[i];
    }

    sum = sum *h/2;

    printf("\n Solution: %f", sum);

    getch();
    return 0;
}
