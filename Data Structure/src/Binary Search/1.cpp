#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;

}
int main(){
    int even[6] = {2,5,8,9,12,15};
    int odd[5] = {3,5,6,8,9};


    int evenIndex = binarySearch(even, 6, 7);
    cout<<"Index value of 7 : " <<evenIndex <<endl;
    
    int oddIndex = binarySearch(odd, 5, 10);
    cout<<"Index value of 10 : " <<oddIndex <<endl;
}