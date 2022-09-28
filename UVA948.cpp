#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int fib[1000];
	fib[0]=0;
	fib[1]=1;
	fib[2]=1;
	for(int i=3;i<1000;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		cout<<num<<" = ";
		int start=2;
		while(fib[start]<num){
			start++;
		}
		for(int j=start;j>=2;j--){
			if(num>=fib[j]){
				num-=fib[j];
				cout<<1;
			}
			else{
				if(j!=start)cout<<0;
			}
		}
		cout<<" (fib)"<<endl;
	}
}
