#include <iostream>
#include <cctype>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str="";
	getline(cin,str);
	for(int i=0;i<n;i++){
		getline(cin,str);
		for(int q=0;q<=str.length();q++){
			char ch=tolower(str[q]);
			if(ch=='q')str[q]='-';
			if(ch=='a')str[q]=']';
			if(ch=='z')str[q]=';';
			if(ch=='w')str[q]='=';
			if(ch=='s')str[q]='\\';
			if(ch=='x')str[q]='\'';
			if(ch=='e')str[q]='q';
			if(ch=='d')str[q]='a';
			if(ch=='c')str[q]='z';
			if(ch=='r')str[q]='w';
			if(ch=='f')str[q]='s';
			if(ch=='v')str[q]='x';
			if(ch=='t')str[q]='e';
			if(ch=='g')str[q]='d';
			if(ch=='b')str[q]='c';
			if(ch=='y')str[q]='r';
			if(ch=='h')str[q]='f';
			if(ch=='n')str[q]='v';
			if(ch=='u')str[q]='t';
			if(ch=='j')str[q]='g';
			if(ch=='m')str[q]='b';
			if(ch=='I')str[q]='y';
			if(ch=='i')str[q]='y';
			if(ch=='k')str[q]='h';
			if(ch==',')str[q]='n';
			if(ch=='o')str[q]='u';
			if(ch=='l')str[q]='j';
			if(ch=='.')str[q]='m';
			if(ch=='p')str[q]='i';
			if(ch==';')str[q]='k';
			if(ch=='/')str[q]=',';
			if(ch=='[')str[q]='o';
			if(ch=='\'')str[q]='l';
			if(ch==']')str[q]='p';
		}
		cout<<str<<endl;
	}
}
