#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array  : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array  : ";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i += 2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}