#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x,y;
	while(cin>>x>>y){
		int xarr[32]={0},yarr[32]={0},ansarr[32]={0};
		int temp1=0,temp2=0;
		while(x>=(int)pow(2,temp1)){
			temp1++;
		}
		temp1--;
		while(y>=(int)pow(2,temp2)){
			temp2++;
		}
		temp2--;
		for(int i=temp1;i>=0;i--){
			if(x>=(int)pow(2,i)){
				x-=(int)pow(2,i);
				xarr[i]=1;
			}
		}
		for(int i=temp2;i>=0;i--){
			if(y>=(int)pow(2,i)){
				y-=(int)pow(2,i);
				yarr[i]=1;
			}
		}
		for(int i=31;i>=0;i--){
			if(xarr[i]!=yarr[i])ansarr[i]=1;
		}
		int ans=0;
		for(int i=0;i<=31;i++){
			if(ansarr[i]==1)ans+=(int)pow(2,i);
		}
		cout<<ans<<endl;
	}
}
