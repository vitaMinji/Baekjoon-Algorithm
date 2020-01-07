#include <iostream>
#include <string>
using namespace std;

int main(void){
	int tc;
	string s;
	cin>>tc;
	for(int i=0; i<tc; i++){
		cin>>s;
		int temp=0;
		int temp2=0;
		for(int j=0; j<s.length(); j++){
			if(s.at(j)-79==0){
				temp2++;
				temp+=temp2;
			}else{
				temp2 = 0;
			}
		}
		cout<<temp<<endl;
	}
}
