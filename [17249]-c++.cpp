#include<iostream>
#include<string.h>

using namespace std;

int left, right;

int main(void){
	int left = 0;
	int right = 0;
	string s;
	bool face = false;
	cin>>s;
	for(int i=0; i<s.size(); i++){
		if(face==false&&s.at(i)=='@'){
			left++;
		}
		if(s.at(i)=='('){
			face=true;	
		}
		if(face==true&&s.at(i)=='@'){
			right++;
		}
	}
	
	cout<<left<<" "<<right;

}
