#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
    float temp;
    temp = x*sin(x)+cos(x);
    //temp = 1/pow(x,3) + sin(x);
    return temp;
}

void main()
{
    float a, b, c, E;
    int count;
    printf("Enter the initial interval: ");
    scanf("%f%f", &a, &b);
    printf("Enter the error tolerance: ");
    scanf("%f", &E);

    printf("\n f(a) = %f", f(a));
    printf("\n f(b) = %f", f(b));


    if(f(a)*f(b) > 0)
    {
        printf("\n Error: There may not be any root in the given interval !");
        return;
    }

    if(f(a)*f(b) == 0)
    {
        if(f(a) == 0) printf("\nRoot = %f", a);
        if(f(b) == 0) printf("\nRoot = %f", b);
        return;
    }


    count = 0;
    do{
        c = (a*f(b)-b*f(a))/(f(b)-f(a));

        printf("\n %d %f %f %f %f", count, a, b, c, f(c));

        if(f(c) * f(a) < 0)
            b=c;
        else
            a=c;

        count++;
        if(count > 500)
        {
            printf("\n Oops! I am really tired ...");
            printf("\n Sorry! could not find a solution in 500 steps!");
            return;
        }

    }while( fabs(f(c)) > E );

    printf("\n Approx. Root = %f", c);
    printf("\n Value of function at approx. root = %f", f(c));

    getch();

}
