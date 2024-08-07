#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float A[10][10], B[10][10], c, diag;
    int n, i, j, k;

    printf("Order of square matrix? ");
    scanf("%d", &n);

    printf("Enter the matrix elements row-wise: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%f", &A[i][j]);
            if(i==j) B[i][j]=1; else B[i][j]=0;
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
                    B[i][k]=B[i][k]-c*B[j][k];
                }
            }
        }
    }
    printf("\nAfter Gauss Elimination:\n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%10.2f",A[i][j]);
            }
            printf(" : ");
            for(j=0; j<n; j++)
            {
                printf("%10.2f ",B[i][j]);
            }
        printf("\n");
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                B[i][j]=B[i][j]/A[i][i];
            }
            A[i][i]=1;
        }
        printf("\nInverse:\n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%10.2f ", B[i][j]);
            }
            printf("\n");
    }
    return 0;
}


