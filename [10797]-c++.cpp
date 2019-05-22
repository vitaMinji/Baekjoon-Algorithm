#include <iostream>

using namespace std;

int main(void){
	int s;
	cin>>s;
	
	int temp;
	int count=0;
	
	for(int i=0; i<5; i++){
		cin>>temp;
		if(s==temp){
			count++;
		}
	}
	
	cout<<count;
}
