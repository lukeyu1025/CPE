#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int arr[n],max=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]>max)max=arr[i];
		}
		int ans[max+1],min=100000,minposi,minarr=0,mintotal=0;
		for(int i=0;i<=max;i++){
			ans[i]=0;
			for(int j=0;j<n;j++){
				ans[i]+=abs(arr[j]-i);
			}
			if(ans[i]<min){
				min=ans[i];
				minposi=i;
			}
		}
		for(int i=0;i<n;i++){
			int temp=0;
			for(int j=0;j<n;j++){
				temp+=abs(arr[j]-arr[i]);
			}
			if(temp==min)minarr++;
		}
		for(int i=0;i<=max;i++){
			if(ans[i]==min)mintotal++;
		}
		cout<<minposi<<" "<<minarr<<" "<<mintotal<<endl;
	}
}
