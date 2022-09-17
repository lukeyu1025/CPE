#include <iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int x=0;
		while(x<=1000){
			int temp=arr[0];
			bool flag=false;
			for(int i=0;i<n-1;i++){
				arr[i]-=arr[i+1];
				if(arr[i]<0){arr[i]*=-1;}
				if(arr[i]!=0){flag=true;}
			}
		
			arr[n-1]-=temp;
			if(arr[n-1]<0){arr[n-1]*=-1;}
			if(arr[n-1]!=0){flag=true;}
			x++;
			if(flag==false)x=2000;
			//cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<endl;
		}
		if(x==2000){cout<<"ZERO"<<endl;}
		else{cout<<"LOOP"<<endl;}                                                                                                               
	}
}
