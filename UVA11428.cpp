#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,arr[50],ansi,ansj;
	cin>>n;
	for(int i=0;i<49;i++){
		arr[i]=(int)(pow((i+1),3)*1.00000001);
	}
	while(n!=0){
		bool flag=false;
		for(int i=49;i>0;i--){
			for(int j=i-1;j>=0;j--){
				if((arr[i]-arr[j])==n){
					ansi=i+1;
					ansj=j+1;
					flag=true;
				}
			}
		}
		if(flag==false)cout<<"No solution"<<endl;
		else{
			cout<<ansi<<" "<<ansj<<endl;
		}
		cin>>n;
	}
}
