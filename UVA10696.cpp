#include <iostream>
using namespace std;
int f91(int n){
	if(n<=100){
		f91(f91(n+11));
	}
	else{
		return n-10;
	}
}
int main(){
	int n;
	cin>>n;
	while(n!=0){
		int temp;
		cout<<"f91("<<n<<") = ";
		temp=f91(n);
		cout<<temp<<endl;
		cin>>n;
	}
}
