#include <iostream>
using namespace std;
int main(){
	string a,b;
	while(getline(cin,a)){
		getline(cin,b);
		int let1[26],let2[26];
		for(int i=0;i<26;i++){
			let1[i]=0;
			let2[i]=0;
		}
		for(int i=0;i<a.length();i++){
			let1[a[i]-97]++;
		}
		for(int i=0;i<b.length();i++){
			let2[b[i]-97]++;
		}
		for(int i=0;i<26;i++){
			if(let1[i]!=0&&let2[i]!=0){
				int min;
				if(let1[i]>let2[i])min=let2[i];
				else min=let1[i];
				for(int j=0;j<min;j++)cout<<(char)(i+97);
			}
		}
		cout<<endl;
	}
}
