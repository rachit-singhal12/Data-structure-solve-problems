#include<iostream>
#include<stdlib.h>
using namespace std;

class A
{
    public:
    virtual void print()
    {
        cout<<"THis is class A"<<endl;
    }
    void prints()
    {
        cout<<"non virtual of a"<<endl;
    }
};
class B : public A{
    public:
    void print() override
    {
        cout<<"this is class b"<<endl;
    }
    void prints()
    {
        cout<<"non virtual of b"<<endl;
    }
};
int main()
{
    A *obj = new A();
    B *obj1 = new B();
    obj=obj1;
    obj->print();
    obj->prints();
    obj1->print();
    obj1->prints();
    return 0;
}
