#include <iostream>
#include <cmath>
using namespace std;
int main(){
string str="";
	cin>>str;
	while(str!="0"){
		int n=0;
		if(str.length()==1) n=str[0]-48;
		else n=(int)str[str.length()-1]-48+10*(int)(str[str.length()-2]-48);
		n%=100;
		int temp=n/20;
		int ans=temp*4;
		n%=20;
		if(n==1)ans+=1;
		else if(n==2)ans+=5;
		else if(n==3)ans+=2;
		else if(n==4)ans+=8;
		else if(n==5)ans+=3;
		else if(n==6)ans+=9;
		else if(n==7)ans+=2;
		else if(n==8)ans+=8;
		else if(n==9)ans+=7;
		else if(n==10)ans+=7;
		else if(n==11)ans+=8;
		else if(n==12)ans+=4;
		else if(n==13)ans+=7;
		else if(n==14)ans+=3;
		else if(n==15)ans+=8;
		else if(n==16)ans+=4;
		else if(n==17)ans+=1;
		else if(n==18)ans+=5;
		else if(n==19)ans+=4;
		ans%=10;
		cout<<ans<<endl;
		cin>>str;
	}
}
