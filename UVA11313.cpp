#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b,round=1;
		cin>>a>>b;
		while(a>b){
			a-=b;
			a++;
			round++;
		}
		if(a==b){
			cout<<round<<endl;
		}
		else{
			cout<<"cannot do this"<<endl;
		}
	}
}
