//PROGRAM FOR SUM
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>> n;

//     int i = 1;
//     int sum = 0;

//     while(i<=n){
//         sum = sum + i;
//         i = i+1;
//     }
//     cout<< "Sum of value is : " << sum <<endl;
// }

//PROGRAM FOR FIND THE SUM OF ALL EVEN NUMBERS
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int sum = 0;
//     cout<<"Sum of even number" <<endl;
//     cin>> n;
//     for(int i=0;i<=n;i++){
//         if(i%2 == 0){
//             sum = sum+i;
//         }
//     }
//     cout<< "sum of even number is :" <<sum <<endl;
// }

//CONVERT FEHRENHEIT TO CELSIUS

#include <iostream>
using namespace std;

int main()
{
    float f,c;
    cout<< "Enter temperature in Celsius: ";
    cin>> c;
    f = (9.*c/5.0)+32;
    cout<<"Fehrenheit temperature is: " <<f;
}
