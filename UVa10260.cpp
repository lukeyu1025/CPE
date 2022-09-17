#include <iostream>
using namespace std;
int main(){
	string str;
	while(cin>>str){
		int temp=0;
		for(int i=0;i<str.length();i++){
			if(str[i]=='B'||str[i]=='F'||str[i]=='P'||str[i]=='V'){
				if(temp!=1){
					cout<<1;
					temp=1;
				}
			}
			else if(str[i]=='C'||str[i]=='G'||str[i]=='J'||str[i]=='K'||str[i]=='Q'||str[i]=='S'||str[i]=='X'||str[i]=='Z'){
				if(temp!=2){
					cout<<2;
					temp=2;
				}
			}
			else if(str[i]=='D'||str[i]=='T'){
				if(temp!=3){
					cout<<3;
					temp=3;
				}
			}
			else if(str[i]=='L'){
				if(temp!=4){
					cout<<4;
					temp=4;
				}
			}
			else if(str[i]=='M'||str[i]=='N'){
				if(temp!=5){
					cout<<5;
					temp=5;
				}
			}
			else if(str[i]=='R'){
				if(temp!=6){
					cout<<6;
					temp=6;
				}
			}
			else temp=0;
		}
		cout<<endl;
	}
}
