#include<iostream>
#include<string>
using namespace std;

int main(void){
	string s;
	cin>>s;
	int count=0;
	int base=10;
	int size = s.length();
	while(1){
		if(size<10&&size>0){
			base=size;
		}
		
		for(int i=0; i<base; i++){
				cout<<s.at(i+10*count);	
		}
		
		count++;
		cout<<"\n";
		
		size=size-10;
		
		if(size<=0){
			break;
		}
		
	}
}
