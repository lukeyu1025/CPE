#include <iostream>
#include <vector>
using namespace std;
int main(){
	int N,C;
	int arr[1000];
	for(int i=0;i<1000;i++){arr[i]=i+1;}
	for(int i=1;i<1000;i++){
		if(arr[i]!=0){
		int times=2;
			while(arr[i]*times<=1000){
				arr[arr[i]*times-1]=0;
				times++;
			}
		}
	}
	while(cin>>N>>C){
		if(1<=C<=N<=1000){
			cout<<N<<" "<<C<<":";
			int ans[N],temp=1,count=0,start,end;
			while(temp<=N){
				if(arr[temp-1]!=0){
					ans[count]=arr[temp-1];
					count++;
				}
				temp++;
			}
			if(count%2==0){
				start=(count-(2*C))/2;
			}
			else{
				start=(count-((2*C)-1))/2;
			}
			end=count-start;
			if(start<0){start=0;end=count;}
			for(int i=start;i<=end-1;i++){
				cout<<" "<<ans[i];
			}
			
		}
		cout<<endl;
		cout<<endl;
	}
}
