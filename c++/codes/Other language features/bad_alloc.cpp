// bad_alloc standard exception
#include <iostream>
#include <exception>
using namespace std;

int main()
{
    try
    {
        int* myarray = new int[1000];
    }
    catch(exception& e)
    {
        cout << "standard exception: " << e.what() << endl; // 本例可能捕获的异常是bad_alloc
    }
    return 0;
}