#include <iostream>
 
using namespace std;

//https://blog.csdn.net/s_lisheng/article/details/72842611
//拷贝构造函数运行的三种情况
//当用类的一个对象去初始化该类的另一个对象（或引用）时系统自动调用拷贝构造函数实现拷贝赋值。
//若函数的形参为类对象，调用函数时，实参赋值给形参，系统自动调用拷贝构造函数。（这里可有可能被编译器优化）
//当函数的返回值是类对象时，系统自动调用拷贝构造函数。（注意会有编译器可能会进行优化，而观察不到拷贝的发生）

class Line
{
   public:
      int getLength( void );
      Line( int len );             // 简单的构造函数
      Line( const Line &obj);      // 拷贝构造函数
      ~Line();                     // 析构函数
 
   private:
      int *ptr;
};
 
// 成员函数定义，包括构造函数
Line::Line(int len)
{
    cout << "调用构造函数" << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}
 
Line::Line(const Line &obj)
{
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // 拷贝值
}
 
Line::~Line(void)
{
    cout << "释放内存" << endl;
    delete ptr;
}
int Line::getLength( void )
{
    return *ptr;
}
 
void display(Line obj)
{
   cout << "line 大小 : " << obj.getLength() <<endl;
}
 
// 程序的主函数
int main( )
{
   Line line1(10);//定义一个对象，调用构造函数完成初始化
 
   Line line2 = line1; // 以已存在的对象line1拷贝一个新对象line2，会调用拷贝构造函数。
 
   display(line1);//类对象作为形参，会调用拷贝构造函数
   display(line2);//类对象作为形参，会调用拷贝构造函数
 
   return 0;
}
