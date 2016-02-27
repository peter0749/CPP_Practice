#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Person
{
public:
    virtual void ShowMenu(void)=0;/*Pure virtual function member.*/
};

class SuperMan:public Person
{
public:
    void ShowMenu(void)
    {
        cout<<"Superman eat beef.\n";
    }
};

class SpiderMan:public Person
{
public:
    void ShowMenu(void)
    {
        cout<<"Spiderman eat spider.\n";
    }
};

int main(void)
{
    SuperMan Bill;
    SpiderMan Park;
    Person *ptr;
    ptr = &Bill;
    ptr->ShowMenu();
    ptr = &Park;
    ptr->ShowMenu();
    return 0;
}
