#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int s;
	cin>>s;
	for(int i=0;i<s;i++){
		int n,I;
		float p,notp,up=1,down=0,ans;
		cin>>n>>p>>I;
		notp=1-p;
		if(p==0)ans=0;
		else{
			for(int j=0;j<n;j++){
				if(j<I-1)up*=notp;
				down+=pow(notp,j);
			}
			ans=up/down;
		}
		printf("%.4f\n",ans);
	}
}
