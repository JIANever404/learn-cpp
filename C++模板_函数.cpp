#include <iostream>
#include <string>
 
using namespace std;

//T在这里是函数所使用的数据类型的占位符名称。这个名称可以在函数定义中使用。
//函数模板并不是一个真正意义上的函数，它仅仅是对函数结构外观的声明，本身并不占用内存
//只有当编译器遇到模板函数的调用时，才会在内存中创建一个函数实例。
template <typename T>
inline T const& Max (T const& a, T const& b) 
{ 
    return a < b ? b:a; 
} 

int main ()
{
 
    int i = 39;
    int j = 20;
    //在传入参数时确定模板函数的形参的数据类型
    cout << "Max(i, j): " << Max(i, j) << endl; 
 
    double f1 = 13.5; 
    double f2 = 20.7; 
    cout << "Max(f1, f2): " << Max(f1, f2) << endl; 
 
    string s1 = "Hello"; 
    string s2 = "World"; 
    cout << "Max(s1, s2): " << Max(s1, s2) << endl; 
 
   return 0;
}
