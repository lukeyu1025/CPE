#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int cnt=0,arr[100]={0};
		string m;
		bool flag=true;
		cin>>m>>cnt;
		for(int j=0;j<cnt;j++){
			cin>>arr[j];
		}
		for(int j=0;j<cnt;j++){
			if(arr[j]==2){
				int num=m[m.length()-1]-48;
				if(num%2!=0)flag=false;
			}
			else if(arr[j]==3){
				int num=0;
				for(int k=0;k<m.length();k++){
					num+=m[k]-48;
				}
				if(num%3!=0)flag=false;
			}
			else if(arr[j]==4){
				int num=m[m.length()-1]-48;
				if(m.length()>1)num+=10*(m[m.length()-2]-48);
				if(num%4!=0)flag=false;
			}
			else if(arr[j]==5){
				int num=m[m.length()-1]-48;
				if(!(num==5||num==0))flag=false;
			}
			else if(arr[j]==6){
				int num=m[m.length()-1]-48;
				if(num%2!=0)flag=false;
				num=0;
				for(int k=0;k<m.length();k++){
					num+=m[k]-48;
				}
				if(num%3!=0)flag=false;
			}
			else if(arr[j]==7){
				int num=0,three=0;
				bool neg=true;
				for(int k=m.length()-1;k>=0;k--){
					if(three==0){
						if(neg){
							num+=m[k]-48;
						}
						else{
							num-=m[k]-48;
						}
						three++;
					}
					if(three==1){
						if(neg){
							num+=10*(m[k]-48);
						}
						else{
							num-=10*(m[k]-48);
						}
						three++;
					}
					if(three==2){
						if(neg){
							num+=100*(m[k]-48);
						}
						else{
							num-=100*(m[k]-48);
						}
						!neg;
						three=0;
					}
				}
				
			}
			else if(arr[j]==8){
				int num=m[m.length()-1]-48;
				if(m.length()>1)num+=10*(m[m.length()-2]-48);
				if(m.length()>2)num+=100*(m[m.length()-3]-48);
				if(num%8!=0)flag==false;
			}
			else if(arr[j]==9){
				int num=0;
				for(int k=0;k<m.length();k++){
					num+=m[k]-48;
				}
				if(num%9!=0)flag=false;
			}
			else if(arr[j]==10){
				int num=m[m.length()-1]-48;
				if(num!=0)flag=false;
			}
			else if(arr[j]==11){
				int even=0,odd=0;
				for(int k=0;k<m.length();k++){
					if((k+1)%2==0){
						even+=m[k]-48;
					}
					else{
						odd+=m[k]-48;
					}
				}
				if(even!=odd)flag=false;
			}
			else if(arr[j]==12){
				int num=0;
				for(int k=0;k<m.length();k++){
					num+=m[k]-48;
				}
				if(num%3!=0)flag=false;
				num=m[m.length()-1]-48;
				if(m.length()>1)num+=10*(m[m.length()-2]-48);
				if(num%4!=0)flag=false;
			}
		}
		for(int j=0;j<m.length();j++)cout<<m[j];
		cout<<" - ";
		if(flag)cout<<"Wonderful."<<endl;
		else cout<<"Simple."<<endl;
	}
}
