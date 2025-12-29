#include<iostream>
#include<string>
using namespace std;
class teacher{
	
	public:
		string name;
		string course;
		string subject;
		int lecture_no;
		teacher()
		{
			name="not assigned";
			course="not assigned";
			subject="not assigned";
			lecture_no=0;	
		}

		void add()
		{
			cout<<"Name : ";
	    	cin>>name;
			cout<<"Subject Name : ";
			cin>>subject;
			cout<<"Course Name : ";
			cin>>course;
			cout<<"Lecture No : ";
			cin>>lecture_no;
		}
		void display()
		{
			cout<<"Name is : "<<name<<endl;
			cout<<"subject is : "<<subject<<endl;
			cout<<"course is : "<<course<<endl;
			cout<<"lecture is : "<<lecture_no<<endl;
		}
};
int main()
{
	teacher t1[5];
	cout<<"------------------ Welcome To Lecture Management --------------"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<endl<<"The Number Of Faculty : "<<i+1<<endl;
		t1[i].add();
	}
	cout<<"-------------Display The Details Of All Lecture	------------"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<endl<<"--------Lecture Detail--------"<<endl;
		t1[i].display();
	}
	cout<<"-------End Of The Lecture Detail-------------";
}
