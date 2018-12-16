// example on this
#include <iostream>
using namespace std;

class Dummy{
    public:
        bool isitem(Dummy& param);
};

bool Dummy::isitem(Dummy& param)
{
    if (&param == this) return true;
    else return false;
}

int main()
{
    Dummy a;
    Dummy* b = &a;
    if (b -> isitem(a))
        cout << "yes,&a is b\n";
    return 0;
}