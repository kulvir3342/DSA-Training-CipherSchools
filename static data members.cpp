#include<iostream>
using namespace std;
class A
{
    public:
    static int x;

    A()
    {
        x++;
    }
    ~A()
    {
        x--;
    }
};

int A :: x;

int main()
{
    cout<<A :: x;

    A obj;
    cout<<obj.x;

    A obj1;
    cout<<obj1.x;

    return 0;

}
