#include <iostream>
 
using namespace std;
 
class Box
{
   public:
       //静态成员在类的所有对象中是共享的。
       //当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，静态成员都只有一个副本。
       //并且及时在类对象不存在的情况下也能被调用
       //访问时，使用“类名::”的方式进行访问
      static int objectCount;
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // 每次创建对象时增加 1
         objectCount++;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      //静态成员函数即使在类对象不存在的情况下也能被调用
      //静态函数只要使用类名加范围解析运算符 :: 就可以访问。
      //静态成员函数只能访问静态成员数据、其他静态成员函数和类外部的其他函数。
      //静态成员函数没有 this 指针，只能访问静态成员（包括静态成员变量和静态成员函数）。
      //
      //其实可以将静态成员函数与静态成员变量看做一个“外部”的东西，只不过和class有联系？？
      static int getCount()
      {
          return objectCount;
      }
   private:
      double length;     // 长度
      double breadth;    // 宽度
      double height;     // 高度
};
 
// 初始化类 Box 的静态成员
int Box::objectCount = 0;
 
int main(void)
{
   cout << "Total objects: " << Box::objectCount << endl;
   cout << "Total objects: " << Box::getCount() << endl;

   Box Box1(3.3, 1.2, 1.5);    // 声明 box1
   Box Box2(8.5, 6.0, 2.0);    // 声明 box2
 
   // 输出对象的总数
   cout << "Total objects: " << Box::objectCount << endl;
   cout << "Total objects: " << Box::getCount() << endl;
   return 0;
}
