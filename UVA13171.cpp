#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	for(int i=1;i<=num;i++){
		int M,Y,C;
		cin>>M>>Y>>C;
		string str;
		cin>>str;
		for(int q=0;q<str.length();q++){
			if(str[q]=='M')M--;
			if(str[q]=='Y')Y--;
			if(str[q]=='C')C--;
			if(str[q]=='R'){M--;Y--;}
			if(str[q]=='G'){Y--;C--;}
			if(str[q]=='V'){M--;C--;}
			if(str[q]=='B'){M--;Y--;C--;}
		}
		if(M>=0&&C>=0&&Y>=0){
			cout<<"YES "<<M<<" "<<Y<<" "<<C<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}	
	}
}
