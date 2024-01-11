#include <iostream>
#include <string>
using namespace std;
//loop
int main() {
//    for(int i = 0; i < 10; i++){
//         if(i % 3 == 0){
//             if(i != 0){
//                 cout<<i<<"\n";
//             }
//         }
//    }
    int num1;
    int returningtotal;
    cout<<"Enter the number for wich you want the sum until";
    cin>>num1;
    for(int i = 0; i <= num1;i++){
        returningtotal+=i;
    }
    cout<<returningtotal;
    main();

}