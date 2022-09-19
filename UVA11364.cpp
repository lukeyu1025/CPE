#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
		int max=0,min=100,cases;
		cin>>cases;
		for(int j=0;j<cases;j++){
			int temp;
			cin>>temp;
			if(temp<min)min=temp;
			if(temp>max)max=temp;
		}
		cout<<2*(max-min)<<endl;
	}
}
