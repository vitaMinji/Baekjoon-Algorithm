#include <iostream>
#include <algorithm>

using namespace std;
int main(void){
	int c;
	bool check = true;
	cin>>c;
	
	if(c==1){
		cout<<"�Ǻ����, �ߴ������ ã���ʴϴ�";
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
				cout<<"���� �� ���� �ʾ��� �� ����";
				return 0;
			}
		}
		
		
			cout<<"�Ǻ����, �ߴ������ ã���ʴϴ�";
			return 0;
		
	}
	
}
