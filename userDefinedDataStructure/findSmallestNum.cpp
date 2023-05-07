#include<iostream>

using namespace std;

int main(){

    int array_size;
    cin>>array_size;

    int arr[array_size];

    for(int i=0;i<array_size;i++) {

        cin>>arr[i];
    }

    int smallestNum;

    for(int i=1;i<array_size;i++){
        if(smallestNum>arr[i]){
            smallestNum = arr[i];
        }
    }

    cout<<smallestNum;
    return 0;
}