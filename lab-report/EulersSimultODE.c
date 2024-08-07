#include<stdio.h>
#include<conio.h>
#include<math.h>

float f1(float x, float y, float z)
{
return 3*x-y+z;
}
f2(float x, float y, float z)
{
    return 2*x-y+z;
}

int main()
{
    float x[1000], y[1000], z[1000];
    float h, x0, y0, z0, xn;
    float k1,k2,k3,k4,k;
    float l1,l2,l3,l4,l;
    int n,i;

    printf("Enter x0, y0,z0:");
    scanf("%f%f%f",&x0,&y0,&z0);

    printf("Enter xn and n:");
    scanf("%f%d",&xn, &n);

    x[0]=x0;
    y[0]=y0;
    z[0]=z0;

     h=(xn-x0)/n;

     for(i=0;i<n;i++)
     {
         k1=h*f(x[i],y[i]);
         l1=h*f(x[i],y[i]);

         k2=h*f(x[i]+h/2,y[i]+k1/2);
         l2=h*f(x[i]+h/2,y[i]+l1/2);

         k3=h*f(x[i]+h/2,y[i]+k2/2);
          l3=h*f(x[i]+h/2,y[i]+l2/2);

         k4=h*f(x[i]+h,y[i]+k3);
         l4=h*f(x[i]+h,y[i]+l3);

         k=(k1+2*k2+2*k3+k4)/6;
         l=(l1+2*l2+2*l3+l4)/6;



         y[i+1]=y[i]+k;
         z[i=1]=z[i]+l;
         x[i+1]=x[i]+h;

     }

     printf("Solution:");
     for(i=0;i<=n;i++)
     {
         printf("\n%f\t%f\t%f",x[i],y[i],z[i]);
     }

     return 0;
 }

