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
    int counter = 1;
    while (counter<size)
    {
        for(int i=0;i<size-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    
  for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
