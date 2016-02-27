#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class coord
{
protected:
    int x, y;
public:
    coord();
    void getxy();
    void setxy(int, int);
    coord operator+(coord);
    coord operator+(int);
    coord operator++(int);
    coord operator++();
};

coord::coord()
{
    x=y=0;
}

void coord::getxy(void)
{
    cout<<x<<"\t"<<y<<"\n";
}

void coord::setxy(int x, int y)
{
    this->x = x;
    this->y = y;
}

coord coord::operator+(coord obj)
{
    coord t;
    t.x = x + obj.x;
    t.y = y + obj.y;
    return t;
}

coord coord::operator+(int n)
{
    coord t;
    t.x = x+n;
    t.y = y+n;
    return t;
}

coord coord::operator++()
{
    x = x+1;
    y = y+1;
    return *this;
}

coord coord::operator++(int)
{
    x = x+1;
    y = y+1;
    return *this;
}

int main(void)
{
    coord cod1, cod2;
    cod1.setxy(10,20);
    cod2.setxy(30,40);

    cod1++;
    cod1.getxy();
    ++cod1;
    cod1.getxy();
    cod1 = cod1+cod2;
    cod1.getxy();
    cod1 = cod1+3;
    cod1.getxy();

    return 0;
}
