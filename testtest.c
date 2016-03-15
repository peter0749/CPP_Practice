#include <stdio.h>
#include <stdlib.h>
#define ERR 0.00000001

double x=0.0,y=0.0,z=0.0;
double lx=0.0,ly=0.0,lz=0.0;

double forx(void)
{
    return 3.75+0.5*y-0.25*z;
}

double fory(void)
{
    return -8-3*x+4*z;
}

double forz(void)
{
    return 4.33333333333-0.33333333333*x+0.33333333333*y;
}

int main(void)
{
    double t;
    int count=1;
    while(1)
    {
        lx = x;
        ly = y;
        lz = z;
        x = forx();
        y = fory();
        z = forz();
        //getch();
        printf("x: %.7lf\ty: %.7lf\tz: %.7lf\tcount: %d\n",x,y,z,count++);
        t = (lx-x + ly-y + lz-z);
        if(t<0)t=-t;
        if(t<ERR) break;
    }
    printf("%d %d %d\n",(int)x,(int)y,(int)z);
    return 0;
}
