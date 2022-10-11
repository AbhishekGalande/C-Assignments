using namespace std;
#include<iostream>
#include<string.h>
class student
{
	int roll_no;
	char name[20];	
   static int count;
	public:
	student()
	{
		count++;
	     this->roll_no=0;
		 strcpy(this->name,"Not Given");	
	}
	student(int r , char* nm)
	{
		count++;
		this->roll_no=r;
		strcpy(this->name , nm);
	}
	~student()
	{
		count--;
	}
		
	
	void setroll_no(int r)
	{
		this->roll_no=r;
	}
	void setname(char* nm)
	{
	
		strcpy(this->name,nm);
	}
	static void setcount(int t)
	{
		count=t;
	}
	static int getcount( )
	{
		return count;
	}
	int getroll_no()
	{
		return this->roll_no;
	}
	char* getname()
	{
		return this->name;
	}
	void display()
	{
		cout<<"\nRoll No. : "<<roll_no;
		cout<<"\nName : "<<name;		
	}
};
void myfun();
 int student::count=0;
int main()
{
	student s5,s6,s7,s8;
	cout<<"\n---------------------------------------";
	myfun();
	cout<<"\n---------------------------------------";
	 cout<<"\nTotal Student : "<<student::getcount();
}
void myfun()
{
	student s1(101 , "ABhi") ; 
	student s2(102 , "Vishal") ;
	student s3(103 , "ABC");
	
   	
	s1.display();
	cout<<"\n---------------------------------------";
	s2.display();
	cout<<"\n---------------------------------------";
    s3.display();
    cout<<"\n---------------------------------------";
    cout<<"\nTotal Student : "<<student::getcount();
    
	
}


