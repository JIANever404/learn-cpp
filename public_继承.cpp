#include <iostream>
#include <assert.h>
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
        cout << a << endl;
        cout << a1 << endl;
        cout << a2 << endl;
        cout << a3 << endl;
    }
public:
    int a1;
protected:
    int a2;
private:
    int a3;
};

class B : public A
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
        cout << a << endl;//可以，因为是public成员
        cout << a1 << endl;//可以，基类的public成员，public继承后在派生类中依然是public成员
        cout << a2 << endl;//可以，基类的protected成员，在这里继承之后仍然是protected，可以在class之中进行访问
        //cout << a3 << endl;//不可以，基类的private成员，只能在基类中被访问
    }
};

int main()
{
    B b(10);//定义一个类为B的对象b，并初始化
    cout << b.a << endl;//可以，public
    cout << b.a1 << endl;//可以，public
    //cout << b.a2 << endl;//不可以，a2是protected成员由基类中继承而来的，只能在类中被访问
    //cout << b.a3 << endl;//不可以，a3是private成员，只能在基类中被访问

    return 0;
}
