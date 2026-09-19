#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main (){
	string str;
	stack <char> st;
	getline(cin, str);
	bool check = true;
	for(int i = 0; i < str.length() ; i++){
		char c = str[i];
		if(c == '{' || c== '(' || c == '['){
			st.push(c);
		}
		else if(c == '}'|| c == ')' || c== ']'){
			if(st.empty()){
				check = false;
				break;
			}
			char top = st.top();
			if(top =='{' && c == '}' ){
				st.pop();
			}
			else if(top =='(' && c == ')'){
				st.pop();
			}
			else if(top == '[' && c == ']' ){
				st.pop();
			}
			else{
				check = false;
				break;
			}
		}
	}
	
	if(check && st.empty()){
		cout <<"YES";
	}
	else{
		cout <<"NO";
	}
	return 0;
}
