#include <iostream>
#include <algorithm>

using namespace std;
int main(void){
	int c;
	bool check = true;
	cin>>c;
	
	if(c==1){
		cout<<"권병장님, 중대장님이 찾으십니다";
		return 0;
	}else{
		int sol[c];
		int temp;
		
		for(int i=0; i<c; i++){
			cin>>temp;
			sol[i]=temp;
		}
	
	
		int disSum=0;
		for(int i=1; i<c; i++){
			cin>>temp;
			if(disSum<sol[i-1]+temp){
				disSum=sol[i-1]+temp;
			}
			
			if(disSum<sol[i]){
				cout<<"엄마 나 전역 늦어질 것 같아";
				return 0;
			}
		}
		
		
			cout<<"권병장님, 중대장님이 찾으십니다";
			return 0;
		
	}
	
}
