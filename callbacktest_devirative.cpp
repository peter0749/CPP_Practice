#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#define ERR 0.000001
#define PI 3
#define MAX 4

using namespace std;

//double (*CALLBACK)(double x);

typedef struct funcp
{
    char funcname[100];
    double (*CALLBACK)(const double);
}FUNCARR;

double power_rec(const double x)
{
    if( abs(x) < 1 )    return x;
    return x*power_rec(x/2);
}

double power_rep(const double x)
{
    double y = x;
    while(y>1)
    {
        y/=2;
    }
    return y;
}

double jni(const double x)
{
    if((int)x%2)
    {
        return 3*x+1;
    }
    return x/2;
}

double sinpi(const double x)
{
    return sin(x);
}

FUNCARR funcs[MAX] =\
{
    {"sinpi",&sinpi},{"power_rec",&power_rec},{"power_rep",&power_rep},{"3n+1",&jni}\
};

double df( double (*CALL)(double x) , double x )
{
    return (CALL(x+ERR)-CALL(x))/(ERR);
}
int main(void)
{
    double input(0.0);
    while(1)
    {
        cout<<"Derivative of funcs, x= ";
        if(!(cin>>input)) break;
        for(int i=0; i<MAX; i++)
        {
            //CALLBACK = &func;
            cout<<funcs[i].funcname<<'('<<input<<") = "<<df(funcs[i].CALLBACK,input)<<endl;
        }
    }
    return 0;
}
