#include <iostream>

using namespace std;

long long dp[91];

long long simillarFibbo(int num){
	if(num<=0) return 0;
	if(num==1) return dp[1]=1;
	if(dp[num]>0) return dp[num];
	else return dp[num] = simillarFibbo(num-1)+simillarFibbo(num-2);
}

int main(void){
	int num;
	cin>>num;
	
	simillarFibbo(num);
	cout<<dp[num];
}
