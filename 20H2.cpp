#include <iostream>
using namespace std;
int main(){
    int num,num2,cases=1;
    cin>>num;
    while(num!=0){
    	int temp1=0,temp2=0; 
        cout<<"Run #"<<cases<<": ";
        cases++;
        string str="";
        char ch1[500],ch2[500];
        getline(cin,str);
        for(int i=0;i<num;i++){
				getline(cin,str);
				int len=str.length();
				for(int q=0;q<len;q++){
					ch1[temp1]=str[q];
					temp1++;
				}
        }
        cin>>num2;
        getline(cin,str);
        for(int i=0;i<num2;i++){
			getline(cin,str);
			int len=str.length();
				for(int q=0;q<len;q++){
					ch2[temp2]=str[q];
					temp2++;
				}
        }
        bool presentation=true,rightwrong=true;//presentation correct, answer correct
    	int lesserlen;
    	if(temp1>temp2){lesserlen=temp2;}
    	else if(temp1==temp2){lesserlen=temp2;}
    	else{lesserlen=temp1;}
    	int space1=0,space2=0;
        for(int i=0;i<lesserlen;i++){
        	int posi1=i+space1,posi2=i+space2;
        	if(ch1[posi1]!=ch2[posi2]){
        		while(ch1[posi1]==32){
        			presentation=false;
        			space1++;
        			posi1++;
        		}
    			while(ch2[posi2]==32){
    				presentation=false;
	    			space2++;
	    			posi2++;
        		}
        		if(ch1[posi1]!=ch2[posi2]){
        			 rightwrong=false;
        		}
        	}
        }
        if(num!=num2){presentation=false;}
        if(rightwrong==true&&presentation==true){
        	cout<<"Accepted "<<temp1;
        }
        else if(presentation==false&&rightwrong==true){
        	cout<<"Presentation Error "<<temp1;
        }
        else{
        	cout<<"Wrong Answer "<<temp1;
        }
        cout<<endl;
        cin>>num;
    }
}
