#include <iostream>

using namespace std;

int main()
{
    char name[50];
    char age[10];
    cout << "请输入您的名称与年龄：";
    cin >> name >> age ;
    cout << "您的名称是：" << name << endl;
    cout << "您的年龄是：" << age << endl;
    return 0;
}
