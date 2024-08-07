#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i;
    float x[100], y[100];
    float a, b;
    float sumx = 0,sumy = 0,sumx2=0,sumxy=0;
    float D1,D2,D;

    printf("Enter the number of data:");
    scanf("%d", &n);

    printf("Enter(x,y) values: \n");
     for(i=0; i<n; i++)
         scanf("%f%f", &x[i], &y[i]);

        for(i=0; i<=n; i++)
    {
            sumx += x[i];
            sumy +=y[i];
            sumx2 +=x[i]*x[i];
            sumxy +=x[i]*y[i];
    }

    D1 = (sumy*sumx2 - sumxy*sumx);
    D2 = (n*sumxy - sumx*sumy);
    D = (n*sumx2 - sumx*sumx);

    a=D1/D;
    b=D2/D;

    printf("\nRequired Curve:");
    printf("y = %f + (%f)x",a,b);
    return 0;
    }
