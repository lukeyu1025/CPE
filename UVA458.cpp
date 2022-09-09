#include <iostream>
using namespace std;
int main(){
	string str="";
	while(getline(cin,str)){
		int len=str.length();
		for(int i=0;i<len;i++){
			str[i]-=7;
			cout<<str[i];
		}
		cout<<endl;
	}
}
