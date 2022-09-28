#include <iostream>
using namespace std;
int main(){
	string str;
	while(getline(cin,str)){
		for(int i=0;i<str.length();i++){
			str[i]=tolower(str[i]);
			if(str[i]=='e')str[i]='q';
			if(str[i]=='d')str[i]='a';
			if(str[i]=='c')str[i]='z';
			if(str[i]=='r')str[i]='w';
			if(str[i]=='f')str[i]='s';
			if(str[i]=='v')str[i]='x';
			if(str[i]=='t')str[i]='e';
			if(str[i]=='g')str[i]='d';
			if(str[i]=='b')str[i]='c';
			if(str[i]=='y')str[i]='r';
			if(str[i]=='h')str[i]='f';
			if(str[i]=='n')str[i]='v';
			if(str[i]=='u')str[i]='t';
			if(str[i]=='j')str[i]='g';
			if(str[i]=='m')str[i]='b';
			if(str[i]=='i')str[i]='y';
			if(str[i]=='k')str[i]='h';
			if(str[i]==',')str[i]='n';
			if(str[i]=='o')str[i]='u';
			if(str[i]=='l')str[i]='j';
			if(str[i]=='.')str[i]='m';
			if(str[i]=='p')str[i]='i';
			if(str[i]==';')str[i]='k';
			if(str[i]=='/')str[i]=',';
			if(str[i]=='[')str[i]='o';
			if(str[i]=='\'')str[i]='l';
			if(str[i]==']')str[i]='p';
			cout<<str[i];
		}
		cout<<endl;
	}
}
