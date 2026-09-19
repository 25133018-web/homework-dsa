#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main (){
	int Q, count=0;
	cin >> Q;
	stack <string> words;
	stack <string> chuoi;
	stack <string> undo_stack;
	stack <string> redo_stack;
	while(Q--){
		string thaotac;
		cin >> thaotac;
		if (thaotac== "TYPE"){
			string str;
			cin >> str;
			words.push(str);
			count ++;
			while (!redo_stack.empty()) {
    			redo_stack.pop();
			}		
		}
		if (thaotac == "UNDO"){
			if(!words.empty()){
			string top = words.top();
			words.pop();
			count --;
			redo_stack.push(top);
			}
		}
		
		if(thaotac == "REDO"){
			if(!redo_stack.empty()){
				string add = redo_stack.top();
				words.push(add);
				count ++;
				redo_stack.pop();
			}
		}
	}
	cout << count << endl;
	while(!words.empty()){
		chuoi.push(words.top());
		words.pop();
	}
	while (!chuoi.empty()){
		cout <<chuoi.top() <<" ";
		chuoi.pop();
	}
	return 0;
}
