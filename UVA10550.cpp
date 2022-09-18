#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	while(!(a==0&&b==0&&c==0&&d==0)){
		int click=0;
		click+=80;
		if(a<b){
			click+=40-(b-a);
		}
		else if(a>b){
			click+=a-b;
		}
		click+=40;
		if(b>c){
			click+=40-b;
			click+=c;
		}
		else if(b<c){
			click+=c-b;
		}
		if(c<d){
			click+=40-(d-c);
		}
		else if(c>d){
			click+=c-d;
		}
		cout<<9*click<<endl;
		cin>>a>>b>>c>>d;
	}
}
