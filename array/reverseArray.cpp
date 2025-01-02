#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
    for(int i=0;i<(n/2);i++){
        swap(arr[i],arr[n-1-i]);
    }
    cout<<"reversed array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"number of elements:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr,n);
    return 0;
}