#include <iostream>

using namespace std;

int main(void){
	int h, m;
	cin>>h>>m;
	if(m-45>=0){
		cout<<h<<" "<<m-45;
	}else if(h-1<0){
		cout<<"23"<<" "<<m+15;
	}else{
		cout<<h-1<<" "<<m+15;
	}
}
