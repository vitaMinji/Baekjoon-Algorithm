#include <iostream>
#include <queue>
#include <vector>
 
using namespace std;
//조세퍼스 문제
//큐를 쓰자 

int main(void){
	int peopleNum, wantNum;
	cin>>peopleNum>>wantNum;
	queue<int> qu;
	vector<int> ve;
	int temp = 1;
	for(int i=1; i<=peopleNum; i++){
		qu.push(i);
	}
	
	while(!qu.empty()){
		if(temp == wantNum){
			ve.push_back(qu.front());
			qu.pop();
			temp = 1;		
		}else{
			int temp2 = qu.front();
			qu.pop();
			qu.push(temp2);
			temp++;
		}
	}
	
	cout<<"<";
	for(int i=0; i<ve.size()-1; i++){
		cout<<ve[i]<<", ";
	}
	cout<<ve[peopleNum-1]<<">";
}
