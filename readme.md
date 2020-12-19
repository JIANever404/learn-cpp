教程地址：https://www.runoob.com/cplusplus/cpp-tutorial.html  
进度：https://www.runoob.com/cplusplus/cpp-polymorphism.html 

1.public 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：public, protected, private  
2.protected 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：protected, protected, private  
3.private 继承：基类 public 成员，protected 成员，private 成员的访问属性在派生类中分别变成：private, private, private  

但无论哪种继承方式，上面两点都没有改变：  
1.private 成员只能被本类成员（类内）和友元访问，不能被派生类访问;  
2.protected 成员可以被派生类访问。  
3.只要在基类中是私有成员，在派生类中都不可被访问

其实要看1、派生之后在派生类中变成了什么类型，2.基类私有，派生类就不可见 这两条就可以判断，“protected成员可以被派生类访问”是根据这两条产生的必然结果，因为无论是
那种继承方式，都会产生这个结果

![image](https://github.com/JIANever404/learn-cpp/blob/master/继承方式.png)
