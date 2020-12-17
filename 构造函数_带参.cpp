#include <iostream>

using namespace std;
//类的构造函数是类的一种特殊的成员函数，它会在每次创建类的新对象时执行。
//构造函数的名称与类的名称是完全相同的，并且不会返回任何类型，也不会返回 void。构造函数可用于为某些成员变量设置初始值。
//
class Line
{
    public:
        void setLength(double len);
        double getLength(void);
        Line(double len);//带参数的构造函数
    private:
        double length;
};

Line::Line(double len)
{
    cout << "Object is being created" << endl;
    length = len;
}

void Line::setLength(double len)
{
    length = len;
}

double Line::getLength(void)
{
    return length;
}

int main()
{
    Line line(10.0);
    cout << "length is :" << line.getLength() << endl;
    line.setLength(6.0);
    cout << "length is : " << line.getLength() << endl;
    return 0;
}
