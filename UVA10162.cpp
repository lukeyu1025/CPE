#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long num;
	cin>>num;
	while(num!=0){
		int ans=0;
		for(int i=1;i<=num;i++){
		int ten=i%10,temp=i;
		if(ten==1)ans+=1;
		if(ten==2){
			temp%=4;
			if(temp==0)ans+=16;
			else if(temp==1)ans+=2;
			else if(temp==2)ans+=4;
			else if(temp==3)ans+=8;
		}
		else if(ten==3){
			temp%=4;
			if(temp==0)ans+=1;
			else if(temp==1)ans+=3;
			else if(temp==2)ans+=9;
			else if(temp==3)ans+=7;
		}
		else if(ten==4){
			temp%=2;
			if(temp==0)ans+=6;
			else if(temp==1)ans+=4;
		}
		else if(ten==5)ans+=5;
		else if(ten==6)ans+=6;
		else if(ten==7){
			temp%=4;
			if(temp==0)ans+=1;
			else if(temp==1)ans+=7;
			else if(temp==2)ans+=9;
			else if(temp==3)ans+=3;
		}
		else if(ten==8){
			temp%=4;
			if(temp==0)ans+=6;
			else if(temp==1)ans+=8;
			else if(temp==2)ans+=4;
			else if(temp==3)ans+=2;
		}
		else if(ten==9){
			temp%=2;
			if(temp==0)ans+=1;
			else if(temp==1)ans+=9;
		}
		ans%=10;
		}
		cout<<ans<<endl;
		cin>>num;
	}
}
