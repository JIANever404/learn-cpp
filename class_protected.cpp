//protected（受保护）成员变量或函数与私有成员十分相似，但有一点不同，protected（受保护）成员在派生类（即子类）中是可访问的。
//
#include <iostream>
using namespace std;

class Box
{
protected:
    double width;
};

//SmallBox是Box的派生类，Box在这里是父类
class SmallBox:Box
{
public:
    void setSmallWidth(double wid);
    double getSmallWidth(void);
};

void SmallBox::setSmallWidth(double wid)
{
    width = wid;
}

double SmallBox::getSmallWidth(void)
{
    return width;
}


int main(void)
{
    Box box1;
    //box1.width = 3.0; //不合法的，因为protected成员也无法从外面访问
    SmallBox box;
    box.setSmallWidth(10.0);
    cout << "width of box:" << box.getSmallWidth() << endl;

    return 0;
}
