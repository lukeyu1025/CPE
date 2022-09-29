#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		bool flag1=true,flag2=true;
		for(int i=2;i<n;i++){
			if(n%i==0)flag1=false;
		}
		string temp=to_string(n);
		int emirp=0;
		for(int i=0;i<temp.length();i++){
			emirp+=(int)((temp[i]-48)*pow(10,i)*1.000001);
		}
		if(n==emirp)flag2=false;
		for(int i=2;i<emirp;i++){
			if(emirp%i==0){
				flag2=false;
			}
		}
		if(flag1&&flag2)cout<<n<<" is emirp."<<endl;
		else if(!flag1)cout<<n<<" is not prime."<<endl;
		else if(!flag2)cout<<n<<" is prime."<<endl;
	}
}
