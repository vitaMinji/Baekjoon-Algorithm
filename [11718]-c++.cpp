#include<iostream>

using namespace std;

int main(void){
	string s;
	
	while(1){
		getline(cin, s);
		cout<<s;
		if(s==""){
			break;
		}
	cout<<"\n";
	}
}
