#include <iostream>

using namespace std;
int result;

int pact(int num){
	if(num==0) return result = 1;
	if(num==1) return result = 1;
	return result = num*pact(num-1);
}

int main(void){
	int num;
	cin>>num;
	pact(num);
	cout<<result;
}
