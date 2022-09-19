#include <iostream>
using namespace std;
int main(){
	int num,people,cases=1;
	cin>>num>>people;
	while(!(num==0&&people==0)){
		unsigned long long total=0,temp;
		for(int i=0;i<num;i++){
			cin>>temp;
			total+=temp;
		}
		cout<<"Bill #"<<cases<<" costs "<<total<<": each friend should pay ";
		total/=people;
		cout<<total<<endl<<endl;;
		cases++;
		cin>>num>>people;
	}
}
