//HEADER FILES;

#include <Windows.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <conio.h>
//#include <graphics.h>
using namespace std;

//PROTOTYPE DECLARATIONS;

void intro();
void home();
void home2();
void cont();
void menu();
void doctors();
void register_any();
void patients();
void add();
void search_doctors();
void search_patients();
void update_doc();
void del_pos_doc();
void update_patients();
void del_doc();
void del_last_doc();
void del_pat();
void del_last_pat();
void display_doc();
void display_pat();
void del_pos_pat();
void exit();

struct node{
	//POINTER FOR BOTH
	  node *next;
	  node *prev;
	//variables for doctors  
	  int ID;
	int age;
	long int salary;
	string name;
	//variables for patients
	int Token_No;
	int P_age;
	int payment;
	string P_name;
	  
};
node *head;	//GLOBALLY INITIALIZE POINTER OF HEAD



void intro()
{
	system ("color f1");
	
	cout << "Welcome to our dental clinic management. In this program you have various  " <<endl;
	cout << "options including 9 main options in which their is details of doctors and  " <<endl;
	cout << "nurses, details of your patients. You can also search any of your doctor by" <<endl;
	cout << "their ID, name, age or salary its upto you. Similarly you can search records"<<endl;
	cout << "of your patients by their token no, name and age. Their is an option where " <<endl;
	cout << "you can add new patients. Their is a function where you can easily find    " <<endl;
	cout << "that your patient is having an appointment with whom. you can edit any     " <<endl;
	cout << "information regarding your doctors/nurses and patients separately. You can " <<endl;
	cout << "also display all of your doctors and patients in a single option. In the end"<<endl;
	cout << "there is an exit option that will close the program." <<endl;
	cout <<endl;
	cont();
	
}

//continue to menu;

void cont()
{
	
	cout << "Press 1 to continue" <<endl;
	int num;
	cin >>num;
	if(num==1)
	{
		system("CLS");
		menu();
	}
	else
	{
		Beep(1500,750);
		Sleep(750);
		cout << "Please ensure that you enter correct number...!" <<endl;
	    cont();	
	}
	
	
}

//menu


void menu()
{
	system("CLS");
	system("color 1f");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout <<"\t\t\tLOADING PROGRAM..";
	for (int i=0;i<4;i++)
	{
		Sleep (500);
	 cout << ".";
	}
		system("CLS");

	cout<<"===============1. GO TO PORTION OF DOCTORS=================="<<endl;
	cout<<"===============2. GO TO PORTION OF PATIENTS================="<<endl;
	cout<<"===============3.            Exit          ================="<<endl;
	
	int ch;
	cout << "===========================================================================" <<endl;
	cout << "                   Please enter your choice---> " <<endl;
	cin >> ch;
	switch (ch)
	
	{
		case 1:
			home();
			break;
		case 2:
		    home2();
			break;
		case 3:
		    exit();
			break;	
		default:
		    cout<<"please enter correct choice"<<endl;
			menu();
					
	
    }


}




//HOME;

void home()
{
    
	system("CLS");
	system("color 1f");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout <<"\t\t\tLOADING PROGRAM..";
	for (int i=0;i<4;i++)
	{
		Sleep (500);
	 cout << ".";
	}
	system("CLS");
	system("color 7f");
	
	cout<<"\t\t  __  __       _         __  __                  "<<endl;
    cout<<"\t\t |  \\/  |     (_)       |  \\/  |                 "<<endl;
    cout<<"\t\t | \\  / | __ _ _ _ __   | \\  / | ___ _ __  _   _ "<<endl;
    cout<<"\t\t | |\\/| |/ _` | | '_ \\  | |\\/| |/ _ \\ '_ \\| | | |"<<endl;
    cout<<"\t\t | |  | | (_| | | | | | | |  | |  __/ | | | |_| |"<<endl;
    cout<<"\t\t |_|  |_|\\__,_|_|_| |_| |_|  |_|\\___|_| |_|\\__,_|"<<endl;
    cout <<endl;   
	cout << "**********************DENTAL_CLINIC_MANAGEMENT_SYSTEM**********************" <<endl;
	cout<<endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@ DOCTOR PORTION @@@@@@@@@@@@@@@@@@"<<endl;
	cout << "             1. Details of doctors and nurses.\n" <<endl;
	cout << "             2. Search doctors.\n" <<endl;
	cout << "             3. Add any doctors.\n" <<endl;
	cout << "             4. UPDATE any information regarding doctors and nurses.\n" <<endl;
	cout << "             5. TO DELETE A RECORD AT BEGINNING \n"<<endl;
	cout << "             6. TO DELETE A RECORD AT LAST \n"<<endl;
    cout << "             7. TO DELETE A RECORD AT ANY POSITION \n"<<endl;
	cout << "             8. Dislpay all details of doctors and nurses.\n" <<endl;
	cout << "             9. BACK." <<endl;
	int choice;
	cout << "===========================================================================" <<endl;
	cout << "                   Please enter your choice---> " <<endl;
	cin >> choice;
	switch (choice)
	{
		case 1:
		    doctors();
		   		    int choice0;
	cout << " Go back to menu ?\n ";
	cout <<"Yes=1   No=2 :>";
	cin >>choice0;
	
	if (choice0==1)
	{
		system("CLS");
		home();
	}
	else if (choice0==2)
	{
		system("CLS");
		exit();
	} 
		    break;
		case 2:
	        search_doctors();
            break;
	    case 3:    
		    register_any();
		    int choic;
	cout << " Go back to menu ?\n ";
	cout <<"Yes=1   No=2 :>";
	cin >>choic;
	
	if (choic==1)
	{
		system("CLS");
		home();
	}
	else if (choic==2)
	{
		system("CLS");
		exit();
	}

		    break;
	    case 4:
		    update_doc();
		    break;
		case 5:
			del_doc();
			break;
		case 6:
			del_last_doc();
			break;
		case 7:
			del_pos_doc();
			break;
		case 8:
			display_doc();
            break;
        case 9:
		    menu();
			break;
		default:
			Beep(1500,750);
		    Sleep(750);
		    cout << "Please enter correct choice...!";
		    system("pause");
		    home();	    
	}
	
		
}



//HOME2;

void home2()
{
    
	system("CLS");
	system("color 1f");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout <<"\t\t\tLOADING PROGRAM..";
	for (int i=0;i<4;i++)
	{
		Sleep (500);
	 cout << ".";
	}
	system("CLS");
	system("color 8f");
	
	cout<<"\t\t  __  __       _         __  __                  "<<endl;
    cout<<"\t\t |  \\/  |     (_)       |  \\/  |                 "<<endl;
    cout<<"\t\t | \\  / | __ _ _ _ __   | \\  / | ___ _ __  _   _ "<<endl;
    cout<<"\t\t | |\\/| |/ _` | | '_ \\  | |\\/| |/ _ \\ '_ \\| | | |"<<endl;
    cout<<"\t\t | |  | | (_| | | | | | | |  | |  __/ | | | |_| |"<<endl;
    cout<<"\t\t |_|  |_|\\__,_|_|_| |_| |_|  |_|\\___|_| |_|\\__,_|"<<endl;
    cout <<endl;   
	cout << "**********************DENTAL_CLINIC_MANAGEMENT_SYSTEM**********************" <<endl;
	cout << endl;
	cout << "@@@@@@@@@@@@@@@@@@@@@@@ PATIENT PORTION @@@@@@@@@@@@@@@@@@"<<endl;
	cout << "             1. Patients and their detials.\n" <<endl;
	cout << "             2. Search patients.\n" <<endl;
	cout << "             3. Add any patient's appointment.\n" <<endl;
    cout << "             4. Update any information regarding patients.\n" <<endl;
	cout << "             5. TO DELETE A RECORD AT BEGINNING \n"<<endl;
	cout << "             6. TO DELETE A RECORD AT LAST \n"<<endl;
    cout << "             7. TO DELETE A RECORD AT ANY POSITION \n"<<endl;
	cout << "             8. Dislpay all details of doctors and nurses.\n" <<endl;
	cout << "             9. BACK." <<endl;
	int choice;
	cout << "===========================================================================" <<endl;
	cout << "                   Please enter your choice---> " <<endl;
	cin >> choice;
	switch (choice)
	{
		case 1:
		    patients();
		    int choice0;
	cout << " Go back to menu ?\n ";
	cout <<"Yes=1   No=2 :>";
	cin >>choice0;
	
	if (choice0==1)
	{
		system("CLS");
		home2();
	}
	else if (choice0==2)
	{
		system("CLS");
		exit();
	}
		    break;
		case 2:
	        search_patients();
            break;
	    case 3:    
		    add();
		    		    int choi;
	cout << " Go back to menu ?\n ";
	cout <<"Yes=1   No=2 :>";
	cin >>choi;
	
	if (choi==1)
	{
		system("CLS");
		home2();
	}
	else if (choi==2)
	{
		system("CLS");
		exit();
	}
		    break;
	    case 4:
		    update_patients();
		    break;
		case 5:
			del_pat();
			break;
		case 6:
			del_last_pat();
			break;
		case 7:
			del_pos_pat();
			break;
					
		case 8:
			display_pat();
            break;
        case 9:
		    menu();
			break;
		default:
			Beep(1500,750);
		    Sleep(750);
		    cout << "Please enter correct choice...!";
		    system("pause");
		    home();	    
	}
	
		
}

//DETAILS OF DOCTORS AND NURSES;

void doctors()
{
			system("CLS");
	system("color 1f");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout <<"\t\t\tLOADING PROGRAM";
	for (int i=0;i<6;i++)
	{
		Sleep (500);
	 cout << ".";
	}
	system("color 1f");
	int ID;
	int age;
	long int salary;
	string name;
	
		char ch;
		if(head==NULL)
		{
			cout<<"OOPS! LIST IS EMPTY"<<endl;
			cout<<"DO YOU WANT TO ADD A NEW RECORD (Y/N)"<<endl;
			cin>>ch;
			if (ch=='Y'|| ch=='y')
			{
				register_any();
				return;
			}
			else 
			{
				home();
			}
		}
		else
		{
			node *temp=head;
		
	cout << "===============List of all doctors and nurses===============" <<endl;
	cout << "ID"<<" || "<<"Name"<<" || "<<"Age"<<" || "<<"Salary" <<endl;
	cout << "=============================================" <<endl;
	
while (temp!= NULL){

		cout <<temp->ID<<" || "<<temp->name<<" || "<<temp->age<<" || "<<temp->salary<<endl;
	
		temp=temp->next;
	}
	cout <<endl;
	system("pause");
	system("CLS");

				
			
		}
		

}
void register_any()
{

	node *newer=new node;
	

	system("CLS");
	
	ofstream newdoctor("newdoctor.txt", ios::app);
	
		
	
		cout <<"ID =";
		cin >> newer->ID;
		cout <<"Name =";
		cin>>newer->name;
		cout <<"age =";
		cin >>newer->age;
		cout <<"salary =";
		cin >>newer->salary;
		newdoctor<<newer->ID<<"   "<<newer->name<<"   "<<newer->age<<"   "<<newer->salary<<endl;
        newdoctor.close();		
		newer->prev=NULL;           
		newer->next=NULL;
					   
		if(head==NULL)
		{
			head=newer;
			return;				
		}
		head->prev=newer; 		 
		newer->next=head;
		head=newer;
		cout<<"BEGINNING RECORD SUCCESFULLY INSERTED"<<endl;
	
	
	cout <<endl;
	int choice0;
	cout << " Go back to menu ?\n ";
	cout <<"Yes=1   No=2 :>";
	cin >>choice0;
	
	if (choice0==1)
	{
		system("CLS");
		home();
	}
	else if (choice0==2)
	{
		system("CLS");
		exit();
	}

}

//DETAILS OF PATIENTS;

void patients()
{
	system("CLS");
	system("color 1f");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout <<"\t\t\tLOADING PROGRAM";
	for (int i=0;i<6;i++)
	{
		Sleep (500);
	 cout << ".";
	}
	system("color 1f");
	system("CLS");
	int Token_No;
	int P_age;
	int payment;
	string P_name;
	
		char ch;
		if(head==NULL)
		{
			cout<<"OOPS! LIST IS EMPTY"<<endl;
			cout<<"DO YOU WANT TO ADD A NEW RECORD (Y/N)"<<endl;
			cin>>ch;
			if (ch=='Y'|| ch=='y')
			{
				add();
				return;
			}
			else 
			{
				home2();
			}
		}
		else
		{
			node *temp=head;
	
	cout << "=====================List of patients=======================" <<endl;
	cout << "Token No"<<" || "<<"Patient Name"<<" || "<<"Patient Age"<<" || "<<" || "<<"Amount" <<endl;
	cout << "============================================================" <<endl;
while (temp!= NULL){

		cout <<temp->Token_No<<" || "<<"\t\t"<<temp->P_name<<" || "<<"\t"<<temp->P_age<<" || "<<"\t" <<temp->payment<<endl;
	
	
		temp=temp->next;
	}
	cout <<endl;
	system("pause");
	system("CLS");


	cout <<"Do you want to add any patient ?";
	cout <<"1=add   2=home :>";
	int a;
	cin>>a;
	switch(a)
	{
		case 1:
			add();
			break;
		default:
		    home2();
	}
	
}
	
}
//ADD ANY PETIENT HERE;

void add()
{
node *newer = new node;

	system("CLS");
	system("color f2");
	ofstream newpatient1("newpatient1.txt", ios::app);
	
	        cout << " Token No =";
	        cin >>newer->Token_No;
	        cout <<endl;
	        cout << " Enter patient's name =";
	        cin >>newer->P_name;
	        cout <<endl;
	        cout << " Enter patient's age =";
	        cin >>newer->P_age;
	        cout <<endl;
	        
	        cout << " Amount =";
	        cin >>newer->payment;
	        cout <<endl;
	        newpatient1<<newer->Token_No<<"  "<<newer->P_name<<"  "<<newer->P_age<<"  "<<newer->payment<<endl;
	        newpatient1.close();
	        cout <<endl;
	    	newer->next = NULL;
		    newer->prev = NULL;
		
		if (head== NULL) 
		{
			head = newer;
			return;
		}
		head->prev= newer;
		newer->next = head;
		head = newer; 
		cout<< "RECORD INSERTED AT BEGINNING"<<endl; 	
int choice0;
	cout << " Go back to menu ?\n ";
	cout <<"Yes=1   No=2 :>";
	cin >>choice0;
	
	if (choice0==1)
	{
		system("CLS");
		home2();
	}
	else if (choice0==2)
	{
		system("CLS");
		exit();
	}

}


//SEARCH THROUGH ID OF DOCTOR;

void search_doctors()
{
	system("CLS");
	system("color 1f");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout <<"\t\t\tLOADING PROGRAM";
	for (int i=0;i<6;i++)
	{
		Sleep (500);
	 cout << ".";
	}
	system("color 4f");
	system("CLS");
		int ID;
	int age;
	long int salary;
	string name;
	
	char ch;
		if (head==NULL)
		{
			cout<<"OOPS! LIST IS EMPTY"<<endl;
			cout<<"DO YOU WANT TO ADD A NEW RECORD (Y/N)"<<endl;
			cin>>ch;
			if (ch=='Y'|| ch=='y')
			{
				register_any();
				
			}
			else 
			{
				home();
			}
		}
		else 
		{
			int val;
			cout<<"ENTER THE DOCTOR ID YOU WANT TO SEARCH"<<endl;
			cin>>val;
			node *p=head; 
			while(p!=NULL)
			{
				if(p->ID==val)
				{
					cout<<"INFORMATION OF ALL EMPLOYEES"<<endl;
					cout<<"ID"<<"\t"<<"NAME"<<"\t"<<"AGE"<<"\t"<<"SALARY"<<endl;
					cout<<p->ID<<" "<<p->name<<" "<<p->age<<" "<<p->salary<<endl;
					system("pause");
					home();
					return;	
					
				}
				else
				{
					p=p->next;	
				}
			}
		
		}

	cout <<"Go back to menu ? \n " <<endl;
	cout <<"Yes=1   No=2 :>";
	int choice4;
	cin >>choice4;
	if (choice4==1)
	{
		system("CLS");
		home();
	}
	else if (choice4==2)
	{
		system("CLS");
		exit();
	}
}

//SEARCH PATIENTS BY TOKEN NO;

void search_patients()
{
		system("CLS");
	system("color 1f");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout <<"\t\t\tLOADING PROGRAM";
	for (int i=0;i<6;i++)
	{
		Sleep (500);
	 cout << ".";
	}
	system("color f0");
	system("CLS");
	int Token_No;
	int P_age;
	int payment;
	string P_name;
	
	char ch;
		if (head==NULL)
		{
			cout<<"OOPS! LIST IS EMPTY"<<endl;
			cout<<"DO YOU WANT TO ADD A NEW RECORD (Y/N)"<<endl;
			cin>>ch;
			if (ch=='Y'|| ch=='y')
			{
				add();
				
			}
			else 
			{
				home2();
			}
		}
		else 
		{
			int val;
			cout<<"ENTER THE PATIENT'S TOKEN NO YOU WANT TO SEARCH"<<endl;
			cin>>val;
			node *p=head; 
			while(p!=NULL)
			{
				if(p->Token_No==val)
				{
					cout<<"INFORMATION OF ALL PATIENT"<<endl;
					cout<<"TOKEN NO"<<"PATIENTS NAME"<<"AGE "<<"PAYMENT"<<endl;
					cout<<p->Token_No<<" "<<p->P_name<<" "<<p->P_age<<" "<<p->payment<<endl;
					system("pause");
					home2();
					return;	
				}
				else
				{
					p=p->next;	
				}
			}
			home2();
		}

	cout <<"Go back to menu ? \n " <<endl;
	cout <<"Yes=1   No=2 :>";
	int choice4;
	cin >>choice4;
	if (choice4==1)
	{
		system("CLS");
		home2();
	}
	else if (choice4==2)
	{
		system("CLS");
		exit();
	}
	
}



//UPDATE INFO REGARDING DOCTORS;

void update_doc()
{
	system("CLS");
	system("color 1f");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout <<"\t\t\tLOADING PROGRAM..";
	for (int i=0;i<4;i++)
	{
		Sleep (500);
	 cout << ".";
	}
	system("color 0f");
	system("CLS");
	int ID;
	int age;
	int salary;
	string name;
	
		char ch;
		if (head==NULL)		
		{
			cout<<"OOPS! LIST IS EMPTY"<<endl;
			cout<<"DO YOU WANT TO ADD A NEW RECORD (Y/N)"<<endl;
			cin>>ch;
			if (ch=='Y'|| ch=='y')
			{
				register_any();
				
			}
			else 
			{
				home();
			}
		}
		else			
		{
			int val;
			cout<<"ENTER THE ID OF DOCTOR YOU WANT TO UPDATE"<<endl;
			cin>>val;		
			node *p=head;
			while (p!=NULL)		
			{
				if(p->ID==val)		
				{
					cout<<"ENTER THE NEW NAME OF DOCTOR"<<endl;
					cin>>p->name;	
					cout<<"ENTER THE NEW AGE OF DOCTOR"<<endl;
					cin>>p->age;
					cout<<"ENTER THE NEW SALARY OF DOCTOR"<<endl;
					cin>>p->salary;
				}
				p=p->next;		
			}
			cout<<"RECORD HAS BEEN SUCCESSFULLY UPDATED"<<endl;
		}
    system("pause");
    cout << "Go back to menu ? 1/2 = "<<endl;
    int decision2;
    cin >>decision2;
    if (decision2==1)
    {
    	system("CLS");
    	home();
	}
	if (decision2==2)
	{
		system("CLS");
		update_doc();
	}
}
//UPDATE INFO REGARDING PATIENTS;

void update_patients()
{
	system("CLS");
	system("color 1f");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout <<"\t\t\tLOADING PROGRAM..";
	for (int i=0;i<4;i++)
	{
		Sleep (500);
	 cout << ".";
	}
	system("color 0f");
	system("CLS");
	int Token_No;
	int P_age;
	int payment;
	string P_name;
	
	char ch;
		if (head==NULL)		
		{
			cout<<"OOPS! LIST IS EMPTY"<<endl;
			cout<<"DO YOU WANT TO ADD A NEW RECORD (Y/N)"<<endl;
			cin>>ch;
			if (ch=='Y'|| ch=='y')
			{
				add();
				
			}
			else 
			{
				home2();
			}
		}
		else			
		{
			int val;
			cout<<"ENTER THE TOKEN NO OF PATIENT YOU WANT TO UPDATE"<<endl;
			cin>>val;		
			node *p=head;
			while (p!=NULL)		
			{
				if(p->Token_No==val)		
				{
					cout<<"ENTER THE NEW NAME OF PATIENT"<<endl;
					cin>>p->P_name;	
					cout<<"ENTER THE NEW AGE OF PATIENT"<<endl;
					cin>>p->P_age;
					cout<<"ENTER THE NEW PAYMENT OF PATIENT"<<endl;
					cin>>p->payment;
				}
				p=p->next;		
			}
			cout<<"RECORD HAS BEEN SUCCESSFULLY UPDATED"<<endl;
		}
	
	system("pause");
    cout << "Go back to menu ? 1/2 = "<<endl;
    int decision4;
    cin >>decision4;
    if (decision4==1)
    {
    	system("CLS");
    	home2();
	}
	if (decision4==2)
	{
		system("CLS");
		update_patients();
	}
}





void del_doc()		
	{
		char ch;
		if (head==NULL)
		{
			cout<< "OOPS! LIST IS EMPTY"<<endl;
			cout<<"DO YOU WANT TO ADD NEW RECORD (Y/N)"<<endl;
			cin>>ch;
			if (ch=='Y'|| ch=='y')
			{
				register_any();
				
			}
			else 
			{	
				home();
			}	
		}
		else
		{
			node *tmp=head;
			
			head=tmp->next;
			head->prev=NULL;
			delete tmp;
			cout<<"RECORD HAS BEEN DELETED SUCCESSFULLY"<<endl;
		}		
	}
	
	
void del_last_doc()
	{
		char ch;
		if (head==NULL)
		{
			cout<< "OOPS! LIST IS EMPTY"<<endl;
			cout<<"DO YOU WANT TO ADD NEW RECORD (Y/N)"<<endl;
			cin>>ch;
			if (ch=='Y'|| ch=='y')
			{
				register_any();
				
			}
			else 
			{	
				home();
			}	
		}
		else
		{
			node *p=head;
			node *tmp;			
			while (p->next->next!=NULL)
			{
				p=p->next;
			}
			tmp=p->next;
			p->next=NULL;
			delete tmp;
		}
		system("pause");
	}
			
			
//DELETE AT ANY POSITION			
			
			
void del_pos_doc()
	{
		char ch;
		if (head==NULL)
		{
			cout<< "OOPS! LIST IS EMPTY"<<endl;
			cout<<"DO YOU WANT TO ADD NEW RECORD (Y/N)"<<endl;
			cin>>ch;
			if (ch=='Y'|| ch=='y')
			{
				register_any();
				
			}
			else 
			{	
				home();
			}	
		}
		else
		{
			int val;
			cout<<"MAKE SURE THAT THE GIVEN ID IS NOT THE FIRST ONE OR THE LAST ONE"<<endl;
			cout<<"ENTER THE ID OF THE RECORD YOU WANT TO DELETE"<<endl;
			cin>>val;
			node *p=head;
			node *temp;
			while(p->next!=NULL)
			{
				if(p->next->ID==val)
				{
					temp=p->next;
					p->next=temp->next;
					temp->next->prev=temp->prev;
					delete temp;
				}
				p=p->next;
			}
			system("pause");
			home();
		}
	}



void del_pat()		
	{
		char ch;
		if (head==NULL)
		{
			cout<< "OOPS! LIST IS EMPTY"<<endl;
			cout<<"DO YOU WANT TO ADD NEW RECORD (Y/N)"<<endl;
			cin>>ch;
			if (ch=='Y'|| ch=='y')
			{
				add();
				
			}
			else 
			{	
				home2();
			}	
		}
		else
		{
			node *tmp=head;
			
			head=tmp->next;
			head->prev=NULL;
			delete tmp;
			cout<<"RECORD HAS BEEN DELETED SUCCESSFULLY"<<endl;
		}		
	}
	
	
void del_last_pat()
	{
		char ch;
		if (head==NULL)
		{
			cout<< "OOPS! LIST IS EMPTY"<<endl;
			cout<<"DO YOU WANT TO ADD NEW RECORD (Y/N)"<<endl;
			cin>>ch;
			if (ch=='Y'|| ch=='y')
			{
				add();
				
			}
			else 
			{	
				home2();
			}	
		}
		else
		{
			node *p=head;
			node *tmp;			
			while (p->next->next!=NULL)
			{
				p=p->next;
			}
			tmp=p->next;
			p->next=NULL;
			delete tmp;
		}
		system("pause");
		home2();
	}
			
			
//DELETE AT ANY POSITION			


void del_pos_pat()
	{
		char ch;
		if (head==NULL)
		{
			cout<< "OOPS! LIST IS EMPTY"<<endl;
			cout<<"DO YOU WANT TO ADD NEW RECORD (Y/N)"<<endl;
			cin>>ch;
			if (ch=='Y'|| ch=='y')
			{
				add();
				
			}
			else 
			{	
				home();
			}	
		}
		else
		{
			int val;
			cout<<"MAKE SURE THAT THE GIVEN ID IS NOT THE FIRST ONE OR THE LAST ONE"<<endl;
			cout<<"ENTER THE ID OF THE RECORD YOU WANT TO DELETE"<<endl;
			cin>>val;
			node *p=head;
			node *temp;
			while(p->next!=NULL)
			{
				if(p->next->Token_No==val)
				{
					temp=p->next;
					p->next=temp->next;
					temp->next->prev=temp->prev;
					delete temp;
				}
				p=p->next;
			}
		}
		system("pause");
		home2();
	}				
			
	
	
	
	
	
//DISPLAY ALL;

void display_doc()
{
			system("CLS");
	system("color 1f");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout <<"\t\t\tLOADING PROGRAM";
	for (int i=0;i<6;i++)
	{
		Sleep (500);
	 cout << ".";
	}
	system("color 1f");
	int ID;
	int age;
	long int salary;
	string name;
	
		char ch;
		if(head==NULL)
		{
			cout<<"OOPS! LIST IS EMPTY"<<endl;
			cout<<"DO YOU WANT TO ADD A NEW RECORD (Y/N)"<<endl;
			cin>>ch;
			if (ch=='Y'|| ch=='y')
			{
				register_any();
				return;
			}
			else 
			{
				home();
			}
		}
		else
		{
			node *temp=head;
			//ifstream doctor("newdoctor.txt"); //accesing the file
	cout << "===============List of all doctors and nurses===============" <<endl;
	cout << "ID"<<" || "<<"Name"<<" || "<<"Age"<<" || "<<"Salary" <<endl;
	cout << "=============================================" <<endl;
	
while(temp!= NULL){

		cout <<temp->ID<<" || "<<temp->name<<" || "<<temp->age<<" || "<<temp->salary<<endl;

		temp=temp->next;
		}
	cout <<endl;
	system("pause");
	system("CLS");

				
			
		}
			cout <<"Do you want to add any doctor ?";
	cout <<"1=add   2=home :>";
	int a;
	cin>>a;
	switch(a)
	{
		case 1:
			register_any();
			break;
		default:
		    home();
	}
}



//display patients

void display_pat()
{
	system("CLS");
	system("color 1f");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout <<"\t\t\tLOADING PROGRAM";
	for (int i=0;i<6;i++)
	{
		Sleep (500);
	 cout << ".";
	}
	system("color 1f");
	system("CLS");
	int Token_No;
	int P_age;
	int payment;
	string P_name;
	
		char ch;
		if(head==NULL)
		{
			cout<<"OOPS! LIST IS EMPTY"<<endl;
			cout<<"DO YOU WANT TO ADD A NEW RECORD (Y/N)"<<endl;
			cin>>ch;
			if (ch=='Y'|| ch=='y')
			{
				add();
				return;
			}
			else 
			{
				home();
			}
		}
		else
		{
			node *temp=head;
			cout << "=====================List of patients=======================" <<endl;
	cout << "Token No"<<" || "<<"Patient Name"<<" || "<<"Patient Age"<<" || "<<" || "<<"Amount" <<endl;
	cout << "============================================================" <<endl;
	while(temp!= NULL)
{
	
		cout <<temp->Token_No<<" || "<<"\t\t"<<temp->P_name<<" || "<<"\t"<<temp->P_age<<" || "<<"\t" <<temp->payment<<endl;
	    temp=temp->next;
	}
	cout <<endl;
	system("pause");
	system("CLS");


	cout <<"Do you want to add any patient ?";
	cout <<"1=add   2=home :>";
	int a;
	cin>>a;
	switch(a)
	{
		case 1:
			add();
			break;
		default:
		    home2();
	}
	
	
	
	
	
}
}
//end of program;

void exit()
{
	system("color f1");
	system("CLS");
	cout << "==========Thankyou for visiting our clinic==========" <<endl;
	
	
	cout<<"  _______ _    _          _   _ _  ____     ______  _    _ "<<endl;
	cout<<" |__   __| |  | |   /\\   | \\ | | |/ /\\ \\   / / __ \\| |  | |"<<endl;
	cout<<"    | |  | |__| |  /  \\  |  \\| | ' /  \\ \\_/ / |  | | |  | |"<<endl;
	cout<<"    | |  |  __  | / /\\ \\ | . ` |  <    \\   /| |  | | |  | |"<<endl;
	cout<<"    | |  | |  | |/ ____ \\| |\\  | . \\    | | | |__| | |__| |"<<endl;
	cout<<"    |_|  |_|  |_/_/    \\_\\_| \\_|_|\\_\\   |_|  \\____/ \\____/  "<<endl;
	cout <<endl;
	cout<<"======SPECIAL THANKS TO SIR ADNAN && SIR IRFAN MUSTAFA ======"<<endl;
	cout << "              COMPUTER SCIENCE DEPARTMENT   " <<endl;
	cout << "                Students of BS(IT) 4A:       " <<endl;
	cout << "                    Group members:           " <<endl;
	cout << "                  1. SUMAIR ALI          " <<endl;
	cout << "                  2. SAAD Zafar           " <<endl;
	cout << "                  3. RIZWAN Ali          " <<endl;
	cout << "                  4. M.SHAHZEB CHAUDHRY    " <<endl;

}

//MAIN BODY;


int main()
{

	system("color 1f");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout <<"\t\t\tLOADING PROGRAM..";
	for (int i=0;i<4;i++)
	{
		Sleep (500);
	 cout << ".";
	}
	system("title **********************DENTAL CLINIC MANAGEMENT SYSTEM**********************");
	system("color f4");
	system("CLS");
	cout << "===========================       /^\\           ===========================" <<endl;
	cout << "=========================== /^\\  /___\\  /^\\     ===========================" <<endl;
	cout << "=========================== | |__| O |__| |     ===========================" <<endl;
	cout << "=========================== |_|__|___|__|_|     ===========================" <<endl;
	cout <<endl;
	cout << "\t             _________________________              " <<endl;
	cout << "\t************|  WELCOME TO LOGIN PAGE  |*************" <<endl;
	cout << "\t************|_________________________|************" <<endl;
	string username;
	string password;
	char a;
	cout << "\t\t\t USERNAME= " ;
	cin >>username;
	cout <<endl;
	cout << "\t\t\t PASSWORD= " ;
	do{
        a = getch();
        switch(a)
		{
        case 0://special keys. like: arrows, f1-12 etc.
            getch();//just ignore also the next character.
            break;
        case 13://enter
            cout<<endl;
            break;
        case 8://backspace
            if(password.length()>0)
			{
                password.erase(password.end()-1); //remove last character from string
                cout<<a<<' '<<a;//go back, write space over the character and back again.
            }
            break;
        default://regular ascii
            password += a;//add to string
            cout<<'*';//print `*`
            break;
        }
    }while(a!=13);
	
	if (username=="dental" && password=="123")
	{
		system("CLS");
		intro();
	}
	else if (username!="dental" && password!="123")
	{
		Beep(1500,750);
		Sleep(750);
		cout <<endl;
		cout <<"*********************\n";
		cout << "Error! Login Failed " <<endl;
		system("pause");
		system("CLS");
		main();
	}
	else if (username!="dental")
	{
		Beep(1500,750);
		Sleep(750);
		cout <<endl;
		cout <<"*********************";
		cout << "wrong username !" <<endl;
		system("pause");
		system("CLS");
		main();
	}
	else if (password!="123")
	{
		Beep(1500,750);
		Sleep(750);
		cout <<endl;
		cout <<"*********************";
		cout << "wrong password !" <<endl;
		system("pause");
		system("CLS");
		main();
	}
}

