#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : " <<endl;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            //For Alphabates
            char ch = ('A'+row-1);
            cout<<ch;

            //For Number
            // cout<<row;

            //For stars
            // cout<<"*";
            col = col+1;
        }
        cout <<endl;
        row = row+1;
    }
}