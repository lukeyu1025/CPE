#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	string temp;
	getline(cin,temp);
	getline(cin,temp);
	for(int i=0;i<t;i++){
		double cnt=0,num[1000],total=0;
		string tree[1000],str;
		while(getline(cin,str)){
			if(str!=""){
				total++;
				bool flag=true;
				for(int j=0;j<cnt;j++){
					if(str==tree[j]){
						num[j]++;
						flag=false;
						break;
					}
				}
				if(flag==true){
					tree[(int)cnt]=str;
					num[(int)cnt]=1;
					cnt++;
				}
			}
			else break;
		}
		int ordernum[(int)cnt];
		for(int j=0;j<cnt;j++){
            ordernum[j]=0;
            for(int p=0;p<=2;p++){
                    if(p==0)ordernum[j]+=tree[j][0]*1000000;
                    if(p==1)ordernum[j]+=tree[j][1]*10000;
                    if(p==2)ordernum[j]+=tree[j][2]*100;
            }
        }
        for(int j=0;j<cnt;j++){
            int min=100000000,ans;
            for(int p=0;p<cnt;p++){
                if(ordernum[p]<min){
                    min=ordernum[p];
                    ans=p;
                }
            }
            cout<<tree[ans];
            printf(" %.4f\n",num[ans]*100/total);
            ordernum[ans]=100000000;
        }
		if(i!=t-1)cout<<endl;
	}
}
