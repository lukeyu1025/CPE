#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		bool flag=false;
		int num[n]={0},dif[n-1]={0};//dif[0] is when dif=1,dif[1] is when dif=2
		for(int i=0;i<n;i++){
			cin>>num[i];
		}
		//cout<<n<<" "<<num[0]<<endl;
		for(int i=1;i<n;i++){
			int temp=abs(num[i]-num[i-1]);
			//cout<<num[i-1]<<" "<<num[i]<<" "<<temp<<" "<<dif[temp-1]<<endl;
			if(abs(num[i]-num[i-1])>n){flag=true;}
			else{
				if(dif[temp-1]==99){flag=true;}
				else{
					dif[temp-1]=99;
				}
			}
		}
		for(int i=0;i<=n-2;i++){
			if(dif[i]!=99){flag=true;}
		}
		if(flag==false){
			cout<<"Jolly"<<endl;
		}
		else{
			cout<<"Not jolly"<<endl;
		}
	}
}
