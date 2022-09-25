#include <iostream>
using namespace std;
int main(){
	int n,cases=0;
	while(cin>>n){
		bool flag=true;
		cases++;
		int arr[n],b2[20000]={0},size=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1])flag=false;
		}
		for(int i=0;i<n-1;i++){
			for(int j=i;j<n;j++){
				int plus=arr[i]+arr[j];
				if(b2[plus]==1)flag=false;
				else{
					b2[plus]=1;
				}
			}
		}
		if(flag)cout<<"Case #"<<cases<<": It is a B2-Sequence."<<endl<<endl;
		else cout<<"Case #"<<cases<<": It is not a B2-Sequence."<<endl<<endl;
	}
}
