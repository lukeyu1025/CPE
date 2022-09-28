#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n!=0){
		int sum=0,temp=n,size=0,arr[100];
		cout<<"The parity of ";
		while(temp!=0){
			if(temp%2!=0){
				temp-=1;
				sum+=1;
				arr[size]=1;
			}
			else arr[size]=0;
			size++;
			temp/=2;
		}
		for(int i=size-1;i>=0;i--)cout<<arr[i];
		cout<<" is "<<sum<<" (mod 2)."<<endl;
		cin>>n;
	}
}
