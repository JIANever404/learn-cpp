#include <iostream>

using namespace std;

class Box
{
public:
    double length;
    double breadth;
    double height;
    
    //类定义中定义的成员函数把函数声明为内联的，即便没有使用 inline 标识符。
    double getVolume(void)
    {
        return length * breadth * height;
    }
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
};

void Box::setLength(double len)
{
    length = len;
}

void Box::setHeight(double hei)
{
    height = hei;
}

void Box::setBreadth(double bre)
{
    breadth = bre;
}

int main()
{
    Box Box1;
    Box Box2;
    double volume = 0.0;

    Box1.setLength(6.0);
    Box1.setHeight(7.0);
    Box1.setBreadth(8.0);

    Box2.setHeight(2.0);
    Box2.setLength(2.0);
    Box2.setBreadth(2.0);

    volume = Box1.getVolume();
    cout << "Box1的体积：" << volume << endl;
    cout << "Box2的体积：" << Box2.getVolume() << endl;

}
