#include <iostream>
using namespace std;

class parent
{
	public:
	parent()
	{
		cout<<"Constructor of parent class is called"<<endl;
	}
	~parent()
	{
		cout<<"Destructor of parent is called"<<endl;
	}
	void display()
	{
	cout<<"Hello world!!!"<<endl;
	}
};
class child:public parent
{
	public:
	child()
	{
		cout<<"Constructor of child is called"<<endl;
	}
	~child()
	{
		cout<<"Destructor of child is called"<<endl;
	}
	void show()
	{
	cout<<"Hello world!!!"<<endl;
	}
};
class grandchild:public child
{
	public:
	grandchild()
	{
		cout<<"Constructor of grandchild is called"<<endl;
	}
	~grandchild()
	{
		cout<<"Destructor of grandchild is called"<<endl;
	}
	void output()
	{
	cout<<"Hello world!!!"<<endl;
	}

};
int main()
{
	grandchild gc;
	gc.display();
	gc.show();
	gc.output();
}