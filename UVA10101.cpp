#include <iostream>
using namespace std;
int main(){
	string str;
	int cases=1;
	while(cin>>str){
		int len=str.length();
		int arr[20],cnt=0,posi=0;
		for(int i=0;i<20;i++)arr[i]=0;
		for(int i=str.length()-1;i>=0;i--){
			//cout<<posi<<endl;
			if(posi==0){
				arr[cnt]+=str[i]-48;
				posi++;
			}
			else if(posi==1){
				arr[cnt]+=10*(str[i]-48);
				posi++;
				cnt++;
			}
			else if(posi==2){
				arr[cnt]+=str[i]-48;
				cnt++;
				posi++;
			}
			else if(posi==3){
				arr[cnt]+=str[i]-48;
				posi++;
			}
			else if(posi==4){
				arr[cnt]+=10*(str[i]-48);
				posi++;
				cnt++;
			}
			else if(posi==5){
				arr[cnt]+=str[i]-48;
				posi++;
			}
			else if(posi==6){
				arr[cnt]+=10*(str[i]-48);
				posi=0;
				cnt++;
			}
		}
		if(cases<10)cout<<"   "<<cases<<". ";
		else cout<<"  "<<cases<<". ";
		if(cnt!=0){
			bool flag=false;
			for(int i=cnt;i>=0;i--){
				if(arr[i]!=0){
					if(flag==true)cout<<" ";
					if(i==cnt&&arr[cnt]!=0){
						flag=true;
						cout<<arr[cnt];
					}
					else if(i!=cnt){
						flag=true;
						cout<<arr[i];
					}
					if (flag==true){
						if(i==0)cout;
						else if(i==1)cout<<" shata";
						else if(i==2)cout<<" hajar";
						else if(i==3)cout<<" lakh";
						else if(i==4)cout<<" kuti";
						else if(i==5)cout<<" shata";
						else if(i==6)cout<<" hajar";
						else if(i==7)cout<<" lakh";
						else if(i==8)cout<<" kuti";
					}
				}
				else if(i==4)cout<<" kuti";
			}
		}
		else cout<<0;
		cout<<endl;
		cases++;
	}
}
