#include <cstdio>
#include <stack>
#include <iostream>
using namespace std;
using std::stack;
using std::cout;
using std::cin;
using std::endl;


bool balanced_brackets(string str){

	stack<char> myStack;

	for (int i=0; i<str.size(); i++){
		//cout << str[i] << endl;
		if (str[i]=='(' || str[i]=='[' || str[i]=='{') {
			myStack.push(str[i]);
		}

		else if (myStack.empty())
			return false;
		
		else {
			if (str[i] == ')' && myStack.top() == '('){
				myStack.pop();
			}
			else if (str[i] == ']' && myStack.top() == '['){
				myStack.pop();
			}
			else if (str[i] == '}' && myStack.top() == '{'){
				myStack.pop();
			}
			else {
				return false;
			}
		}
	}
	
	if (myStack.empty())
		return true;
	else 
		return false;
}





int main(){
    
	int N;
	int count=0;
	cin >> N;

	while (count < N){

		string str;
		cin >> str;
		if(balanced_brackets(str))
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;

		count++;
	}
	    
    return 0;
}



