#include <iostream>

//类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员。
//友元可以是一个函数，该函数被称为友元函数；友元也可以是一个类，该类被称为友元类，在这种情况下，整个类及其所有成员都是友元。

using  namespace std;

class Box
{
    double width;
public:
    //此处将该外部的函数声明为Box的友元函数，成为友元函数后，它可以直接访问该类的任何成员
    friend void printWidth(Box box);
    void setWidth(double wid);
};

void Box::setWidth(double wid)
{
    width = wid;
}

//此处是函数的定义，该函数不是任何类的成员函数
void printWidth(Box box)
{
    //因为在class中声明了该函数为class的友元函数，所以在此处可直接利用“.”的方式直接访问类内部的成员
    cout << "width of box : " << box.width << endl; 
}

int main()
{
    Box box;
    box.setWidth(10.0);
    printWidth(box);

    return 0;
}
