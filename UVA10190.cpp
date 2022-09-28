#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		int size=0,arr[100],temp=a;
		bool flag=true;
		if(b==1||b>a){
			flag=false;
		}
		else{
			while(a>=1){
				if(a>b&&a%b!=0)flag=false;
				arr[size]=a/b;
				size++;
				a/=b;
			}
		}
		if(flag){
			cout<<temp<<" ";
			for(int i=0;i<size-2;i++){
				cout<<arr[i]<<" ";
			}
			cout<<arr[size-2];
			cout<<endl;
		}
		else{
			cout<<"Boring!"<<endl;
		}
	}
}
