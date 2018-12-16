// increaser
#include <iostream>
using namespace std;

void increase (void* data,int psize)
{
    if (psize == sizeof(char))
    {
        char* pchar;
        pchar = (char*)data;
        ++(*pchar);
    }
    else if (psize == sizeof(int))
    {
        int* pint;
        pint = (int*)data;
        ++(*pint);
    }
} 

int main()
{
    char a = 'x';
    int b = 1602;
    increase (&a,sizeof(a));
    increase (&b,sizeof(b));
    cout << a << ", " << b << '\n';
    return 0;
}

// sizeof返回参数的字节大小，对于非动态数据类型，该值是常量。