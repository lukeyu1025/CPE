#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string country[n],name1[n],name2[n];
	int cnt=0,num[2000];
	for(int i=0;i<2000;i++)num[i]=0;
	string arr[2000];
	for(int i=0;i<n;i++){
		cin>>country[i]>>name1[i]>>name2[i];
	}
	for(int i=0;i<n;i++){
		int temp=0;
		bool flag=true;
		while(temp<=cnt){
			if(country[i]==arr[temp]){
				num[temp]++;
				flag=false;
				break;
			}
			else temp++;
		}
		if(flag==true){
			num[cnt]=1;
			arr[cnt]=country[i];
			cnt++;
		}
	}
	for(int i=65;i<=90;i++){
		for(int j=0;j<cnt;j++){
			if((int)arr[j][0]==i)cout<<arr[j]<<" "<<num[j]<<endl;
		}
	}
}
