// more pointers
#include <iostream>
using namespace std;

int main()
{
    int firstvalue = 5,secondvalue = 15;
    int * p1,* p2;      // 同时声明多个同类型指针，int * p1,p2;错误的例子

    p1 = &firstvalue;   // p1 = firstvalue的地址
    p2 = &secondvalue;  // p2 = secondvalue的地址
    *p1 = 10;           // p1指向的值 = 10
    *p2 = *p1;          // p2指向的值 = p1指向的值
    p1 = p2;            // p1 = p2(复制了指针的值)
    *p1 = 20;           // p1指向的值 = 20

    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';
    return 0; 
}