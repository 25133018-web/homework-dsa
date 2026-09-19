#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(){
	int Q;
	cin >> Q;
	deque <int> job;
	while(Q--){
		string thaotac;
		cin >> thaotac;
		if (thaotac== "PUSH_FRONT"){
			int id;
			cin >> id;
			job.push_front(id);		
		}
		
		else if (thaotac == "PUSH_BACK"){
			int id;
			cin >> id;
			job.push_back(id);
		}
		
		else if(thaotac == "POP_FRONT"){
			if(job.empty()){
				cout << "-1" <<endl;
			}
			else{
				cout << job.front() << endl;
				job.pop_front();
			}
		}
		
		else if(thaotac == "POP_BACK"){
			if(job.empty()){
				cout << "-1" <<endl;
			}
			else{
				cout << job.back() <<endl;
				job.pop_back();	
			}
		}
		else if(thaotac == "GET_FRONT"){	
			if(job.empty()){
				cout << "-1" <<endl;
			}
			else{
				cout <<job.front() <<endl;
			}	
		}
		else if(thaotac == "GET_BACK"){
			if(job.empty()){
				cout << "-1" <<endl;
			}
			else{
				cout << job.back() <<endl;
			}	

		}
		
	}
	return 0;
}
