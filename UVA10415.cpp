#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int arr[10],cnt[10];
		string str;
		cin>>str;
		for(int j=0;j<10;j++){
			arr[j]=0;
			cnt[j]=0;
		}
		for(int j=0;j<str.length();j++){
			int temp[10];
			for(int p=0;p<10;p++)temp[p]=0;
			if(str[j]=='c'){
				for(int p=1;p<=3;p++)temp[p]=1;
				for(int p=6;p<=9;p++)temp[p]=1;
			}
			else if(str[j]=='d'){
				for(int p=1;p<=3;p++)temp[p]=1;
				for(int p=6;p<=8;p++)temp[p]=1;
			}
			else if(str[j]=='e'){
				for(int p=1;p<=3;p++)temp[p]=1;
				for(int p=6;p<=7;p++)temp[p]=1;
			}
			else if(str[j]=='f'){
				for(int p=1;p<=3;p++)temp[p]=1;
				temp[6]=1;
			}
			else if(str[j]=='g'){
				for(int p=1;p<=3;p++)temp[p]=1;
			}
			else if(str[j]=='a'){
				for(int p=1;p<=2;p++)temp[p]=1;
			}
			else if(str[j]=='b')temp[1]=1;
			else if(str[j]=='C')temp[2]=1;
			else if(str[j]=='D'){
				for(int p=0;p<=3;p++)temp[p]=1;
				for(int p=6;p<=8;p++)temp[p]=1;
			}
			else if(str[j]=='E'){
				for(int p=0;p<=3;p++)temp[p]=1;
				for(int p=6;p<=7;p++)temp[p]=1;
			}
			else if(str[j]=='F'){
				for(int p=0;p<=3;p++)temp[p]=1;
				temp[6]=1;
			}
			else if(str[j]=='G'){
				for(int p=0;p<=3;p++)temp[p]=1;
			}
			else if(str[j]=='A'){
				for(int p=0;p<=2;p++)temp[p]=1;
			}
			else if(str[j]=='B'){
				for(int p=0;p<=1;p++)temp[p]=1;
			}
			for(int p=0;p<10;p++){
				if(arr[p]==0&&temp[p]==1)cnt[p]++;
				arr[p]=temp[p];
			}
		}
		for(int p=0;p<9;p++)cout<<cnt[p]<<" ";
		cout<<cnt[9]<<endl;
	}
}
