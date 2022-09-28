#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		long sum=0,temp=0;
		for(int i=0;i<10000;i++){
			if(sum+i+1<n){
				sum+=i+1;
				temp=i;
			}
		}
		long size=temp+3;
		long posi=n-sum;
		cout<<"TERM "<<n<<" IS ";
		if(size%2==0){//up right to down left
			cout<<size-posi<<"/"<<posi<<endl;
		}
		else{//down left to up right
			cout<<posi<<"/"<<size-posi<<endl;
		}
	}
}
