#include <iostream>
using namespace std;
 
int main()
{
    int *array = new int [5];

    int i;

    for(i=0; i<5; i++){
         array[i] = i;
    }   
    //打印数据   
    for(i=0; i<5; i++){
        cout<<array[i]<<"\t";   
    }   
    //开始释放申请的堆   
    delete [] array;   
    return 0;
}
