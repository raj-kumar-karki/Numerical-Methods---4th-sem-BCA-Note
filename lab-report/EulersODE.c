#include <stdio.h>
#include <conio.h>
#include <math.h>


 float f(float x, float y)
 {
 return x+y;
 }

 int main()
 {
     float x[1000], y[1000];
     float h, x0, y0, xn, m;
     int n,i;

     printf("Enter x0 and y0:");
     scanf("%f%f",&x0,&y0);

    printf("Enter xn and n:");
     scanf("%f%d",&xn,&n);

     x[0]=x0;
     y[0]=y0;

     h=(xn-x0)/n;

     for(i=0;i<n;i++)
     {
         m=f(x[i],y[i]);
         y[i+1]=y[i]+h*m;
         x[i+1]=x[i]+h;
     }

     printf("Solution:");
     for(i=0;i<=n;i++)
     {
         printf("\n%f\t%f",x[i],y[i]);
     }
     return 0;
 }
