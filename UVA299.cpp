#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int l,cnt=0;
		cin>>l;
		int arr[l];
		for(int j=0;j<l;j++){
			cin>>arr[j];
		}
		for(int j=0;j<l-1;j++){
			for(int k=j+1;k<l;k++){
				if(arr[j]>arr[k]){
					int temp=arr[j];
					arr[j]=arr[k];
					arr[k]=temp;
					cnt++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;
	}
}
