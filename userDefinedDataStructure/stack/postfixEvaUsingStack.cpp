#include<iostream>
#include<stack>
using namespace std;
//function declaration
int postfixEvaluation(string x);
int main(){
	while(1){
	string expr;
	cout<<"Enter an expression:\n";
	cin>>expr;
//	function calling

	cout<<"Result:"<<postfixEvaluation(expr)<<endl;

	}
	return 0;
}
//function defination
int postfixEvaluation(string x){
	stack<int> s;
	for(int i=0;i<x.length();i++){
		if(x[i]>='0' && x[i]<='9'){
			s.push(x[i]-'0');
		}else{
			int v1,v2,r;
			v1 = s.top();
			s.pop();
			v2 = s.top();
			s.pop();
			switch(x[i]){
				case '+':
					r = v2 + v1;
					break;
				case '-':
					r = v2 -v1;
					break;
				case '*':
					r = v2 * v1;
					break;
				case '/':
					r = v2 / v1;
					break;
				default:
					cout<<"invalid operator "<<x[i]<<endl;
			}
			s.push(r);
		}
	}
	return s.top();
}
