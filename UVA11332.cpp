#include <iostream>
#include <string>
using namespace std;
string f(int n){
	string str=to_string(n);
	if(str.length()>1){
		int sum=0;
		for(int i=0;i<str.length();i++){
			sum+=str[i]-48;
		}
		f(sum);
	}
	else{
		cout<<str<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	while(n!=0){
		f(n);
		cin>>n;
	}
}
