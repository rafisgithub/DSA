#include<iostream>
using namespace std;

int isFull();
int isEmpty();
int myStack[6];
void push(int n);
void peek();
void pop();

void display();
int top = 0;

int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	push(70);
	display();
	pop();
	pop();
		pop();
	pop();
		pop();
	pop();
		pop();
	pop();
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
		cout<<"Stack is full\n";
	}else{
		myStack[top] = n;
		cout<<n<<" insert into the stack.\n";
		top++;
	}

}
void peek(){
	cout<<"Top value :"<<myStack[top-1];
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
