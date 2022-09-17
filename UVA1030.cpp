#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	for(int i=0;i<num;i++){
		int no;
		cin>>no;
		int total=0;
		float avg=0;
		int people[no];
		for(int j=0;j<no;j++){
			cin>>people[j];
			total+=people[j];
		}
		avg=total/no;
		int over=0;
		for(int j=0;j<no;j++){
			if(people[j]>avg)over++;
		}
		float ans=(float)(over*100)/no;
		printf("%1.3f",ans);
		cout<<"%"<<endl;
	}
}
