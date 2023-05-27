#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"Enter arrays size:\n";
    cin>>size;
    long long arr[size];
    cout<<"Enter "<<size<<" Elements:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
  for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}