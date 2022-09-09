#include <iostream>
using namespace std;
int main(){
	int k,n,m;
	cin>>k;
	while(k!=0){
		cin>>n>>m;
		for(int i=0;i<k;i++){
			 int x,y;
			 cin>>x>>y;
			 if(x==n||y==m){
			 	cout<<"divisa"<<endl;
			 }
			 else if(x>n&&y>m){
			  	cout<<"NE"<<endl;
			 }
			 else if(x<n&&y>m){
			  	cout<<"NO"<<endl;
			 }
			 else if(x>n&&y<m){
			  	cout<<"SE"<<endl;
			 }
			 else if(x<n&&y<m){
			  	cout<<"SO"<<endl;
			 }
		}
		cin>>k;
	}
}
