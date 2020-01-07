#include <iostream>

using namespace std;
int result,count;
int array[101];

void fib(int num){
	
	if(count==0){
		array[count]=0;
	}else if(count ==1||count==2){
		array[count]=1;
	}else{
		array[count]=array[count-1]+array[count-2];
	}
	count++;
	if(count!=num+1) fib(num);
}
int main(void){
	int num;

	cin>>num;
	fib(num);
	cout<<array[num];
}
