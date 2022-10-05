#include <iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	int arr[x+3][y+3];
	for(int i=0;i<x+3;i++){
		for(int j=0;j<y+3;j++)arr[i][j]=0;
	}
	int rx,ry;
	string str;
	char face;
	while(cin>>rx>>ry>>face>>str){
		int tmpx,tmpy;
		bool flag=true;
		for(int i=0;i<str.length();i++){
			if(str[i]=='R'){
				if(face=='N'){
					face='E';
				}
				else if(face=='E'){
					face='S';
				}
				else if(face=='S'){
					face='W';
				}
				else if(face=='W'){
					face='N';
				}
			}
			else if(str[i]=='L'){
				if(face=='N'){
					face='W';
				}
				else if(face=='W'){
					face='S';
				}
				else if(face=='S'){
					face='E';
				}
				else if(face=='E'){
					face='N';
				}
			}
			else if(str[i]=='F'){
				tmpx=rx;tmpy=ry;
				if(face=='N'){
					ry++;
				}
				else if(face=='E'){
					rx++;
				}
				else if(face=='S'){
					ry--;
				}
				else if(face=='W'){
					rx--;
				}
				//cout<<rx+1<<" "<<ry+1<<endl;
				if(rx<0||rx>x||ry<0||ry>y){
					if(arr[rx+1][ry+1]==0){
						flag=false;
						arr[rx+1][ry+1]=1;
						rx=tmpx;
						ry=tmpy;
						break;
					}
					else{
						rx=tmpx;
						ry=tmpy;
					}
				}
			}
		}
		if(flag==true) cout<<rx<<" "<<ry<<" "<<face<<endl;
		else cout<<rx<<" "<<ry<<" "<<face<<" LOST"<<endl;
	}
}
