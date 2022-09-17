#include <iostream>
using namespace std;
int main() {
   int s;
   cin>>s;  
   while(s!=0){
   bool flag=false;
   int i=1,miss,total;
   	while(flag==false){
   	int num=0;
   		for(int q=1;q<=i;q++){
   			num+=q;
   		}
   		for(int q=1;q<=i;q++){
   			if((num-q)==s){
   				miss=q;
   				total=i;
   				flag=true;
   			}
   		}
   		i++;
   	}
	cout<<miss<<" "<<total<<endl;
   	cin>>s;
   }
   return 0;
}
