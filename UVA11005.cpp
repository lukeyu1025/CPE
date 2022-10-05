//未完成
#include <iostream>
using namespace std;
int main(){
	int t,cases=1;
	cin>>t;
	for(int i=0;i<t;i++){
		cout<<"Case "<<cases<<":"<<endl;
		cases++;
		int arr[36];
		for(int j=0;j<36;j++){
			cin>>arr[j];
		}
		int n;
		cin>>n;
		for(int j=0;j<n;j++){
			int temp;
			cin>>temp;
			cout<<"Cheapest base(s) for number "<<temp<<": "<<endl;
		}
	}
}
