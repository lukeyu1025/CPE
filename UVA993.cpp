#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
		int N,temp,arr[100],size=0;
		cin>>N;
		temp=N;
		if(N==0){cout<<"0";}
		else{
			for(int q=9;q>=2;q--){
				while(N%q==0){
					N/=q;
					arr[size]=q;
					size++;
				}
			}
			if(N!=1){cout<<"-1";}
			else if(N==temp){cout<<"1";}
			else{
				for(int q=size-1;q>=0;q--){
					cout<<arr[q];
				}
			}
		}
		cout<<endl;
	}
}
