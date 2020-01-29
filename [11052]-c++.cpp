#include <iostream>

using namespace std;

int P[10001];
int dp[10001];

int dpTest(int num){
	if(num<=0) return 0;
	int temp2;
	if(dp[num]>0) return dp[num];
	else{
		for(int i=1; i<=num; i++){
			temp2=P[i]+dpTest(num-i);
			if(temp2>dp[num]){
				cout<<i<<" ";
				dp[num]=temp2;
			}
		}
		return dp[num];
	}
};

int main(void){
	int t,temp;
	cin>>t;
	
	for(int i=1; i<=t; i++){
		cin>>temp;
		P[i]=temp;
	}
	dpTest(t);
	cout<<dp[t];
}
