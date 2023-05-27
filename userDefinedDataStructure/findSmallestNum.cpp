#include<iostream>

using namespace std;

int main(){

    int array_size;
    cout<<"Etner array size:\n";
    cin>>array_size;

    int arr[array_size];
    cout<<"Enter "<<array_size<<" elements:\n";
    for(int i=0;i<array_size;i++) {

        cin>>arr[i];
    }

    int smallestNum = arr[0];
    
    for(int i=1;i<array_size;i++){
    	if(arr[i]<smallestNum){
    		smallestNum = arr[i];
		}
	}

    cout<<smallestNum;
    return 0;
}
