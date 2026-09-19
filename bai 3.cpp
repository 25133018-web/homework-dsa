#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int K, Q;
	cin >> K >> Q;
	int count = 0, rear = 0, front = 0;
	vector <int> slots(K);
	while(Q--){
		string thaotac;
		cin >> thaotac;
		if (thaotac== "RECORD"){
			int x;
			cin >> x;
			if(count < K){
				slots[rear] = x;
				rear = (rear+1)%K;				
				count ++;
			}
			else{
				slots[front] = x;
				front = (front +1) %K;
				rear = front;
			}
			
		}
		if (thaotac =="READ"){
			if(count == 0) cout << "EMPTY" <<endl;
			else {
				cout << slots[front] <<endl;
				front = (front +1)%K;
				count --;
			}
		}
		
		if (thaotac == "PEEK_OLDEST"){
			if(count==0) cout << "EMPTY" <<endl;
			else{
				cout << slots[front] <<endl;
			}
		}		
		
		if (thaotac == "SIZE"){
			cout << count << endl;
		}
	}

	return 0;
}
