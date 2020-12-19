#include <iostream>
using namespace std;
 
class Time
{
   private:
      int hours;             // 0 到 23
      int minutes;           // 0 到 59
   public:
      // 所需的构造函数
      Time(int h=0, int m=0):hours(h),minutes(m){  }
      // 显示时间的方法
      void displayTime()
      {
         cout << "H: " << hours << " M:" << minutes <<endl;
      }
      // 重载前缀递增运算符（ ++ ）
      Time operator++ ()    //前缀形式 
      {
         ++minutes;          // 对象加 1
         if(minutes >= 60)  
         {
            ++hours;
            minutes -= 60;
         }
         return Time(hours, minutes);//如果有time1 = ++time2的形式，就会返回给time1，也可以直接++time2。
      }
      // 重载后缀递增运算符（ ++ ）
      Time operator++( int )//(int)表示是后缀形式  
      {
         // 保存原始值
         Time T(hours, minutes);
         // 对象加 1
         ++minutes;                    
         if(minutes >= 60)
         {
            ++hours;
            minutes -= 60;
         }
         // 返回旧的原始值
         return T; //如果有time1 = time2++ 的形式，返回旧的原始值，模拟变量的++属性
      }
};
int main()
{
   Time T1(11, 59), T2(10,40) , T3;
 
   ++T1;                    // T1 加 1
   T1.displayTime();        // 显示 T1
   T3 = (++T1);             // T1 再加 1 ，并将结果返回给T3
   T1.displayTime();        // 显示 T1
   T3.displayTime();
 
   T2++;                    // T2 加 1
   T2.displayTime();        // 显示 T2
   T3 = T2++;               // T2 再加 1 , 并将++之前的结果返回给T3
   T2.displayTime();        // 显示 T2
   T3.displayTime();
   return 0;
}
