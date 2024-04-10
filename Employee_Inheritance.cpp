#include<iostream>
using namespace std;
class Employee{
	protected: int id;
			   int deptId;
			   string name;
	protected : double basicSalary;
	public: Employee(){
		cout<<"------------Default Employee Constructor-------------"<<endl;
		deptId=1;
		this->id=1;
		this->basicSalary=10000;
		this->name="Ranjan";
		cout<<"Dept Id is "<<deptId<<" Id is "<<id<<" Name is "<<name<<" Basic Salary is "<<basicSalary<<endl;
	}
	Employee(int id,int deptId,string name,double basicSalary)
	{
		cout<<"------------Parameterisued Employee Constructor-------------"<<endl;
		this->deptId=deptId;
		this->id=id;
		this->basicSalary=basicSalary;
		this->name=name;
		cout<<"Dept Id is "<<deptId<<" Id is "<<id<<" Name is "<<name<<" Basic Salary is "<<basicSalary<<endl;
	}
	void displayEmployeeInfo()
	{
		cout<<"-------------------Display Function------------------"<<endl;
		cout<<"Dept Id is "<<deptId<<" Id is "<<id<<" Name is "<<name<<" Basic Salary is "<<basicSalary<<endl;
	}

 	void computeNetSalary()
 	{
 		this->basicSalary;
		cout<<"Basic Salary is "<<basicSalary<<endl;
	}

};
class Manager:public Employee{
	private: int perfb;
	public: Manager()
	{
		cout<<"------------Default Manager Constructor-------------"<<endl;
		this->perfb=2000;
	}
	Manager(int id,int deptId,string name,double basicSalary,int perfb) : Employee(id,deptId,name,basicSalary)
	{
		cout<<"------------Paramerised Manager Constructor-------------"<<endl;
		this->deptId=deptId;
		this->id=id;
		this->basicSalary=basicSalary;
		this->name=name;
		this->perfb=perfb;
		cout<<"Dept Id is "<<deptId<<" Id is "<<id<<" Name is "<<name<<" Basic Salary is "<<basicSalary<<endl;	
	}
	void displayEmployeeInfo()
	{
		Employee :: displayEmployeeInfo();
		cout<<"-------------------Display Function------------------"<<endl;
		cout<<"Dept Id is "<<deptId<<" Id is "<<id<<" Name is "<<name<<" Basic Salary is "<<basicSalary<<endl;		
	}
	void computeNetSalary()
 	{
 		Employee::computeNetSalary();
		basicSalary=basicSalary+perfb;
		cout<<"Basic Salary is "<<basicSalary<<endl;
	}
};
class Worker:public Employee{
	private : int hw,hr;
	public:Worker()
	{
		cout<<"------------Default Manager Constructor-------------"<<endl;
		hw=12;
		hr=2000;
	}
	Worker(int id,int deptId,string name,double basicSalary,int hw,int hr) : Employee(id,deptId,name,basicSalary)
	{
		cout<<"------------Paramerised Manager Constructor-------------"<<endl;
		this->deptId=deptId;
		this->id=id;
		this->basicSalary=basicSalary;
		this->name=name;
		this->hw=hw;
		this->hr=hr;
		cout<<"Dept Id is "<<deptId<<" Id is "<<id<<" Name is "<<name<<" Basic Salary is "<<basicSalary<<endl;
		cout<<"Hours Worked is "	<<hw<<" Hourly Rate is "<<hr<<endl;
	}
	void computeNetSalary()
 	{
 		Employee::computeNetSalary();
 		int h=hw*hr;
		basicSalary=basicSalary*h;
		cout<<"Basic Salary is "<<basicSalary<<endl;
	}
	void displayEmployeeInfo()
	{
		cout<<"-------------------Display Function------------------"<<endl;
		cout<<"Dept Id is "<<deptId<<" Id is "<<id<<" Name is "<<name<<" Basic Salary is "<<basicSalary<<endl;
	}
	int getHR()
	{
		cout<<"\n-------------------getHR--------------------"<<endl;
		return this->hr;
	}

 	 //get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)
};



int main()
{
	Employee e1;
	Employee e2(22,33,"ram",10000);
	
	Manager m1(22,33,"ram",12000,2300);
	m1.computeNetSalary();
	Manager m2(m1);
	
	//Worker w1;
	Worker w2(22,33,"ram",12000,20,2000);//int id,int deptId,string name,double basicSalary,int hw,int hr
	
	w2.getHR();
	cout<<w2.getHR();
	
	Employee* org[3];
	org[0]= &e1;
	org[1]= &m1;
	org[2]= &w2;
	
	for(int i=0;i<3;i++)
	{
		org[i]->computeNetSalary();
		org[i]->displayEmployeeInfo();
	}
	
}
