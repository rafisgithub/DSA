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

    int interstedItem;
    cout<<"Enter your inserted elements:\n";
    cin>>interstedItem;

    int location;
    cout<<"Where do you wanna to put this item(index):\n";
    cin>>location;
    //create space for inserted item
    for(int i=size-1;i>=location;i--){
        arr[i+1] = arr[i];
    }
    //Assigning value to the right location
    arr[location] = interstedItem;
    //display values
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}