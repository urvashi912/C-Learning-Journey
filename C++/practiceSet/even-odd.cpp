#include <iostream>
using namespace std;

bool IsEven(int a){
    if(a&1){
        return 0;
    }else{
        return 1;
    }

}




int main(){
    int num;
    cin>>num;
    if(IsEven(num)){
        cout<<"Number is even";
    }else{
        cout<<"Number is odd";
    }
    return 0;
}