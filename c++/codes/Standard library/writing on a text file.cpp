// writing on a text file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //ofstream myfile("miao-example2.txt");
    //ofstream myfile("example.txt");
    ofstream myfile("example.bin",ios::binary);
    if(myfile.is_open())
    {
        myfile << "This is a line.\n";
        myfile << "This is another line.\n";
        myfile.close();
    }
    else cout << "Unable to open file";
    return 0;
}