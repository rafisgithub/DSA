#include<iostream>

using namespace std;

int main(){
    int array_size,i;
    cin>>array_size;

    int arr[array_size];

    for(int i=0; i<array_size; i++){
        cin>>arr[i];
    }

    int search_num;
    cin>>search_num;
    int found;
    for(int i=0;i<array_size;i++){
        if(search_num == arr[i]){
           cout<<search_num;
        }
    }
    if(i<=array_size){
    	cout<<"Not found!\n";
	}
  
    return 0;
}