#include <iostream>
using namespace std;
int main(){
	int grp;
	cin>>grp;
	while(grp!=0){
		string str;
		cin>>str;
		int len=str.length();
		int size=len/grp;
		for(int i=0;i<grp;i++){
			for(int q=size-1;q>=0;q--){
				int position=i*size+q;
				cout<<str[position];
			}
		}
		cout<<endl;
		cin>>grp;
	}
}
