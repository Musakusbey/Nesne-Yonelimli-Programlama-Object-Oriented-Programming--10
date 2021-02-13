#include <iostream>

using namespace std;

class Employee
{
   private:
   
     int x;
	 
   public:
   
     void setX(int);
     
     int getX();	
};

void Employee::setX(int x)
{
	this->x=x;
}

int Employee::getX()
{
	return x;
}

int main ()
{
	Employee employee;
	
	employee.setX(18);
	
	cout<<employee.getX()<<endl;
		
	return 0;
}
