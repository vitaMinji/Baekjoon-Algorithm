#include <iostream>

using namespace std;

int main(void){
	int n,m,k;
	cin>>n>>m>>k;
	
	int kid=n*m;
	if(kid<=k||kid<k){
		cout<<"0";
	}else{
		cout<<kid-k;
	}
}
