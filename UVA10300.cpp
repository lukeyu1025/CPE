#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>m;
	int total=0;
		for(int j=0;j<m;j++){
			cin>>a>>b>>c;
			total+=a*c;
		}
		cout<<total<<endl;
	}
}
