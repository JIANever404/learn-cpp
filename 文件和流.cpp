#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    char data[100];

    fstream file;//写模式打开文件
    file.open("afile.dat",ios::out|ios::app);//写模式|所有写入追加到文件末尾

    cout << "writing to the file" << endl;
    cout << "enter your name :" << endl;

    cin.getline(data,100);//cin >> data 从外部读取一行
    file << data << endl;//data >> file

    cout << "enter your age :" << endl;
    cin >> data;//cin >> data 
    cin.ignore();//ignore() 函数会忽略掉之前读语句留下的多余字符。

    file << data << endl;//data >> file

    file.close();

    file.open("afile.dat",ios::app | ios::in);
    cout << "reading from the file" << endl;
    file >> data;
    cout << data << endl;

    file >> data;
    cout << data << endl;

    file.close();
    
    return 0;
}
