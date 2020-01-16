#include<iostream>

using namespace std;
//문장 하나를 다 받아야 한다는걸
//망각하지 말자! 

int main(void){
	string s;
	getline(cin,s);
	int count = 0;
	bool b = false;
	
	for(int i=0; i<s.length(); i++){
		if(s[i]==' '&&b==true){
			b=false;
		}else if(s[i]!=' '&&b==false){
			b=true;
			count++;
		}
	}
	 
	cout<<count;
}
