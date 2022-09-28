#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	int arr[100001];
	for(int i=0;i<=100000;i++)arr[i]=0;
	for(int i=1;i<=350;i++){
		int temp=(int)pow(i,2);
		if(temp<=100000){
			arr[temp]=1;
		}
	}
	cin>>a>>b;
	while(!(a==0&&b==0)){
		int sum=0;
		for(int i=a;i<=b;i++){
			if(arr[i]==1)sum++;
		}
		cout<<sum<<endl;
		cin>>a>>b;
	}
}
