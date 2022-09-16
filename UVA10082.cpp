#include <iostream>
using namespace std;
int main(){
	string input="";
	while(getline(cin,input)){
	string str1="1234567890-=WSXEDCRFVTGBYHNUJMIKOLP;,./[]'\\";
	string str2="`1234567890-QAZWSXEDCRFVTGBYHNUJIKOLM,.P[;]";
	for(int i=0;i<input.length();i++){
		if(input[i]==' ')continue;
		for(int j=0;j<str1.length();j++){
			if(input[i]==str1[j]){
				input[i]=str2[j];
			}
		}
	}
	cout<<input<<endl;
	}
}
