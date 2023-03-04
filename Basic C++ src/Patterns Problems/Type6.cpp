#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int row = 1;
    while(row<=n){
        //Print Spaces First
        int space = n-row;
        while(space){
            cout<<" ";
            space = space-1;
        }
        //Print stars second
        int col = 1;
        while(col<=row){
            cout<<"*";
            col = col+1;
        }
        cout<<endl;
        row = row+1;
    }
}