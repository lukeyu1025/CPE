#include <iostream>
using namespace std;
int main(){
	int cases;
	cin>>cases;
	for(int i=0;i<cases;i++){
		int M,D;
		cin>>M>>D;
		while(D>7){D-=7;}
		if(M==1){
			D+=5;
		}
		if(M==2){
			D+=1;	
		}
		if(M==3){
			D+=1;	
		}
		if(M==4){
			D+=4;	
		}
		if(M==5){
			D+=6;	
		}
		if(M==6){
			D+=2;	
		}
		if(M==7){
			D+=4;	
		}
		if(M==9){
			D+=3;	
		}
		if(M==10){
			D+=5;	
		}
		if(M==11){
			D+=15;	
		}
		if(M==12){
			D+=3;	
		}
		while(D>7){D-=7;}
		if(D==1)cout<<"Monday"<<endl;
		if(D==2)cout<<"Tuesday"<<endl;
		if(D==3)cout<<"Wednesday"<<endl;
		if(D==4)cout<<"Thursday"<<endl;
		if(D==5)cout<<"Friday"<<endl;
		if(D==6)cout<<"Saturday"<<endl;
		if(D==7)cout<<"Sunday"<<endl;
	}
}
