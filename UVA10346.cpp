#include <iostream>
using namespace std;
int main(){
	int n,k;
	while(cin>>n>>k){
		int temp=0,cnt=0;
		while(n>0){
			cnt++;
			n--;
			temp++;
			if(temp==k){
				temp=0;
				n++;
			}
		}
		cout<<cnt<<endl;
	}
}
