#include <iostream>
using namespace std;
int main(){
    int userNumber;
    cout<<"Enter an number";
    cin>>userNumber;
    if(userNumber >= 10){
        cout<<"Blue";
        main();
    }
    if(userNumber < 10){
        cout<<"Red";
        main();
    }
}
