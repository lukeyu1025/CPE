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
			int input,temp[35],tmp;
			cin>>input;
			for(int q=0;q<35;q++)temp[q]=0;
			for(int q=2;q<=36;q++){
				tmp=input;
				while(tmp!=0){
					temp[q-2]+=arr[tmp%q];
					tmp/=q;
				}
			}
			int minnum=10000;
			for(int q=0;q<35;q++){
				if(minnum>temp[q])minnum=temp[q];
			}
			cout<<"Cheapest base(s) for number "<<input<<":";
			for(int q=0;q<35;q++){
				if(minnum==temp[q]){
					cout<<" "<<q+2;
				}
			}
			cout<<endl;
		}
		if(i!=t-1)cout<<endl;
	}
}
