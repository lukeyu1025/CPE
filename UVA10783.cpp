#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int a,b,sum=0;
		cin>>a>>b;
		for(int j=a;j<=b;j++){
			if(j%2!=0){
				sum+=j;
			}
		}
		cout<<"Case "<<i+1<<": "<<sum<<endl;
	}
}
