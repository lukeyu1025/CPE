#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n!=0){
		string str;
		int die[6],temp[6];
		die[0]=1;//front
		die[1]=6;//back
		die[2]=2;//north(up)
		die[3]=5;//south(down)
		die[4]=3;//west(left)
		die[5]=4;//east(right)
		for(int i=0;i<n;i++){
			cin>>str;
			for(int i=0;i<6;i++)temp[i]=die[i];
			if(str=="north"){
				die[0]=temp[3];
				die[1]=temp[2];
				die[2]=temp[0];
				die[3]=temp[1];
				//west east same
			}
			else if(str=="south"){
				die[0]=temp[2];
				die[1]=temp[3];
				die[2]=temp[1];
				die[3]=temp[0];
				//west eass same
			}
			else if(str=="west"){
				die[0]=temp[5];
				die[1]=temp[4];
				die[4]=temp[0];
				die[5]=temp[1];
				//north south same
			}
			else if(str=="east"){
				die[0]=temp[4];
				die[1]=temp[5];
				die[4]=temp[1];
				die[5]=temp[0];
				//north south same
			}
		}
		cout<<die[0]<<endl;
		cin>>n;
	}
}
