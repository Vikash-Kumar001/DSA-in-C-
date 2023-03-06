#include <iostream>
using namespace std;
int main()
{
    int a , b;
    cout<< " Enter the Value" <<endl;
    cin>> a;
    cout<< " Enter the Value" <<endl;
    cin>> b;

    char op;
    cout<< " Enter operation you want to perform" <<endl;
    cin>>op;
    
    switch(op){
        case '+': cout<< (a+b) <<endl;
        case '-': cout<< (a-b) <<endl;
        case '*': cout<< (a*b) <<endl;
        case '/': cout<< (a/b) <<endl;
        case '%': cout<< (a%b) <<endl;

        default: cout<< "Please enter a valid operation" <<endl;
    }
    return 0;

}