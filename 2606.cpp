#include <iostream>
#include <vector>

using namespace std;
int result = 0;

int c[101];

//2606 바이러스
void dfs(int start, vector<int> ve[]){

	c[start] = 1;
	for(int i=0; i<ve[start].size(); i++){
		if(c[ve[start][i]]!=1){
			dfs(ve[start][i],ve);
		}
	}
	result++;
}

  
int main(void){
	int num1,num2,v1,v2;
	cin>>num1>>num2;
	vector<int> ve[num1+1];
	for(int i=0; i<num2; i++){
		cin>>v1>>v2;
		ve[v1].push_back(v2);
		ve[v2].push_back(v1);
	}
	dfs(1,ve);
	cout<<result-1;
}
