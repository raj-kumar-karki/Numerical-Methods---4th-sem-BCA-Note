
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float A[10][11], X[10], c, sum;
    int n, i, j, k;

    printf("How many unknowns? ");
    scanf("%d", &n);

    printf("Enter the co-efficient and constants row-wise: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<=n; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }


    for(j=0; j<(n-1); j++)
    {
        if(fabs(A[j][j])<0.00005)
        {
            printf("\nError! Pivot element A[%d][%d] is nearly zero.", j , j);
            return 1;
        }

        for(i=j+1; i<n; i++)
        {

             c=A[i][j]/A[j][j];
                for(k=0; k<=n; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                }
            }
        }
        printf("\nAfter Gauss Elimination:\n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<=n; j++)
            {
                printf("%10.2f",A[i][j]);
            }
            printf("\n");
        }

        X[n-1]=A[n-1][n]/A[n-1][n-1];

        for(i=n-2; i>=0; i--)
        {
            sum = 0;
            for(j=i+1; j<n; j++)
                sum += A[i][j]*X[j];
            X[i]=(A[i][n]-sum)/A[i][i];
        }
        printf("\nSolution:\n");
        for(i=0; i<n; i++)
        {
            printf("%10.2f \t", X[i]);
        }
        return 0;
}
