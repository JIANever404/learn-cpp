#include <iostream>

using namespace std;

class Box
{
    public:
        double lendth;
        void setWidth(double wid);
        double  getWigth(void);
    private:
        double width;
};

void Box::setWidth(double wid)
{
    width = wid;
}

double Box::getWigth(void)
{
    return width;
}

int main()
{
    Box box;
    box.lendth = 10.0;
    cout << "Length of box : " << box.lendth << endl;

    //box.width = 10.0; //error : 因为width是私有的；
    box.setWidth(10.0); //使用成员函数，通过内部访问
    cout << "width of box : " << box.getWigth() << endl;
    
    return 0;
}
