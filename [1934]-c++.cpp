#include<iostream>

using namespace std;
int a;
//�ּҰ������ �ּҰ����x�ִ����� == �� �� �� 
void gcd(int first, int second){
	if(second!=0){
		int r = first%second;
		first = second;
		second = r;
		gcd(first,second);
	}else a = first;	
}

int main(void){
	int tc,first,second;
	cin>>tc;
	
	for(int i=0; i<tc; i++){
		cin>>first>>second;
		
		if(first<second){
			int temp = first;
			first=second;
			second = temp;
		}
		gcd(first,second);
		cout<<first*second/a<<"\n";
	} 
}
