#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
		int e,f,c,soda,drink=0;
		cin>>e>>f>>c;
		soda=e+f;
		while(soda>=c){
			soda-=c;
			soda+=1;
			drink++;
		}
		cout<<drink<<endl;
	}
}
