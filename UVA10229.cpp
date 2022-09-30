#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long n,m;
	while(cin>>n>>m){
		unsigned long long f0=0,f1=1,f2=1,two=(int)pow(2,m),ans=0;
		for(int i=3;i<=n;i++){
			unsigned long long temp=f2;
			f2=f1+f2;
			f1=temp;
		}
		ans=f2%two;
		cout<<ans<<endl;
	}
}
