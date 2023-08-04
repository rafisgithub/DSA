#include<iostream>
using namespace std;


void push(int n);
void peek();
void pop();
int isFull();
int isEmpty();
void display();
const long int max_size = 3000;
long long int myStack[max_size];
int stack_size;
int top = 0;

int main(){
	int option;
	cout<<"Enter stack size:";
	cin>>stack_size;
	myStack[stack_size];
	again:
	cout << "1)Push elements:" << endl;
    cout << "2)Pop elements:" << endl;
    cout << "3)Peek elements:" << endl;
    cout << "4)Display all elements:" << endl;
    cout << "0)Exit the program:" << endl;
	cin>>option;
	switch(option){
		case 1:
			int n;
			cout<<"Enter an elements:";
			cin>>n;
			push(n);
			goto again;
		case 2:
			pop();
			goto again;
		case 3:
			peek();
			goto again;
		case 4:
			display();
			goto again;
		default:
			cout<<"invalid option!\n";
	}
    return 0;
}
int isFull(){
	if(top == 6){
		return 1;
	}else{
		return 0;
	}
}

int isEmpty(){
	if(top == 0){
		return 1;
	}else{
		return 0;
	}
}
void push(int n){
	if(isFull()){
		cout<<"Stack is full "<< n <<" can't insert into the stackj\n";
	}else{
		myStack[top] = n;
		cout<<n<<" insert into the stack.\n";
		top++;
	}

}
void peek(){
	cout<<"Top value :"<<myStack[top-1]<<endl;
}
void pop(){
	if(isEmpty()){
		cout<<"Stack is empty.\n";
	}else{
		top --;
		cout<<"Popped elelement is :"<<myStack[top]<<endl;
	}
	
}
void display(){
	if(top>0){
		cout<<"MY stack:\n";
		for(int i = top-1;i>=0;i--){
		cout<<myStack[i]<<endl;
	}
	}
}
