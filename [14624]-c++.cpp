#include<iostream>

using namespace std;

int main(void){
	int n;
	cin>>n;
	int m =(n/2)+1;
	if(n%2==0){
		cout<<"I LOVE CBNU";
	}else{
		for(int i=0; i<n; i++){
			cout<<"*";
		}//¸Ç Ã¹ÁÙ
		 
		cout<<"\n";
		
		for(int i=0; i<(n/2);i++){
			cout<<" ";
		}
		cout<<"*"<<"\n";
		
		for(int i=0;i<(n/2); i++){
			
			for(int j=0; j<n-m-1; j++){
				cout<<" ";
			}
			cout<<"*";
			
			for(int k=0;k<=i*2;k++){
				cout<<" ";
			}
			cout<<"*";
			
			cout<<"\n";
			m++;
		}
	}
}
