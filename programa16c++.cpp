#include <iostream>
using namespace std;
int main (){
	int a,b,c,d,e;
	 cout<<"ingresa 5 digitos porfavor ";
	cin>> a;
	cin>> b;
    cin>>c;
    cin>>d;
	cin>>e;
	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					cout<<"es menor"<<a;
				}
			}
		}
		
	}
		if(b<a){
		if(b<c){
			if(b<d){
				if(b<e){
					cout<<"es menor"<<b;
				}
			}
		}
		
	}
		if(c<a){
		if(c<b){
			if(c<d){
				if(c<e){
					cout<<" es menor"<<c;
				}
			}
		}
		
	}
		if(d<a){
		if(d<b){
			if(d<c){
				if(d<e){
					cout<< "es menor"<<d;
				}
			}
		}
		
	}
		if(e<a){
		if(e<b){
			if(e<c){
				if(e<d){
					cout<<" es menor"<<e;
				}
			}
		}
		
	}
	
}
