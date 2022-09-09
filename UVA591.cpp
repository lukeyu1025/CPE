#include <iostream>
using namespace std;
int main(){
	int n,set=0;
	cin>>n;
	while(n!=0){
		set++;
		cout<<"Set #"<<set<<endl;
		int arr[n],k=0,total=0,avg;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			total+=arr[i];
		}
		avg=total/n;
		for(int i=0;i<n;i++){
			if(arr[i]>avg){k+=arr[i]-avg;}
		}
		cout<<"The minimum number of moves is "<<k<<"."<<endl<<endl;
		cin>>n;
	}
}
