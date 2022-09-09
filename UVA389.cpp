#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
	string str;
	int oldbase,newbase;
	while(cin>>str>>oldbase>>newbase){
		int len=str.length(),mid=0,ans[10],num;
		for(int i=0;i<len;i++){
			int temp=len-1-i;
			if(str[i]>=48&&str[i]<=57){
				num=str[i]-48;
			}
			else{
				num=str[i]-55;
			}
			mid+=num*(round)(pow(oldbase,temp));
		}
		for(int i=0;i<10;i++){
			int temp=10-1-i;
			int tempPow=round(pow(newbase,temp));
			if(mid>=tempPow){
				ans[i]=mid/tempPow;
				mid%=tempPow;
			}
			else{
				ans[i]=0;
			}
		}
		for(int i=3;i<=9;i++){
				if(ans[i]>=10){
					if(ans[i]==10){cout<<'A';}
					if(ans[i]==11){cout<<'B';}
					if(ans[i]==12){cout<<'C';}
					if(ans[i]==13){cout<<'D';}
					if(ans[i]==14){cout<<'E';}
					if(ans[i]==15){cout<<'F';}
				}
				else{
				cout<<ans[i];
				}
		}
		cout<<endl;
	}		
}
