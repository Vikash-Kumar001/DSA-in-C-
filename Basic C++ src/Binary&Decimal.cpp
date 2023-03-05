#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //This is for Decimal to Binary conversion
    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;

    // int binary = 0;
    // int i = 0;

    // while(n!=0){
    //     int bit = n&1;
    //     binary = (bit*pow(10,i) + binary);
    //     n = n>>1;
    //     i++;
    // }
    // cout<<binary<<endl;

    //This is for Binary to Decimal conversion
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int i = 0;
    int decimal = 0;
    while(n!=0){
        int digit = n%10;
        if (digit==1){
            decimal = decimal + pow(2,i);
        }
        n = n/10;
        i++;
    }
    cout<<decimal<<endl;
}