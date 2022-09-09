#include <iostream>
using namespace std;
int main(){
	string arr;
	while(cin>>arr){
		int len=arr.length();
		int letter=0,hyp=0;
		for(int i=0;i<len;i++){
			if(arr[i]>=65&&arr[i]<=90)letter++;
			if(arr[i]==45)hyp++;
			if(arr[i]=='A'||arr[i]=='B'||arr[i]=='C')arr[i]='2';
			if(arr[i]=='D'||arr[i]=='E'||arr[i]=='F')arr[i]='3';
			if(arr[i]=='G'||arr[i]=='H'||arr[i]=='I')arr[i]='4';
			if(arr[i]=='J'||arr[i]=='K'||arr[i]=='L')arr[i]='5';
			if(arr[i]=='M'||arr[i]=='N'||arr[i]=='O')arr[i]='6';
			if(arr[i]=='P'||arr[i]=='Q'||arr[i]=='R'||arr[i]=='S')arr[i]='7';
			if(arr[i]=='T'||arr[i]=='U'||arr[i]=='V')arr[i]='8';
			if(arr[i]=='W'||arr[i]=='X'||arr[i]=='Y'||arr[i]=='Z')arr[i]='9';
		}
		cout<<arr<<" "<<letter<<" "<<hyp<<endl;
	}
}
