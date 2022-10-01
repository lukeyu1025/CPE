#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int m,n,q;
        cin>>m>>n>>q;
        cout<<m<<" "<<n<<" "<<q<<endl;
        char arr[25][25];
        for(int j=0;j<25;j++){
        	for(int k=0;k<25;k++){
        		arr[j][k]='c';
        	}
        }
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                cin>>arr[j][k];
            }
        }
        for(int j=0;j<q;j++){
            int r,c;
            cin>>r>>c;
            int ans=0,output;
            bool flag=true;
            while(flag==true){
            	int x=c-ans,y=r-ans;
            	if(x<0||y<0){
            		flag=false;
            	}
            	else{
            		for(int p=0;p<=(2*ans);p++){
            			for(int s=0;s<=(2*ans);s++){
            				if(arr[r][c]!=arr[y+p][x+s]){
            					flag=false;
            					break;
            				}
            			}
            			if(flag==false)break;
            		}
            	}
            	ans++;
            }
            ans-=2;
            output=(2*ans)+1;
            cout<<output<<endl;
        }
    }
}
