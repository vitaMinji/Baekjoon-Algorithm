#include <iostream>
#include <stack>

using namespace std;

int main(void){
	int tc;
	cin>>tc;
	string s;
	for(int i=0; i<tc; i++){
		bool b = true;
		cin>>s;
		stack<char> st;
		for(int j=0; j<s.length(); j++){
			if(s.at(j)-40==0){
				st.push(1);
			}else{
				if(st.size()==0){
					b= false;
					break;
				}
				st.pop();
			}
		}
		if(st.size()!=0||b==false) cout<<"NO";
		else cout<<"YES";
		cout<<"\n";	
	}
}
