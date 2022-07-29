//// Hospital Management System
////Header Files//
#include<bits/stdc++.h>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>
using namespace std;
// function declaration

void menu();
void pascode();
void cpascode();

class one
{
 	public:
	 virtual void get()=0;
	 virtual void show()=0;
};

class info:public one
{
	public:
		char name[50],time[50];
		int num,age;
		void get()
		{
			system("cls");
			cin.sync();
			cout<<"\n Enter the patient name : ";
			cin.getline(name,50);
			cout<<"\n Enter the Appointment Time : ";
			cin.getline(time,50);
			cout<<"\n Enter Age : ";
			cin>>age;
			cout<<"\n Enter the Appointment No. : ";
			cin>>num;	
		}
		
		void show()
		{
			cout<<"\n Name : "<<name;
			cout<<"\n Age : "<<age;
			cout<<"\n No : "<<num;
			cout<<"\n Time : "<<time;	
		}	
};
  ////////   Dr Rana entry Class ////////
class rana:public info{
	public:
		info a1;
		void get()
		{
			system("cls");
			ofstream out("rana.txt",ios:: app|ios::binary);
			a1.get();
			out.write((char*)&a1,sizeof(info));
			out.close();
			cout<<"Your entry Has been Saved :)";
			getch();
			menu();
		}
		void show()
		{
			ifstream in("rana.txt");
			if(in==NULL)
			{
				cout<<"\n\n No data found in the file";
				cout<<"\n\n\t\t Press Any key to continue";
				getch();
				menu();
			}
			else
			{
				while(!in.eof())
				{
					in.read((char*)&a1,sizeof(a1));
					a1.show();
				}
				in.close();
				getch();
				menu();
			}
			
		}
		
};

 ////////   Dr Waqar entry Class ////////
class waqar:public info
{
		public:
		info a1;
		void get()
		{
			system("cls");
			ofstream out("waqar.txt",ios:: app|ios::binary);
			a1.get();
			out.write((char*)&a1,sizeof(info));
			out.close();
			cout<<"Your entry Has been Saved :)";
			getch();
			menu();
		}
		void show()
		{
			ifstream in("waqar.txt");
			if(in==NULL)
			{
				cout<<"\n\n No data found in the file";
				cout<<"\n\n\t\t Press Any key to continue";
				getch();
				menu();
			}
			else
			{
				while(!in.eof())
				{
					in.read((char*)&a1,sizeof(a1));
					a1.show();
				}
				in.close();
				getch();
				menu();
			}
			
		}
		
};

///////// Dr Ahmed Class /////////

class ahmad:public info
{
		public:
		info a1;
		void get()
		{
			system("cls");
			ofstream out("ahmad.txt",ios:: app|ios::binary);
			a1.get();
			out.write((char*)&a1,sizeof(info));
			out.close();
			cout<<"Your entry Has been Saved :)";
			getch();
			menu();
		}
		void show()
		{
			ifstream in("ahmad.txt");
			if(in==NULL)
			{
				cout<<"\n\n No data found in the file";
				cout<<"\n\n\t\t Press Any key to continue";
				getch();
				menu();
			}
			else
			{
				while(!in.eof())
				{
					in.read((char*)&a1,sizeof(a1));
					a1.show();
				}
				in.close();
				getch();
				menu();
			}
			
		}
		
};

class staff:public one
{
	  public:
	  	char all[999];
	  	char name[50],age[50],sal[30],pos[30];
	  	
	  	void get()
	  	{
	  		ofstream out("staff.txt",ios::app);
	  	    {
	  	    	system("cls");
	  	    	cin.sync();
	  	    	cout<<"\n Enter Name : ";
	  	    	cin.getline(name,50);
	  	    	cout<<"\n Enter Age : ";
	  	    	cin.getline(age,50);
	  	    	cout<<"\n Enter Salary : ";
	  	    	cin.getline(sal,30);
	  	    	cout<<"\n Enter Working Position : ";
	  	    	cin.getline(pos,20);
	  	    	
			}
			cout<<"\n Name : "<<name<<"\nAge : "<<age<<"\n Salary : "<<sal<<"\n Working Position\n "<<pos;
			out.close();
			cout<<"\n\n Your Information has been saved . \n\t\tPress any key to continue";
			getch();
			menu();
		}
		void show()
		{
			ifstream in("staff.txt");
			if(!in){
				cout<<"File Cannot open.";
			}
			while(!(in.eof()))
			{
				in.getline(all,999);
				cout<<all<<endl;
			}
			in.close();
			cout<<"\n\n\t\t Press Any key to continue.";
			getch();
			menu();		
		}
		
};
class information
{
	public:
	void drinfo()
	{
		system("cls");
		system("color F3");
		cout<<"\n========================================================================\n";
		cout<<"\n\n\t\t (Three Doctors Available) \n\n\t\t[Information and timing are given below]\n";
		cout<<"--------------------------------------------------------------------------\n";
		cout<<"\t\t Dr Available:\n";
		cout<<"\t\t Dr Rana(Skin Specialist)\n\n";
		cout<<"\t\t\t [[Timing]]:\n\n";
		cout<<"\t Monday to Friday\t\t 9AM to 5PM\n";
		cout<<"\t Saturday        \t\t 9AM to 1PM\n";
		cout<<"\t Sunday          \t\t OFF\n";
		cout<<"\n------------------------------------------------------------------------------------\n";
		cout<<"\t\t Dr Waqar(Child Specialist)\n\n";
		cout<<"\t\t\t [[Timing]]:\n\n";
		cout<<"\t Monday to Friday\t\t 8AM to 5PM\n";
		cout<<"\t Saturday        \t\t 10AM to 1PM\n";
		cout<<"\t Sunday          \t\t OFF\n";
		cout<<"\n------------------------------------------------------------------------------------\n";
		cout<<"\t\t Dr Ahmad(Heart Specialist)\n\n";
		cout<<"\t\t\t [[Timing]]:\n\n";
		cout<<"\t Monday to Friday\t\t 8AM to 5PM\n";
		cout<<"\t Saturday        \t\t 10AM to 1PM\n";
		cout<<"\t Sunday          \t\t OFF\n";
		cout<<"\n------------------------------------------------------------------------------------\n";
		cout<<"\n Press Any key to continue.";
		getch();
		menu();
	}
};
void call_dr()
{
	system("cls");
	int choice;
	cout<<"\n\n\n\t\t Press 1 For Dr Rana \n\n\t\t Press 2 for Dr Waqar \n\n\t\t Press 3 for Dr Ahmad ";
	cin>>choice;
	
	one *ptr;
	rana s3;
	waqar s4;
	ahmad s5;
	if(choice==1)
	{
		ptr= &s3;
		ptr->get();
	}
	if(choice==2)
	{
		ptr= &s4;
		ptr->get();
	}
	if(choice==3)
	{
		ptr= &s5;
		ptr->get();
	}
	else
	{
		cout<<"Sorry Invalid Choice .";
		getch();
		menu();
	}
}

void pinfoshow()
{
	system("cls");
	int choice;
	cout<<"\n\n\n\t\t Press 1 For Dr Rana \n\n\t\t Press 2 for Dr Waqar \n\n\t\t Press 3 for Dr Ahmad \n";
	cin>>choice;
	
	one *ptr;
	rana s3;
	waqar s4;
	ahmad s5;
	if(choice==1)
	{
		ptr= &s3;
		ptr->show();
	}
	if(choice==2)
	{
		ptr= &s4;
		ptr->show();
	}
	if(choice==3)
	{
		ptr= &s5;
		ptr->show();
	}
	else
	{
		cout<<"Sorry Invalid Choice .";
		getch();
		menu();
	}
}
void menu()
{
	system("cls");
	system("color FC");
	cout<<"\n";
	cout<<"\n";
	cout<<"\t\t      | ++++++++++++++++   MAIN MENU  ++++++++++++++++ |\n";
	cout<<"\t\t      |        Hospital Management System             |\n";
	cout<<"\t\t      |================================================|";
	
	cout<<"\n------------------------------------------------------------------------------------\n";
	cout<<"\t\t           Please Select Any option      \n";
	cout<<"\n\n\t1-\t\tPress 1 for Available Doctor Information\n\n";
	cout<<"\t2-\t\tPress 2 for Doctor Appointment\n\n";
	cout<<"\t3-\t\tPress 3 for saving staff information\n\n";
	cout<<"\t4-\t\tPress 4 for checking patient appointment menu\n\n";
	cout<<"\t5-\t\tPress 5 for checking staff information menu\n\n";
	cout<<"\t6-\t\tPress 6 for change passwaord or create password \n\n";
	cout<<"\t7-\t\t[   Press 7 for Logout    ]\n";
	
	cout<<"\n========================================================================\n";
	cout<<"\n\n\t\t Please Enter your Choice : ";
	information a1;
	one *ptr;
	staff a2;
	int a;
	cin>>a;
	if(a==1)
	{
		a1.drinfo();
	}
	else if(a==2)
	{
		call_dr();
	}
	else if(a==3)
	{
		ptr= &a2;
		ptr->get();
	}
	else if(a==4)
	{
		pinfoshow();
	}
	else if(a==5)
	{
		ptr= &a2;
		ptr->show();
	}
	else if(a==6)
	{
		cpascode();
	}
	else{
		cout<<"You are been Logged out";
	}
} 

void cpascode()
{
	char n[50];
	system("cls");
	ofstream out("password.txt");
	{
		cin.sync();
		cout<<"\n\n\n\n\t\t\tEnter the new password";
		cin.getline(n,50);
		out<<n;
	}
	out.close();
	cout<<"\n\n Your Password has been saved";
	getch();
	menu();
}
int main()
{
	menu();
}



