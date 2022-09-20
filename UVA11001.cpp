#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double vt,v0;
	cin>>vt>>v0 ;
	while(!(vt==0&&v0==0)){
		double maxarr[(int)vt],max=0;
		int cnt=0,ans;
		for(int i=1;i<=(int)vt;i++){
				double len=vt/i,total;
				if(len>v0){
					total=0.3*sqrt(len-v0);
					total*=(double)i;
					maxarr[i]=total;
				}
				else{
					maxarr[i]=0;
				}
		}
		for(int i=0;i<=(int)vt;i++){
			if(max<maxarr[i]){
				max=maxarr[i];
				ans=i;
			}
		}
		for(int i=0;i<=(int)vt;i++){
			if(max==maxarr[i])cnt++;
		}
		if(cnt==1)cout<<ans<<endl;
		else cout<<0<<endl;
		cin>>vt>>v0;
	}
}
