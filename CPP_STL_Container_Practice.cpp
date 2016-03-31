#include <iostream>
#include <iomanip>
#include <string>
#include <queue>
#include <stack>

using namespace std;

int main(void)
{
    int myint;
    int n;
    cin.sync_with_stdio(false);
    vector<int > myqueue;
    vector< vector<int> > two_dim(10,vector<int>(10));
    vector<int> v;
    vector< vector<int> > lv;
    priority_queue<int,vector<int>,greater<int> > myheap;

    cout<<"Number of node: ";
    cin>>n;
    cout<<"Enter integers except 0, and enter an 0 to complete.\n";
    for(int i=0; i<n; i++)
    {
        while(1)
        {
            cin>>myint;
            if(!myint)break;
            v.push_back(myint);
        }
        lv.push_back(v);
        v.clear();
        //cout<<lv[i][0];
    }
    int i=0, j=0;
    for(vector< vector<int> >::iterator itr = lv.begin(); itr != lv.end(); itr++,i++)
    {
        cout<<"For node "<<i<<':';
        j=0;
        for(vector<int>::iterator inside = lv.at(i).begin(); inside!=lv.at(i).end(); inside++, j++)
        {
            cout<<' '<<lv.at(i).at(j);
        }
        cout<<'\n';
    }
    cout<<"Enter integers except 0, and enter 0 to complete\n";
    while(cin>>myint)
    {
        if(!myint)break;
        myqueue.push_back(myint);
    }
    cout<<"Contain:";
    for(vector<int>::iterator fake = myqueue.begin(); fake!=myqueue.end(); ++fake)
        cout<<' '<<*fake;
    cout<<'\n';

    for(int i=0; i<=9; i++)
    {
        for(int j=0; j<=9; j++)
        {
            two_dim[i][j] = i*j;
        }
    }
    for(int i=0; i<=9; i++)
    {
        for(int j=0;j <=9; j++)
            cout<<setw(3)<<two_dim[i][j];
        cout<<endl;
    }
    cout<<"Enter integers except 0, and enter 0 to complete\n";
    while(cin>>myint)
    {
        if(!myint)break;
        myheap.push(myint);
    }
    cout<<"Contains: ";
    while(!myheap.empty())
    {
        cout<<' '<<myheap.top();
        myheap.pop();
    }

    return 0;
}
