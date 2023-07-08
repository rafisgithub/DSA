#include<iostream>
#include<stack>

using namespace std;
//function delcaration
int postfixEva(string x);
int main(){
    string expr;
    cout<<"Enter you postfix expression:\n";
    cin>>expr;
    //Function calling
    cout<<postfixEva(expr);
    return 0;
}

//function defination
int postfixEva(string x){
    stack<int> s;

    int len = x.length();
    for(int i=0;i<len;i++){
        if(x[i] >= '0' && x[i]<='9'){
            s.push(x[i]-'0');
        }else{
            int v1,v2,r;
            v1 = s.top();
            s.pop();
            v2 = s.top();
            s.pop();
            if(x[i]=='+'){
                r = v2+v1;
                s.push(r);
            }else if(x[i]=='-'){
                r = v2-v1;
                s.push(r);
            }else if(x[i]=='*'){
                r = v2*v1;
                s.push(r);
            }else if(x[i]=='/'){
                r = v2/v1;
                s.push(r);
            }else(x[i]=='%'){
                r = v2%v1;
                s.push(r);
            }
        }
    }

    return s.top();
}
