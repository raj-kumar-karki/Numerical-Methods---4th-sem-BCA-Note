#include <studio.h>
#include <conio.h>
#include <math.h>


int main()
{
float A[10][10];
float X[10];
float Z[10], Y[10],D[10];
int n ;
int i,j,k;
float lambda, maxerror;
int count=0;

printf("Enter the order of square matrix:");
scanf("%d",&n);

printf("Enter the values of square rowwise:\n");
for (i=0;i<n;i++)
 for (j=0;j<n;j++)

do {
//step 2: perform [Z] = [[A]]*[X]
for (i=0;i<n;i++)
{
    Z[i] = 0;
    for (j=0;j<n;j++){
        z[i] +=A[i][j]*X[j];
    }
}

printf("\n");
for (i=0;i<n;i++)
 printf("%10.4F", z[i]);


//step 3: find the limbda = max ([|Z|]) with sign
lambda = Z[0];
for (i=0;i<n;i++)
{
    if (fabs (Z[i]) > fabs(lambda)) lambda =Z[i];
}
 printf("\t max = %f", lambda);


 //step 4: perform [Y] = [Z]/lambda

 for (i=0;i<n;i++) Y[i]/lambda;

printf("\n");
 for (i=0;i<n;i++)  printf("%10.4F", Y[i]);

//step 5: perform |D|= |[Y]-[X] |
for (i=0;i<n;i++) D[i]= fabs(Y[i]-X[i]);


//step 6: Find the maximum error
maxerror = D[0];
for (i=0;i<n;i++)
{
  if (D[i] > maxerror) maxerror = D[i];
}



//step 7: Repalce [x] and [Y]
for (i=0;i<n;i++) X[i]= Y[i];

count++;
if (count>500)
{
    printf("\nError! not convergent!");
    return 1;
}

}while (maxerror > 0.00005);
