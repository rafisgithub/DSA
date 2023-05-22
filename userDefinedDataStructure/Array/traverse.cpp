#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"Enter array size:\n";
    cin>>size;
    
    long long int arr[size];
    cout<<"Enter "<<size<<" elements:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}