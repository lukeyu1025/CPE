#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int s,d;
		cin>>s>>d;
		int a=(s+d)/2;
		int b=s-a;
		if((a-b)==d&&b>0){
			cout<<a<<" "<<b<<endl;
		}
		else{
			cout<<"impossible"<<endl;
		}
	}
}
