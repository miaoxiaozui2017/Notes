// reading an entire binary file
// 整个文件被读取并存储在内存块中
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    streampos size;
    char * memblock;

    ifstream file("example.bin",ios::in|ios::binary|ios::ate);  
    // ios::ate标志意味着get指针将定位在文件的末尾，这样当调用tellg()时，直接获得文件的大小
    if(file.is_open())
    {
        size = file.tellg();
        memblock = new char[size];  // 请求分配一个足够大的内存块以容纳整个文件
        // 在文件的开头设置get位置（在文件的末尾用这个指针打开了文件），读取整个文件，然后关闭它
        file.seekg(0,ios::beg);
        file.read(memblock,size);
        file.close();

        cout << "the entire file content is in memory";

        delete[] memblock;
    }
    else cout << "Unable to open file";
    return 0;
}