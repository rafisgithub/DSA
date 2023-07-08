#include<iostream>
using namespace std;
void enQueue(int n);
void deQueue();
void peek();
int isFull();
int isEmpty();
void display();

const long long int max_size = 20000;
long long int Q[max_size];
int queue_size;
int r =0;
int f=0;

int main(){
    cout<<"Enter queue size:";
    cin>>queue_size;
    again:
    int option;
    cout<<"Now choose an option:\n";
    cout<<"1)Insert elements into the queue.\n";
    cout<<"2)Remove element from the queue.\n";
    cout<<"3)peek elelemts.\n";
    cout<<"4)show the all elements.\n";
     cin>>option;
    switch (option)
    {
    case 1:
        int n;
        cout<<"Enter an element:";
        cin>>n;
        enQueue(n);
        goto again;
        break;
    case 2:
        deQueue();
        goto again;
        break;
    case 3:
        peek();
        goto again;
        break;
    case 4:
         display();
         goto again;
         break;
    default:
        cout<<"Invalid option.\n";
    }
    return 0;
}


void enQueue(int n) {
    if(isFull()){
        cout<<"Queue is full\n";
    }else{
        Q[r] = n;
        cout<<Q[r]<<" is inserted into the stack.\n";
        r++;
    }
}
void deQueue(){
   if(isEmpty()){
    cout<<"Queue is empty\n";
   }else{
     cout<<"Removed front element "<<Q[f]<<endl;
     f++;
   }
}
void peek(){
    cout<<"Front value is "<<Q[f]<<endl;
    f++;
}
int isFull(){
    if(r == queue_size){
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(){
    if(f==queue_size){
        return 1;
    }else{
        return 0;
    }
}

void display(){
	cout<<"the Queue elemements are:\n";
    for(int i =f;i<r;i++){
        cout<<Q[i]<<" ";
    }
    cout<<"\n";
}
