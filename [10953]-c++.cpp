#include<iostream>

using namespace std;

int main(void){
	int tc,a,b;
	char s;
	scanf("%d",&tc);
	
	for(int i=0; i<tc; i++){
		scanf("%d %c %d" ,&a,&s,&b);
		printf("%d",a+b);
		cout<<"\n";
	}
	
}
