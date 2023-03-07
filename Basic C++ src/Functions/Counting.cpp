#include <iostream>
using namespace std;
void printCounting(int n){
    //aFunction Body
    for(int i = 0; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    int n;
    cin>>n;
    //Function Call
    printCounting(n);
    return 0;
}