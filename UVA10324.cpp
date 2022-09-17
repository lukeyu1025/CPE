#include <iostream>
using namespace std;
int main(){
	string str;
	int cases=1;
	while(cin>>str){
		cout<<"Case "<<cases<<":"<<endl;
		cases++;
		int num;
		cin>>num;
		for(int i=0;i<num;i++){
			int a,b;
			bool flag=true;
			cin>>a>>b;
			if(a>b){
				int temp=a;
				a=b;
				b=temp;
			}
			for(int i=a+1;i<=b;i++){
				if(str[a]!=str[i])flag=false;
			}
			if(flag==true)cout<<"Yes"<<endl;
			if(flag==false)cout<<"No"<<endl;
		}
	}
}
