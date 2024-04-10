#include <iostream>
using namespace std;
//***************************************
class Box{
	private: int l,b,h;
	public: Box(){
		l=b=h=20;
	}
	Box(int l,int b,int h)
	{
		cout<<"------------------Parameterised Constructor--------------------"<<endl;
		this->l=l;
		this->b=b;
		this->h=h;
	}
	void display()
	{
		cout<<"---------------------Display Function----------------------------"<<endl;
		cout<<"Length = "<<l<<endl;
		cout<<"Breadth = "<<b<<endl;
		cout<<"Height = "<<h<<endl;
	}
	friend void ChangeDimension(Box &obj);
};
void ChangeDimension(Box &obj)
{
	cout<<"------------------Change Dimension------------------"<<endl;
	obj.l=50;
	obj.b=60;
	obj.h=70;
	cout<<"------------------Dimension Changed-------------------"<<endl;
	obj.display();
}

int main()
{
	Box b1;
	Box b2(20,30,40);
	b2.display();
	ChangeDimension(b1);
	
}
