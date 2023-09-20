#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    std::cout<<"Hello world";
    std::cout<<"Hello world1";
    std::cout<<"Hello world2";
    // without namespace std

    cout<< "hello world";
    //with namespace std
    //here hello world was coming on same line so for printing this in newline we used endl or "\n"
    cout<<"hello world"<<endl;
    // or we use 
    cout<<"hello world\n";
    
    return 0;
}
