#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float A[10][11], X[10], c;
    int n, i, j, k;

    printf("How many unknowns? ");
    scanf("%d", &n);

    printf("Enter the co-efficient and constants row-wise: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<=n; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }
    for(j=0; j<n; j++)
    {
        if(fabs(A[j][j])<0.00005)
        {
            printf("\nError! Pivot element A[%d][%d] is nearly zero.", j , j);
            return 1;
        }
        for(i=0; i<n; i++)
        {
            if(j !=i)
            {
                c=A[i][j]/A[j][j];
                for(k=0; k<=n; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                }
            }
        }
    }
    printf("\nSolution:\n");
    for(i=0; i<n; i++)
    {
        X[i]=A[i][n]/A[i][i];
        printf("%10.4f \t",X[i]);
    }
    return 0;
}
