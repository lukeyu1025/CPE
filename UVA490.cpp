#include <iostream>
using namespace std;
int main(){
	string str;
	char arr[100][100],len[100],maxlen=0;
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			arr[i][j]=' ';
		}
	}
	int num=0;
	while(getline(cin,str)){
		len[num]=str.length()-1;
		if(len[num]>maxlen)maxlen=len[num];
		for(int i=0;i<str.length();i++)arr[i][num]=str[i];
		num++;
	}
	for(int i=0;i<=maxlen;i++){
		for(int j=num-1;j>=0;j--){
			if(i>len[j]&&j==0){}
			else cout<<arr[i][j];
		}
		cout<<endl;
	}
}
