#include <iostream>
using namespace std;
int main(){
	int n,cases=0;
	cin>>n;
	while(n!=0){
		cases++;
		cout<<"Case "<<cases<<": ";
		int temp=n,ans=0;
		while(temp>0){
			int sum=0;
			for(int i=1;i<=temp;i++){
				if(temp%i==0){
					sum+=i;
				}
			}
			if(sum==n){
				ans=temp;
				temp=-1;
			}
			temp--;
		}
		if(temp==0){
			cout<<-1<<endl;
		}
		else{
			cout<<ans<<endl;	
		}
		cin>>n;
	}
}
