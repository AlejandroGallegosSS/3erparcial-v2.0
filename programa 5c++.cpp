#include <iostream>
using namespace std;
int main ()
{
	int sala,h,porcent,tot;
	cout<<"Introduzca el total de horas trabajadas"<<endl;
	cin>>h;
	cout<<"Introduzca la cantidad de su salario por hora"<<endl;
	cin>>sala;
	if(h==40){
		tot=40*sala;
		cout<<"Su salario es de: "<<tot<<endl;
	}else if(h>40){
	porcent=(h*sala);
		tot=porcent+(h*0.5);
		cout<<"Su paga total es de: "<<tot<<endl;
	}else if(h>=50){
		tot=(40*sala)*2;
		cout<<"Su salario es igual a: "<<tot<<endl;
	}
}
