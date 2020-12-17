#include <iostream>
#include <assert.h>
#include <stdlib.h>

using namespace std;

class A
{
public:
    int a;
    A()
    {
        a1 = 1;
        a2 = 2;
        a3 = 3;
        a = 4;
    }
    void fun()
    {
        cout << a1 << endl;
        cout << a2 << endl;
        cout << a3 << endl;
        cout << a << endl;
    }
public:
    int a1;
protected:
    int a2;
private:
    int a3;
};

class B : protected A
{
public:
    int a;
    B(int i)
    {
        A();
        a = i;
    }
    void fun()
    {
        cout << a << endl; //在B继承A之后，重新初始化了a，所以在这里a依然是public；
        cout << a1 << endl;//a1在父类A中为public，但是经过protected继承之后变为了protected，可在类中进行访问
        cout << a2 << endl;//a2原本是protected，经过protected继承之后依然为protected，可在类中进行访问
        //cout << a3 << endl;//a3原本为private，在基类中为private的只能在基类中进行访问
    }
};

int main()
{
    B b(10);
    cout << b.a << endl;//public ，可任意访问
    //cout << b.a1 << endl; //a1继承之后变为protected，不能被外界访问。
    //cout << b.a2 << endl; //a2继承之后变为protected，不能被外界访问。
    //cout << b.a3 << endl; //a3为private，只能在基类中进行访问
    system("pwd");
    return 0;
}
