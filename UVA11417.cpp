#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n!=0){
		int g=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				int gcd=1;
				for(int k=2;k<=j;k++){
					if(i%k==0&&j%k==0){
						gcd=k;
					}
				}
				g+=gcd;
			}
		}
		cout<<g<<endl;
		cin>>n;
	}
}
