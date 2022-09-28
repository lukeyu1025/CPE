#include <iostream>
using namespace std;
int main(){
	string str;
	cin>>str;
	while(str!="0"){
		int odd=0,even=0;
		for(int i=0;i<str.length();i++){
			if(i%2==0)even+=str[i]-48;
			else odd+=str[i]-48;
		}
		if((odd-even)%11==0)cout<<str<<" is a multiple of 11."<<endl;
		else cout<<str<<" is not a multiple of 11."<<endl;
		cin>>str;
	}
}
