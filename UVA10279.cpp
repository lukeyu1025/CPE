#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	bool flag=true;
	for(int i=0;i<num;i++){
		if(i==(num-1))flag=false;
		 int n;
		 cin>>n;
		 int touch[n][n],mine[n][n],num[n][n];
		 string str1="",str2="";
		 for(int j=0;j<n;j++){
		 	cin>>str1;
		 	for(int k=0;k<n;k++){
		 		if(str1[k]=='.')mine[j][k]=0;
		 		else if(str1[k]=='*')mine[j][k]=1;
		 	}
		 }
		 for(int j=0;j<n;j++){
		 	cin>>str2;
		 	for(int k=0;k<n;k++){
		 		if(str2[k]=='x')touch[j][k]=1;
		 		else if(str2[k]=='.')touch[j][k]=0;
		 	}
		 }
		 for(int j=0;j<n;j++){
		 	for(int k=0;k<n;k++){
		 		num[j][k]=0;
		 	} 
		 }
		 for(int j=0;j<n;j++){
		 	for(int k=0;k<n;k++){
		 		if(j>=1){
			 		if(mine[j-1][k]==1)num[j][k]++;
			 		if(mine[j-1][k-1]==1&&k>=1)num[j][k]++;
			 		if(mine[j-1][k+1]==1&&k<=(n-2))num[j][k]++;
		 		}
		 		if(mine[j][k]==1)num[j][k]++;
		 		if(mine[j][k-1]==1&&k>=1)num[j][k]++;
		 		if(mine[j][k+1]==1&&k<=(n-2))num[j][k]++;
		 		if(j<=(n-2)){
			 		if(mine[j+1][k]==1)num[j][k]++;
			 		if(mine[j+1][k-1]==1&&k>=1)num[j][k]++;
			 		if(mine[j+1][k+1]==1&&k<=(n-2))num[j][k]++;
		 		}
		 	}
		 }
		 for(int j=0;j<n;j++){
		 	for(int k=0;k<n;k++){
		 		if(touch[j][k]==1)cout<<num[j][k];
		 		else cout<<'.';
		 	}
		 	if(!(flag==false&&j==n-1))cout<<endl;
		 }
		 if(flag==true)cout<<endl;
	}
}
