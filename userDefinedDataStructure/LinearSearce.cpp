#include<iostream>

using namespace std;

int main(){
    int array_size;
    cin>>array_size;
    
    int arr[array_size];
    
    for(int i=0;i<array_size;i++){
    	cin>>arr[i];
	}
	int searching_item;
	cin>>searching_item;
	int counter =0;
	for(int i=0;i<array_size;i++){
		if(searching_item == arr[i]){
			cout<<searching_item<<" is found at index "<<i<<" "<<endl;
		}else{
			counter++;
		}
	}
	if(counter == array_size){
		cout<<searching_item<<" is not found!\n";
	}
    return 0;
}
