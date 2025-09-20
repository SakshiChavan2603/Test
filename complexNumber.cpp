#include<iostream>
using namespace std;
class Complex{
	int real;
	int img;
	public:
		void accept();
		void dispaly();
		void setReal(int);
		int getReal();
};

void Complex::accept() {
	cout<<"enetr the value of real and img"<<endl;
	cin>>real>>img;
}

void Complex::dispaly(){
	cout<<"Complex number is "<<real<<" + "<<img<<"i"<<endl;
}
void Complex::setReal(int r){
	real = r;
}
int Complex::getReal(){
	return real;
}


int main(){
	Complex c;
	c.accept();
	c.dispaly();
	c.setReal(20);
	cout<<"Real no. is "<<c.getReal();
}
