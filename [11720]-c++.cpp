#include<iostream>

using namespace std;

int main(void){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count=0;

	for(int i=0; i<s.length(); i++){
		count+=s.at(i);
		count=count-48;
	}
	cout<<count;
}
