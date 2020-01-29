#include <iostream>

using namespace std;

int test(int num, int array[]){
	
	if(num==0||num==1) return array[num] = 1;
	else if(array[num]!=0) return array[num];
	else{
		if(num-1>=0){
			array[num]+=test(num-1,array);
		}
		if(num-2>=0){
			array[num]+=test(num-2,array);
		}
		if(num-3>=0){
			array[num]+=test(num-3,array);
		}	
	} 
	return array[num]; 
}

int main(void){
	int tc,temp;
	cin>>tc;
	
	for(int i=0; i<tc; i++){
		cin>>temp;
		int array[12] = {};

		test(temp,array);
		cout<<array[temp]<<"\n";
	}
	
}
