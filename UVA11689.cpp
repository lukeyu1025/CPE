#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int e,f,c,ans=0;
		cin>>e>>f>>c;
		int total=e+f;
		while(total>=c){
			total-=c;
			total+=1;
			ans++;
		}
		cout<<ans<<endl;
	}
}
