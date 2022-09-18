#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main(){
	string str="";
	bool flag=true;//true=dec,false=hex
	cin>>str;
	while(str!="-1"){
		int len=str.length()-1;
		if(str[0]=='0'&&str[1]=='x'){
			long total=0;
			int hex=1;
			for(int i=len;i>=2;i--){
				int num=str[i]-48;
				if(num!=0)total+=num*hex;
				hex*=16;
			}
			cout<<total<<endl;
		}
		else{
			int hexa=stoi(str),temp=0;
			while(hexa>=(int)pow(16,temp)){
			temp++;
			}
			temp--;
			cout<<"0x";
			while(hexa!=0){
				int hexatmp=hexa;
				int ans=hexa/(int)pow(16,temp);
				if(ans<10)cout<<ans;
				else if(ans==10)cout<<'A';
				else if(ans==11)cout<<'B';
				else if(ans==12)cout<<'C';
				else if(ans==13)cout<<'D';
				else if(ans==14)cout<<'E';
				else if(ans==15)cout<<'F';
				hexa%=(int)pow(16,temp);
				temp--;
			}
			if(temp>=0){
				cout<<0;
				temp--;
			}
			cout<<endl;
		}
		cin>>str;
	}
}
