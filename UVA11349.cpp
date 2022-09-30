#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	string temp;
	for(int i=0;i<t;i++){
		cout<<"Test #"<<i+1<<": ";
		string str;
		getline(cin,str);
		getline(cin,str);
		int n;
		n=str[4]-48;
		int arr[n][n];
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				arr[j][k]=0;
				cin>>arr[j][k];
			}
		}
		bool flag=true;
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(arr[j][k]<0)flag=false;
				if(arr[j][k]!=arr[n-1-j][n-1-k])flag=false;
			}
		}
		if(flag==true)cout<<"Symmetric."<<endl;
		else cout<<"Non-symmetric."<<endl;
	}
}
