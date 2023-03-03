//PROGRAM TO CHECK GREATER OR SMALLER (A&B)
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the value of a : " <<endl;
    cin>> a;

    cout<<"Enter the value of b :" <<endl;
    cin>> b;

    if(a>b){
        cout<<"A is greater" <<endl;
    }
    if(b>a){
        cout<<"B is greater" <<endl;
    }
}