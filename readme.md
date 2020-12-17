教程地址：https://www.runoob.com/cplusplus/cpp-tutorial.html
进度：https://www.runoob.com/cplusplus/cpp-classes-objects.html
https://www.runoob.com/cplusplus/cpp-class-access-modifiers.html （protected）

1.public 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：public, protected, private
2.protected 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：protected, protected, private
3.private 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：private, private, private

但无论哪种继承方式，上面两点都没有改变：
1.private 成员只能被本类成员（类内）和友元访问，不能被派生类访问；
2.protected 成员可以被派生类访问。

![image](https://github.com/JIANever404/learn-cpp/blob/master/继承方式.png)