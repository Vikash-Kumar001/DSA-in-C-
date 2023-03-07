#include <iostream>
using namespace std;

// 1 -> Even
// 0 -> Odd
bool isEven(int a){
    //Odd
    if(a&1){
        return 0;
    }
    else{
        //Even
        return 1;
    }
}
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    if(isEven(num)){
        cout<<"Number is Even : " <<endl;
    }
    else{
        cout<<"Number is Odd : " <<endl;
    }
    return 0;
}