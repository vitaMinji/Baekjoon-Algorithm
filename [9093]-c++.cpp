#include <iostream>
#include <stack>
#include <fstream>
//뒤집기 문제에서 가장 좋은 방법은
//스택을 사용하는 것

using namespace std;

int main(void){
	int tc;
	cin>>tc;
	string s;
	for(int z=0; z<tc+1; z++){
		getline(cin,s);
		stack<char> st;
		for(int i=0; i<s.length(); i++){
			if(s.at(i)-32==0){//단어가 끝났을 때 
				int temp = st.size();
				for(int j = 0; j<temp; j++){
					cout<<st.top();
					st.pop(); 
				}
				cout<<" ";
			} 
			else if(i==s.length()-1){
				st.push(s.at(i));
				int temp = st.size();
				for(int j=0; j<temp; j++){
					cout<<st.top();
					st.pop();
				}
				cout<<"\n"; 
			}
			else{
				st.push(s.at(i));
			}
		}
	}	
}

//getline(cin, ((string 이름)))
//아스키코드 짱 

