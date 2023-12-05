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
		case 'i' : cout<<"insert" ;
		case 'D' :
		case 'd' : cout<<"delete" ;
		case 'U' :
		case 'u' : cout<<"update" ;
		case 'L' :
		case 'l' : cout<<"list" ;
		case 'R' :
		case 'r' : cout<<"report" ;
		default : cout<<"no key"<<endl;
	}

	}
}
