#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int row = 1;
    while(row<=n){
        //Print Space 1st Triangle
        int space = n-row;
        while(space){
            cout<<" ";
            space = space-1;
        }
        //Print 2nd Triangle
        int col = 1;
        while(col<=row){
            cout<<col;
            col = col+1;
        }
        //Print 3rd Triangle
        int start = row-1;
        while(start){
            cout<<start;
            start = start-1;
        }
        cout<<endl;
        row = row+1;
    }
}