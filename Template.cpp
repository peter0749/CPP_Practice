#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

template<class Tval>
void myswap(Tval &foo, Tval &bar)
{
    Tval temp;
    temp = foo;
    foo = bar;
    bar = temp;
}

template<class Tval>
inline bool cmp(Tval a, Tval b)
{
    return a > b;
}

template<class Tval>
void selec_sort(Tval *Tarr, const int n)
{
    int i, j;
    int MAX;
    for(i=n-1;i>=1;i--)
    {
        MAX = i;
        for(j=0;j<i;j++)
        {
            if(cmp(Tarr[j],Tarr[MAX]))MAX = j;
        }
        if(MAX!=i)myswap(Tarr[i],Tarr[MAX]);
    }
}

int main(void)
{
    int arra[5] = {5,4,3,2,1};
    double arrb[5] = {9.9,3,1.2,-0.7,1.3};
    selec_sort(arra,5);
    selec_sort(arrb,5);
    for(int i=0; i<5; i++)cout<<' '<<arra[i];
    cout<<endl;
    for(int i=0; i<5; i++)cout<<' '<<arrb[i];
    cout<<endl;
    return 0;
}
