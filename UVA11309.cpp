#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string time;
		cin>>time;
		int zero=-1;
		bool flag=false;
		for(int i=0;i<=4;i++){
			if(i!=2){
				if(time[i]=='0'&&flag==false){
					zero++;
				}
				else{
					flag=true;
				}
			}
		}
		if(zero==-1){
			int minute1=10*((int)time[3]-48)+(int)time[4]-48;
			int minute2=10*((int)time[1]-48)+(int)time[0]-48;
			if(minute2>=60){
				int ten;
				if(time[1]-48>=6){
					ten=time[0]-47;
					time[1]='0';
					cout<<ten<<time[1]<<time[2]<<time[1]<<ten<<endl;
				}
			}
			else if(minute1>=minute2){
				int min=10*((int)time[0]-48)+(int)time[1]-48+1;
				minute2=0;
				minute2+=min/10;
				minute2+=10*(min%10);
				cout<<min<<time[2]<<minute2<<endl;
			}
			else{
				cout<<time[0]<<time[1]<<time[2]<<minute2<<endl;
			}
		}
		if(zero==0){
			if(time[1]>time[4]){
				cout<<time[0]<<time[1]<<time[2]<<time[3]<<time[1]<<endl;
			}
			else if(time[3]=='5'){
				 cout<<time[0]<<(int)time[1]-47<<time[2]<<0<<(int)time[1]-47<<endl;
			}
			else{
				cout<<time[0]<<time[1]<<time[2]<<(int)time[3]-47<<time[1]<<endl;
			}
		}
		if(zero==1){
			if(time[3]>time[4]){
				cout<<time[0]<<time[1]<<time[2]<<time[3]<<time[3]<<endl;
			}
			else if(time[3]!='5'){
				cout<<time[0]<<time[1]<<time[2]<<(int)time[3]-47<<(int)time[3]-47<<endl;
			}
			else{
				cout<<time[0]<<1<<time[2]<<0<<1<<endl;
			}
		}
		if(zero==2){
			if(time[4]!='9')cout<<time[0]<<time[1]<<time[2]<<time[3]<<time[4]-47<<endl;
			else cout<<time[0]<<time[1]<<time[2]<<1<<1<<endl;
		}
		if(zero==3){
			cout<<"00:01"<<endl;
		}
	}
}
