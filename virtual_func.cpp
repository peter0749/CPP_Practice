#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class car
{
protected:
    int speed;
public:
    virtual void addSpeed(int)=0;
    static void showData(void);
    car();
    ~car();
};

car::car()
{
    cout<<"Car has been created."<<endl;
    speed=0;
}

car::~car()
{
    cout<<"Car has been destroyed."<<endl;
}

void car::showData(void)
{
    cout<<"All cars can be boost!"<<endl;
}

class pilicar:public car
{
public:
    void addSpeed(int n)
    {
        speed+=n;
        cout<<"At a speed of "<<speed<<" kmh."<<endl;
    }
};

class BMW:public car
{
    public:
    void addSpeed(int n)
    {
        int t = n+speed;
        if(t>=200)
        {
            cout<<"Speed limit at 200kmh."<<endl;
            speed = 200;
        }
        else
        {
            speed = t;
        }
        cout<<"At a speed of "<<speed<<" kmh."<<endl;
    }
};

int main(void)
{
    car::showData();
    pilicar c1;
    c1.addSpeed(150);
    c1.addSpeed(200);
    cout<<endl;
    BMW c2;
    c2.addSpeed(100);
    c2.addSpeed(300);

    return 0;
}
