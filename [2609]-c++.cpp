#include <iostream>

using namespace std;

int a;

void gcd(int first, int second){
	if(second!=0){
		int r = first%second;
		first = second;
		second = r;
		gcd(first,second);
	}else a = first;	
}
int main(void){
	int first, second;
	cin>>first>>second;
	
	if(first<second){
		int temp = first;
		first=second;
		second = temp;
	}
	gcd(first,second);
	
	int b = first*second/a;
	cout<<a<<"\n"<<b;
}
