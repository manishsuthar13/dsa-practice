#include<iostream>
using namespace std;

int min(int arr[],int n){
    int min = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int max(int arr[],int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
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
    cout<<"minimum element in the array is:"<<min(arr,n);
    cout<<endl<<"maximum element in the array is:"<<max(arr,n);
    return 0;
}