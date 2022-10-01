#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,b1=0,b2=0,temp,temp1;
		cin>>n;
		temp=n;
		while(temp!=0){
			if(temp%2!=0)b1++;
			temp/=2;
		}
		temp=n;
		while(temp!=0){
			temp1=temp%10;
			temp/=10;
			while(temp1!=0){
				if(temp1%2!=0)b2++;
				temp1/=2;
			}
		}
		cout<<b1<<" "<<b2<<endl;
	}
}
