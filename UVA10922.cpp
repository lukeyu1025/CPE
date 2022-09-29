#include <iostream>
#include <string>
using namespace std;
int d;
bool flag;

int nine(string str){
	int sum=0;
	for(int i=0;i<str.length();i++){
		sum+=str[i]-48;
	}
	if(sum%9==0&&sum!=9){
		flag=true;
		d++;
		nine(to_string(sum));
	}
	else if(sum==9){
		d++;
		return d;
	}
	else{
		return d;
	}
}
int main(){
	string str;
	while(cin>>str){
		flag=false;
		d=0;
		nine(str);
		if(d!=0){
			cout<<str<<" is a multiple of 9 and has 9-degree "<<d<<"."<<endl;
		}
		else{
			cout<<str<<" is not a multiple of 9."<<endl;
		}
	}
}
