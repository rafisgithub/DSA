#include<iostream>
using namespace std;

void add(int n);
void show();
int bst(int n);

const long long int MaxSize = 100000;
long long int tree[MaxSize];
int controllIndex = 0;
int tree_size;

int main(){
	
	cout<<"Enter tree size:";
	cin>>tree_size;
	
	tree[tree_size];
	again:
	cout<<"Choose an option.\n";
	cout<<"1(Add(insert).\n";
	cout<<"2)show.\n";
	cout<<"3)BST.\n";
	cout<<"0)Exit the program.\n";
	
	int option;
	cin>>option;
	switch(option){
		case 1:
			int n;
			cout<<"Enter an elements:";
			cin>>n;
			add(n);
			goto again;
			break;
		case 2:
			show();
			goto again;
			break;
		case 3:
			int searching_element;
			cout<<"Enter your searching element:";
			cin>>searching_element;
			int res;
			res = bst(searching_element);
			if(res == -1){
				cout<<"Intem is not found.\n";
			}else{
				cout<<"Item is found at index "<<res<<"\n";
			}
			goto again;
			break;
		case 0:
			exit(0);
		default:
			cout<<"Invalid option.\n";
	}
	return 0;
}

void add(int n){
	int index = 0;
	while(1){
		if(tree[index]==0){
		tree[index] = n;
		cout<<n<<" added sucessfully.\n";
		break;
	}else if(tree[index]>n){
		//goto left:
		index = (index+1)*2-1;
	}else{
		//goto right
		index = (index+1)*2;
	}
	
	}
	if(controllIndex < index){
		controllIndex = index;
	}
}
void show(){
	for(int i =0;i<=controllIndex;i++){
		cout<<tree[i]<<"\t";
	}
	cout<<"\n";
}

int bst(int n){
	int index = 0;
	while(index<=controllIndex){
		if(tree[index] == n){
			return index;
		}else if(tree[index]>n){
			index = (index+1)*2-1;
		}else{
			index = (index+1)*2;
		}
	}
	return -1;
}
