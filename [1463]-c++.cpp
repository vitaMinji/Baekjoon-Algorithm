#include <iostream>

using namespace std;

int array[1000001];

int temp;

//�ٺ�!! ���ǹ����ε� �޸������̼��� ������� �ʾҴ�! 
int test(int num){
	if(num==1) return array[1]=0;
	if(array[num]>0) return array[num];
	array[num] = test(num-1)+1;
	if(num%2 == 0){
		temp = test(num/2)+1;
		if(array[num]>temp) array[num] = temp;		
	}
	if(num%3 == 0){
		temp = test(num/3)+1;
		if(array[num]>temp) array[num] = temp;
	}
	return array[num];	
} 

int main(void){
	int num;
	cin>>num;
	test(num); 
	cout<<array[num];
}
