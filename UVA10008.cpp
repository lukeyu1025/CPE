#include <iostream>
using namespace std;
int main(){
	int n,arr[26];
	cin>>n;
	for(int i=0;i<26;i++)arr[i]=0;
	string temp;
	getline(cin,temp);
	for(int i=0;i<n;i++){
		string str;//a=97 z=122 A=65 Z=90
		getline(cin,str);
		for(int i=0;i<str.length();i++){
			if(str[i]>=97&&str[i]<=122){
				arr[str[i]-97]++;
			}
			else if(str[i]>=65&&str[i]<=90){
				arr[str[i]-65]++;
			}
		}
	}
	for(int i=25;i>=0;i--){
		int max=0,posi;
		for(int j=25;j>=0;j--){
			if(arr[j]>=max){
				max=arr[j];
				posi=j;
			}
		}
		if(max!=0){
			cout<<(char)(posi+65)<<" "<<max<<endl;
		}
		arr[posi]=0;
	}
	//for(int i=0;i<26;i++)cout<<arr[i]<<endl;
}
