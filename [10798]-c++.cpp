#include <iostream>
#include <vector>

using namespace std;

string s[5];
int main(void){
	string temp;
	int size=0;
	
	for(int i=0; i<5; i++){
		cin>>temp;
		s[i]=temp;
		if(size<s[i].size()){
			size=s[i].size();
		}	
	}
	
	for(int i=0; i<size; i++){
		for(int j=0;j<5;j++){
			if(s[j].size()>i){
				cout<<s[j].at(i); 
			}
		}
	}
	 

}

