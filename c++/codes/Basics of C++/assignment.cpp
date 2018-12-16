// assignment operator
#include <iostream>
using namespace std;

int main()
{
    //思考值在内存中是如何存储的
    int a,b;    //a:?,b:?
    a = 10;     //a:10,b:?
    b = 4;      //a:10,b:4
    a = b;      //a:4,b:4
    b = 7;      //a:4,b:7

    cout << "a:";
    cout << a;
    cout << "b:";
    cout << b; 
}