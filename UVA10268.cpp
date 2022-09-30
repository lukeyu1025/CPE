#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x;
	string str;
	while(cin>>x){
		getline(cin,str);
		getline(cin,str);
		int num[100],cnt=0;
		bool flag=false;//false no neg,true neg
		for(int i=0;i<str.length();i++){
			if(str[i]!=' '){
				if(str[i]=='-'){
					flag=true;
				}
				else{
					if(flag==true){
						num[cnt]=-1*(str[i]-48);
						cnt++;
						flag=false;
					}
					else{
						num[cnt]=str[i]-48;
						cnt++;
					}
				}
			}
		}
		cnt--;
		int ans=0;
		for(int i=0;i<=cnt;i++){
			if((cnt-1-i)>=0){
				ans+=num[i]*(cnt-i)*(int)pow(x,(cnt-1-i));
			}
		}
		cout<<ans<<endl;
	}
}
