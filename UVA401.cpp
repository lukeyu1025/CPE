#include <iostream>
using namespace std;
bool mir(char c1,char c2){
	string str1="AEHIJLMOSTUVWXYZ12358";
	string str2="A3HILJMO2TUVWXY51SEZ8";
	int i=0;
	while(c1!=str1[i]){
		i++;
	}
	if(c2==str2[i])return true;
	else return false;
}
int main(){
	string str="";
	while(cin>>str){
		cout<<str<<" -- ";
		int len=str.length();
		bool palin=true,mirror=true;
		if(len%2==0){
			for(int i=0;i<len/2;i++){
				if(str[i]!=str[len-1-i]) palin=false;
				if(!mir(str[i],str[len-1-i])) mirror=false;
			}
		}
		else{
			for(int i=0;i<(len+1)/2-1;i++){
				if(str[i]!=str[len-1-i])palin=false;
				if(!mir(str[i],str[len-1-i]))mirror=false;
			}
			if(!(str[(len+1)/2-1]=='A'||str[(len+1)/2-1]=='E'||str[(len+1)/2-1]=='H'||str[(len+1)/2-1]=='I'||str[(len+1)/2-1]=='J'||str[(len+1)/2-1]=='L'||str[(len+1)/2-1]=='M'||str[(len+1)/2-1]=='O'||str[(len+1)/2-1]=='S'||str[(len+1)/2-1]=='T'||str[(len+1)/2-1]=='U'||str[(len+1)/2-1]=='V'||str[(len+1)/2-1]=='W'||str[(len+1)/2-1]=='X'||str[(len+1)/2-1]=='Y'||str[(len+1)/2-1]=='Z'||str[(len+1)/2-1]=='1'||str[(len+1)/2-1]=='2'||str[(len+1)/2-1]=='3'||str[(len+1)/2-1]=='5'||str[(len+1)/2-1]=='8'))mirror=false;	
		}
		if(palin && mirror)cout<<"is a mirrored palindrome."<<endl<<endl;
		else if(palin && !mirror)cout<<"is a regular palindrome."<<endl<<endl;
		else if(!palin && mirror)cout<<"is a mirrored string."<<endl<<endl;
		else cout<<"is not a palindrome."<<endl<<endl;
	}
}
