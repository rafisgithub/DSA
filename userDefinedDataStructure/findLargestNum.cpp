#include<iostream>

using namespace std;

int main(){
    
    int arr_size;
    cin>>arr_size;

    int arr[arr_size];

    for(int i=0;i<arr_size;i++){
        cin>>arr[i];
    }

    int largestNum = arr[0];
    for(int i=0;i<arr_size;i++){
        if(largestNum<arr[++i]){
            largestNum = arr[i];
        }
    }

    cout<<largestNum<<endl;

    return 0;
}