#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int time[n];
		string str[n];
		for(int j=0;j<n;j++){
			cin>>str[j]>>time[j];
		}
		int d;
		string subject;
		cin>>d>>subject;
		int check=0;//0 not 1 yes 2 late
		for(int j=0;j<n;j++){
			if(str[j]==subject){
				if(d>=time[j])check=1;
				else if(d+5>=time[j])check=2;
			}
		}
		if(check==0){
			cout<<"Case "<<i+1<<": Do your own homework!"<<endl;
		}
		else if(check==1){
			cout<<"Case "<<i+1<<": Yesss"<<endl;
		}
		else if(check==2){
			cout<<"Case "<<i+1<<": Late"<<endl;
		}
	}
}
