#include<iostream>
using namespace std;

class perro{
	public:

      void morder();
	
};

void perro::morder(){
	
	cout<<"El perro muerde, cuidado!";
}


int main(){
	
	perro *obj=new perro();
	obj->morder();
	return 0;
	
}
