#include<iostream>

using namespace std;

int main(){
    
    int arr_size;
    cout<<"Enter array size:\n";
    cin>>arr_size;

    int arr[arr_size];
    cout<<"Enter "<<arr_size<<" elements:\n";
    for(int i=0;i<arr_size;i++){
        cin>>arr[i];
    }

    int largestNum = arr[0];
    
    for(int i=1;i<arr_size;i++){
    	if(arr[i]>largestNum){
    		largestNum= arr[i];
		}
	}

    cout<<largestNum<<endl;

    return 0;
}
