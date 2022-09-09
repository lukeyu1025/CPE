#include <iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int num;
		cin>>num;
		int arr[num];
		int temp=0;
		for(int i=0;i<num;i++){
			cin>>arr[i];
		}
		for(int i=1;i<num;i++){
			for(int q=0;q<i;q++){
				if(arr[q]<=arr[i]){
					temp++;
				}
			}
		}
		cout<<temp<<endl;
	}
}
