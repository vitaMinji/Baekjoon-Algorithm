#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int num,temp;
	cin>>num;
	
	int array[num];
	for(int i=0; i<num ;i++){
		cin>>temp;
		array[i]=temp;
	}
	sort(array,array+num);
	
	cout<<array[0]<<" "<<array[num-1];
	
}
