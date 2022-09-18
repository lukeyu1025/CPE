#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	float xg,yg,xd,yd;
	while(cin>>n>>xg>>yg>>xd>>yd){
		bool flag=false;
		float x,y,disg,disd,gxbar,gybar,dxbar,dybar;
		float ansx,ansy;
		for(int i=0;i<n;i++){
			cin>>x>>y;
			disg=pow(xg-x,2)+pow(yg-y,2);
			disd=pow(xd-x,2)+pow(yd-y,2);
			if(4*disg<disd){
				flag=true;
				ansx=x;
				ansy=y;
			}
		}
		if(flag==true){
			printf("The gopher can escape through the hole at (%1.3f,%1.3f).\n",ansx,ansy);
		}
		else cout<<"The gopher cannot escape."<<endl;
	}
}
