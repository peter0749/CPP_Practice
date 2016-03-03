#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>

using namespace std;

int main(void)
{
    int *ptr=NULL, *newptr=NULL;
    int i;
    int addi, before;
    cout<<right<<setw(30)<<"=====Memory re-allocate test=====\n";
    cout<<"before: ";
    cin>>before;
    ptr = (int*)malloc(sizeof(int)*before);
    assert(ptr!=NULL);
    cout<<"Success!"<<endl;
    for(i=0; i<before; i++)   *(ptr+i) = i;
    cout<<"Contents are below:\n";
    //for(i=0;i<before;i++)   cout<<*(ptr+i)<<endl;
    cout<<*(ptr+before-1)<<endl;
    while(1)
    {
        cout<<"addition: ";
        cin>>addi;
        before+=addi;
        newptr = (int*)realloc(ptr,sizeof(int)*(before));
        assert(newptr!=NULL);
        ptr = newptr;
        cout<<"Success!"<<endl;
        for(; i<before; i++)  *(ptr+i) = i;
        cout<<"Contents are below:\n";
        //for(i=0;i<before;i++)   cout<<*(ptr+i)<<endl;
        cout<<*(ptr+before-1)<<endl;
    }
    return 0;
}
