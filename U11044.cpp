#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int n,m,divn,divm;
		cin>>n>>m;
		n-=2;
		m-=2;
		if(n%3==0)divn=n/3;
		else divn=n/3+1;
		if(m%3==0)divm=m/3;
		else divm=m/3+1;
		cout<<divn*divm<<endl;
	}
}
