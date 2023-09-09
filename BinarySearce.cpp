#include<iostream>
using namespace std;

int main(){
    int array_size;
    cout<<"Enter array size:";
    cin>>array_size;
    long long int arr[array_size];

    cout<<"Enter array elements:";
    for(int i = 0;i<array_size;i++){
        cin>>arr[i];
    }
    int mid;
    int l = 0;
    int r = array_size-1;
    int searchingElement;
    cout<<"Enter searching element:";
    cin>>searchingElement;

    while(l<=r){
        mid = (l+r)/2;
        if(searchingElement == arr[mid]){
            cout<<"Elements is found at index "<<mid<<endl;
            break;
        }else if(searchingElement<arr[mid]){
            r = mid - 1;
        }else{
            l = mid+1;
        }
    }

    if(l>r){
        cout<<"Elements is not found!"<<endl;
    }
    return 0;
}