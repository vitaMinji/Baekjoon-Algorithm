#include <iostream>
#include <stack>
#include <fstream>
//������ �������� ���� ���� �����
//������ ����ϴ� ��

using namespace std;

int main(void){
	int tc;
	cin>>tc;
	string s;
	for(int z=0; z<tc+1; z++){
		getline(cin,s);
		stack<char> st;
		for(int i=0; i<s.length(); i++){
			if(s.at(i)-32==0){//�ܾ ������ �� 
				int temp = st.size();
				for(int j = 0; j<temp; j++){
					cout<<st.top();
					st.pop(); 
				}
				cout<<" ";
			} 
			else if(i==s.length()-1){
				st.push(s.at(i));
				int temp = st.size();
				for(int j=0; j<temp; j++){
					cout<<st.top();
					st.pop();
				}
				cout<<"\n"; 
			}
			else{
				st.push(s.at(i));
			}
		}
	}	
}

//getline(cin, ((string �̸�)))
//�ƽ�Ű�ڵ� ¯ 

