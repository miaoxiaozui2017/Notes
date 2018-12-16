// overloading members on constness
#include <iostream>
using namespace std;

class MyClass{
        int x;
    public:
        MyClass(int val):x(val){};
        const int& get() const{ return x; }
        int& get(){ return x; }
};

int main()
{
    MyClass foo(10);
    const MyClass bar(20);
    foo.get() = 15;         // ok:get()返回int&
    //bar.get() = 25;       // 无效：get()返回const int&
    cout << foo.get() << '\n';
    cout << bar.get() << '\n';

    return 0;
}