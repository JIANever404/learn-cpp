#include <iostream>

//在 C++ 中，每一个对象都能通过 this 指针来访问自己的地址。
//this 指针是所有成员函数的隐含参数。
//在成员函数内部，它可以用来指向调用对象。
//友元函数没有 this 指针，因为友元不是类的成员。只有成员函数才有 this 指针。
//this 指针可以访问类的任意成员，包括private
using namespace std;

class Box
{
public:
    Box(double l=2.0,double b = 2.0,double h = 2.0)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
    }
    double Volume()
    {
        return length * breadth * height;
    }
    int compare(Box box)
    {
        return this->Volume() > box.Volume();
    }
private:
    double length;
    double breadth;
    double height;
};

int main()
{
    Box box1(3.3,1.1,2.2);
    Box box2(4.4,5.5,6.6);

    if(box1.compare(box2))
    {
        cout << "box2 is smaller than box1" << endl;
    }
    else
    {
        cout << "box2 is equal to or larger than box1" << endl;
    }

    return 0;
}
