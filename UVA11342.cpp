#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,top=0,ans1,ans2,ans3;
		bool flag=true;
		cin>>a;
		while((int)pow(top,2)<a){
			top++;
		}
		top--;
		for(int j=0;j<=top;j++){
			for(int k=0;k<=top;k++){
				for(int q=0;q<=top;q++){
					int ans=(int)pow(j,2)+(int)pow(k,2)+(int)pow(q,2);
					if(ans==a&&flag==true){
						ans1=j;
						ans2=k;
						ans3=q;
						flag=false;
					}
				}
			}
		}
		if(flag==false)cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
		else cout<<-1<<endl;
	}
}
