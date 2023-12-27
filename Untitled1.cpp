#include <iostream>
using namespace std ;
int main(){
	char key ;
	cout<<"enter a key from keyboard: "<<endl;
	cin>>key ;
	while(key!='E' || key!='e'){
	cout<<"enter a key from keyboard: "<<endl;
	cin>>key;
	switch(key){
		case 'I' :
		case 'i' : cout<<"insert" ; break ;
		case 'D' :
		case 'd' : cout<<"delete" ; break ;
		case 'U' :
		case 'u' : cout<<"update" ; break ;
		case 'L' :
		case 'l' : cout<<"list" ; break ;
		case 'R' :
		case 'r' : cout<<"report" ; break ;
		default : cout<<"no key"<<endl;
	}

	}
}
