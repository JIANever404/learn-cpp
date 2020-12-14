#include <iostream>

using namespace std;

class Box
{
    public:
        double length;
        double breadth;
        double height;
};

int main()
{
    Box Box1;
    Box Box2;
    double volume = 0.0;

    Box1.height = 5.0;
    Box1.breadth = 6.0;
    Box1.length = 7.0;

    Box2.height = 10.0;
    Box2.breadth = 12.0;
    Box2.length = 13.0;

    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Box1的体积：" << volume << endl;

    volume = Box2.height * Box2.length * Box2.breadth;
    cout << "Box2的体积：" << volume << endl;
    return 0;
}
//需要注意的是，私有的成员和受保护的成员不能使用直接成员访问运算符 (.) 来直接访问。
