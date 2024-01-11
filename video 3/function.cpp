#include <iostream>
using namespace std;

void myfunction(string input){
    cout<<input<<"\n";
}

int main(){
    myfunction("Hello");
    myfunction("World");
    myfunction("C++");
    return 0;
}