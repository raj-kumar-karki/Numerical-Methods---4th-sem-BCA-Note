#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float A[10][11], C[10];
    float X[100], Y[100];
    int i, j, k, m, n;
    float ratio;

    printf("Enter the number of data :");
    scanf("%d", &n);

    printf("Enter the data pairs (x,y): \n");
     for(i=0; i<n; i++)
     {
         scanf("%f%f", &X[i], &Y[i]);
     }
    printf("Enter the degree of polynomial: ");
    scanf("%d", &m);

    for(k=0; k<=m; k++)
    {
        for(j=0; j<=m; j++)
        {
            A[k][j]=0;
            for(i=0; i<n; i++)
            {
                A[k][j] += pow(X[i], k+j);
            }
        }
        A[k][m+1]=0;
        for(i=0; i<n; i++)
        {
            A[k][m+1] += pow(X[i], k)*Y[i];
        }
    }
    for(j=0; j<=m; j++)
    {
        for(i=0; i<=m; i++)
        {
            if(i !=j)
            {
                ratio = A[i][j]/A[j][j];
                for(k=0; k<=(m+1); k++)
                {
                    A[i][k] -=ratio*A[j][k];
                }
            }
        }
    }
    printf("\nCoefficient of:");
    for(i=0; i<=m; i++)
    {
        C[i]=A[i][m+1]/A[i][i];
        printf("\nx^%d = %.2f", i, C[i]);
    }
    return 0;
    }

