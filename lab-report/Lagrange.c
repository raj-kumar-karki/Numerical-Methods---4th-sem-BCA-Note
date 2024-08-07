#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i, j;
    float x[100], y[100];
    float a, b, p;
    printf("Enter the number of intervals :");
    scanf("%d", &n);

    printf("Enter(x,y) values: \n");
     for(i=0; i<n; i++)
         scanf("%f%f", &x[i], &y[i]);

    printf("Where to interpolate? ");
    scanf("%f", &a);
    b = 0;
    for(i=0; i<=n; i++)
    {
        p = 1;
        for(j=0; j<n; j++)
        {
            if(j != i)
            {
                p = p*(a-x[j])/(x[i]-x[j]);
            }
        }
        b = b + p*y[i];
    }
    printf("\nAt x=%f, y=%f", a, b);
    return 0;
    }
