#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,posi=0;
		cin>>n;
		int as[n];
		for(int j=0;j<n;j++)as[j]=0;
		string temp;
		getline(cin,temp);
		for(int j=0;j<n;j++){
			string str;
			getline(cin,str);
			if(str=="LEFT"){
				as[j]=-1;
				posi--;
			}
			else if(str=="RIGHT"){
				as[j]=1;
				posi++;
			}
			else{
				if(str.length()==9){
					as[j]=as[str[8]-48-1];
				}
				else if(str.length()==10){
					int num=10*(str[8]-48)+str[9]-48;
					as[j]=as[num-1];
				}
				else if(str.length()==11){
					int num=100*(str[8]-48)+10*(str[9]-48)+str[10]-48;
					as[j]=as[num-1];
				}

				if(as[j]>0)posi++;
				else if(as[j]<0)posi--;
			}
		}
		cout<<posi<<endl;
	}
}
