#include <iostream>
#include <iomanip>
#include <string>				
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <cstdlib>
using namespace std;

/*************** Structure to store Login details *******************************************************/

struct loginType	//definition of structure data type
{
	string userName;
	string password;
};

/*************** Structure to store Students and Course details ****************************************************/

struct admoptions	//definition of structure data type
{
	int id;
	string sname;
	string encourse;
	int age;
	string email;
	
	int code;
	string newcourse;
	int capacity;
	int time;
	
	string course;
};

int main()
{
	int op;	// varaiables
	
	void AdministratorsLogin();	 // functions prototypes
	void StaffLogin();
	void StudentsLogin();
	void admOptions();
	void stfOptions();
	int stdOptions ();
	int printMenu();
	
	
	do
	{
		op=printMenu(); // display menu
		
		switch (op) // menu based selection with switch
		{
			case 1 : AdministratorsLogin(); // To Administrators Login
						system("pause");
						admOptions();
						break;
						
			case 2 : StaffLogin(); // To Staff Login
						system("pause"); 
						stfOptions();
						break;
						
			case 3 : StudentsLogin();	// To Students Login
						system("pause"); 
						stdOptions ();
						break;
									
			case 4 : cout <<"Exit" <<endl; // To Exit
						break;
						
			default : cout <<"Incorrect Choice... Try Again..." <<endl;	
						system("pause");
						printMenu();
						system("pause");
		}
	} while ( op != 4);	// end with option 4

	return 0;
}

/************************************ Main Menu ***********************************************************************/

int printMenu()  
{
	int choice;
	
	system ("cls");
	cout <<"*****************************************" <<endl;
	cout <<"*\tCentral University\t\t*" <<endl;
	cout <<"*\tThe Faculty of Science\t\t*" <<endl;
	cout <<"*****************************************" <<endl;
		
	cout <<endl;
	
	cout <<"\twelcome to the University......" <<endl;
	
	cout <<endl;
	cout <<"*****************************************\n\n" <<endl;
	
	cout <<"\tUSER LOGIN OPTIONS" <<endl;
	cout <<"-----------------------------------------\n" <<endl;
	cout <<endl;
	cout <<"1. Administrators Login" <<endl;
	cout <<"2. Staff Login" <<endl;
	cout <<"3. Student Login" <<endl;
	cout <<"4. Exit"<<endl;
	
	cout <<endl;
	
	cout<<"Please select your choice : ";
	cin>>choice;
	
	return choice;	
}

/************************* User Login ***************************************************************************************/

//--------- To login Administrator -------------------------------------------------------------------------------------

void AdministratorsLogin()   
{
	//void exit();
	
	loginType adm;		//declare variable
	int c=1;
	string UN="AdmUN", PW="AdmPW";
	
	system ("cls");
	cout <<"\nAdministrators Login Profile" <<endl;
	cout <<"***************************************************" <<endl; 
	
	while (c<=3)
	{
		cout <<"\nInput Your User Name : ";
		cin >> adm.userName;
		
		if (adm.userName==UN)
		{
			cout <<"Input Your password : ";
			cin >> adm.password;
			
			if (adm.password==PW)
			{
				cout <<"\nYou have logged in Successfully." <<endl; break;
			}	
			
			else 
			{
				cout <<"Your Password is incorrect" <<endl;
					if (c==3)
					{
						cout <<"SYSTEM IS LOCKED." <<endl; //break;
						exit(1);
					}				
				cout <<"You have " <<3-c <<" attempts remaining." <<endl;
			}			
		}
		else 
		{ 		
				if (c==3)
				{
					cout <<"SYSTEM IS LOCKED." <<endl; //break;
					exit(1);
				}
					
			cout <<"Your User Name is incorrect.. You have " <<3-c <<" attempts remaining." <<endl;
		}		
		c++;
	}
}

//------- To Staff Login ---------------------------------------------------------------------------------------------

void StaffLogin()   
{
	loginType stf;		//declare variable
	int c=1;
	string UN="StfUN", PW="StfPW";
	
	system ("cls");
	cout <<"\nStaff Login Profile" <<endl;
	cout <<"***************************************************" <<endl;  
	
	while (c<=3)
	{
		cout <<"\nInput Your User Name : ";
		cin >> stf.userName;
		
		if (stf.userName==UN)
		{
			cout <<"Input Your password : ";
			cin >> stf.password;
			
			if (stf.password==PW)
			{
				cout <<"\nYou have logged in Successfully." <<endl; break;
			}	
			
			else 
			{
				cout <<"Your Password is incorrect" <<endl;
					if (c==3)
					{
						cout <<"SYSTEM IS LOCKED." <<endl; //break;
						exit(1);
					}				
				cout <<"You have " <<3-c <<" attempts remaining." <<endl;
			}			
		}
		else 
		{ 		
				if (c==3)
				{
					cout <<"SYSTEM IS LOCKED." <<endl; //break;
					exit(1);
				}
					
			cout <<"Your User Name is incorrect.. You have " <<3-c <<" attempts remaining." <<endl;
		}		
		c++;
	}
}

//------- To Students Login -----------------------------------------------------------------------------------------

void StudentsLogin()   
{
	loginType std;		//declare variable
	int c=1;
	string UN="StdUN", PW="StdPW";
	
	system ("cls");
	cout <<"\nStudent Login Profile" <<endl;
	cout <<"***************************************************" <<endl; 
	
	while (c<=5)
	{
		cout <<"\nInput Your User Name : ";
		cin >> std.userName;
		
		if (std.userName==UN)
		{
			cout <<"Input Your password : ";
			cin >> std.password;
			
			if (std.password==PW)
			{
				cout <<"\nYou have logged in Successfully." <<endl; break;
			}	
			
			else 
			{
				cout <<"Your Password is incorrect" <<endl;
					if (c==5)
					{
						cout <<"SYSTEM IS LOCKED." <<endl; //break;
						exit(1);
					}				
				cout <<"You have " <<5-c <<" attempts remaining." <<endl;
			}			
		}
		else 
		{ 		
				if (c==5)
				{
					cout <<"SYSTEM IS LOCKED." <<endl; //break;
					exit(1);
				}
					
			cout <<"Your User Name is incorrect.. You have " <<5-c <<" attempts remaining." <<endl;
		}		
		c++;
	}
}

//----------------- Exit ------------------------------------------

/*void exit()
{
	cout <<"Exit...." <<endl;
}*/

/************************* Administrators *******************************************************************************/

//--------------------- Administrators System options ---------------------------------------------------

void admOptions()
{
	int Aop;
	
	int AdmOptions ();
	void addStudents();
	void addCourse();
	void readStudenttxt();
	void readEnrolltxt();
	int printMenu();
	void rOptions();
	
	
	do
	{
		Aop=AdmOptions ();	// display menu
		
		switch (Aop) // menu based selection with switch
		{
			case 1 : addStudents();
						system("pause");
						break;
	
			case 2 : addCourse();	
 						system("pause");
						break;
						
			case 3 : readStudenttxt();	
 						system("pause");
						break;
						
			case 4 : readEnrolltxt();	
 						system("pause");
						break;			
							
			case 5 : rOptions();	
 						system("pause");
						break;
						
			case 6 : cout <<"Exit" <<endl;
						printMenu();
						break;
							
			default : cout <<"Incorrect Choice... Try Again..." <<endl;	
								system("pause");
								printMenu();						
		} 
		
	} while (Aop!=6);	// end with option 3
}

//---------------- To Administrators Menu ---------------------------------------------------------------------------

int AdmOptions ()
{
	system ("cls");
	
	int choice1;
	
	cout <<"\nAdministrators System options" <<endl;
	cout <<"***************************************************" <<endl; 
	cout <<endl;
	
	cout <<"1. To Add New Student Records " <<endl;
	cout <<"2. To Add New Course Details" <<endl;
	cout <<"3. View New Student Records" <<endl;
	cout <<"4. View Student Enrolled Records" <<endl;
	cout <<"5. View Course Roster (Student records added by administrators can only be checked)" <<endl;
	cout <<"6. Exit " <<endl;
	cout <<endl;
	
	cout <<"Please select your choice : ";
	cin >>choice1;
	
	return choice1;

}

//-------------------- To Add New Student Recordes -------------------------------------------------------

void addStudents()
{
	system ("cls");
	
	ofstream SE;
	ofstream AI;
	ofstream PS; 
	ofstream CyS; 
	ofstream DC;
	ofstream CS; 
	ofstream IS;
	ofstream IT; 
	ofstream NE;
	ofstream Others;
	
	int printMenu();
	int AdmOptions ();
	void mainCourseList();
	admoptions student[10];	//declare variable
	
	cout<<"\nPlease Enter New Student Records...."<<endl;
	cout <<"==============================================================" <<endl; 
	
	mainCourseList();
	
	ofstream stdfile;
	stdfile.open("student.txt",ios::app); //ios::app use to add permanently
	
	stdfile <<"\n\nRegistered students" <<endl;
	stdfile <<"================" <<endl;
	stdfile <<"\n" <<setw(25) <<"Student ID No" <<setw(25) <<"Name" <<setw(25) <<"Course"  <<setw(25) <<"Course Code" <<setw(25) <<"Date";

	for (int i=0; i<10; i++)   //Used 5 students for the testing
	{	
		cout <<"\nStudent ID No : ";
		cin >>student[i].id;		
		cin.ignore();	//Add this line to clear the newline character
		stdfile <<"\n" <<setw(25) <<student[i].id;
		
		cout <<"\nStudent Name : ";
		getline(cin,student[i].sname);
		stdfile <<setw(25) <<student[i].sname;
		
		cout <<"\nEnrolled Course : ";
		getline(cin,student[i].encourse);	//Add this line to clear the newline character
		stdfile <<setw(25) <<student[i].encourse;	
		
		cout <<"\nCourse Code ( Input 4 Digits ) : ";
		cin >>student[i].code;
		cin.ignore();	//Add this line to clear the newline character
		
				switch (student[i].code) // This switch is used to save course details on separate course text files
		{
			case 1001 :  
						SE.open ("SE.txt",ios::app);
						SE <<setw(25) <<student[i].id <<setw(25) <<student[i].sname <<endl; 
						SE.close();
						break;
	
			case 1002 :  
						AI.open ("AI.txt",ios::app);
						AI <<setw(25) <<student[i].id <<setw(25) <<student[i].sname <<endl;;
						AI.close();
						break;
						
			case 1003 : 
						PS.open ("PS.txt",ios::app);
						PS <<setw(25) <<student[i].id <<setw(25) <<student[i].sname <<endl;
						PS.close();	
						break;					
			case 1004 : 
						CyS.open ("CyS.txt",ios::app);			
						CyS <<setw(25) <<student[i].id <<setw(25) <<student[i].sname <<endl;
						CyS.close();
						break;							
			case 1005 :  
						DC.open ("DC.txt",ios::app);
						DC <<setw(25) <<student[i].id <<setw(25) <<student[i].sname <<endl;
						DC.close();	
						break;		
			case 1011 : 
						CS.open ("CS.txt",ios::app);
						CS <<setw(25) <<student[i].id <<setw(25) <<student[i].sname <<endl;
						CS.close();	
						break;					
			case 1012 :  
						IS.open ("IS.txt",ios::app);
						IS <<setw(25) <<student[i].id <<setw(25) <<student[i].sname <<endl;
						IS.close();	
						break;					
			case 1013 : 
						IT.open ("IT.txt",ios::app);
						IT <<setw(25) <<student[i].id <<setw(25) <<student[i].sname <<endl;
						IT.close();	
						break;					
			case 1014 :  
						NE.open ("NE.txt",ios::app);
						NE <<setw(25) <<student[i].id <<setw(25) <<student[i].sname <<endl;
						NE.close();	
						break;					
			case 1015 : 
						Others.open ("Others.txt",ios::trunc);
						Others <<setw(25) <<student[i].id <<setw(25) <<student[i].sname <<endl;
						Others.close();
						break;
						
			default : cout <<"\nIncorrect Code... Try Again..." <<endl;	
								system("pause");
								printMenu();
			}
			
		stdfile <<setw(25) <<student[i].code <<setw(25) <<__DATE__;
		
		/*cout <<"\nAge : ";
		cin >>student[i].age;
		stdfile <<setw(25) <<student[i].age;*/
		
		cout <<"\n------------------------------------------------------" <<endl;
	} 
	stdfile.close();
}

//------------- To Add New Course Details -------------------------------------------------------------

void addCourse()
{
	system ("cls");
	
	void courselist();	
	
	admoptions course[2];	//declare variable
	
	cout<<"Please Enter New Course Details...."<<endl;
	cout <<"==============================================================" <<endl;
	cout <<"\nYou can add only below courses." <<endl;
	cout <<"\n1011. Computer Science" <<endl;
	cout <<"1012. Information System" <<endl;
	cout <<"1013. Information technology" <<endl;
	cout <<"1014. Network Engineering" <<endl;
	cout <<"1015. Others" <<endl;
	cout <<"\n------------------------------------------------------" <<endl;
	
	ofstream corsefile;
	corsefile.open("course.txt",ios::app);  //ios::app use to add permanently
	
	corsefile <<"\n\nCourse List" <<endl;
	corsefile <<"================" <<endl;
	corsefile <<"\n" <<setw(25) <<"Code" <<setw(25) <<"Course"  <<setw(25) <<"Capacity" <<setw(25) <<"Duration";

	
	for (int i=0; i<1; i++)
	{		
		cout <<"\nCourse Code : ";
		cin >>course[i].code;
		cin.ignore();	//Add this line to clear the newline character
		corsefile <<"\n" <<setw(25) <<course[i].code;
		
		cout <<"\nCourse Name : ";
		getline(cin,course[i].newcourse);
		//cin >>course[i].newcourse;
		corsefile <<setw(25) <<course[i].newcourse;
							
		cout <<"\nMaximum Capacity ( Input like 012 format ) :  ";
		cin >>course[i].capacity;
		corsefile <<setw(25) <<course[i].capacity;
							
		cout <<"\nTime Duration ( Input like 012 format ) : hours ";
		cin >>course[i].time;
		corsefile <<setw(25) <<course[i].time;
		
		cout <<"\n------------------------------------------------------" <<endl;
	}
	
	corsefile.close();
}

//-------------------- View New Student Records ( Read student.txt File ) -------------------------------------------

void readStudenttxt() 
{
	system ("cls");
	
    ifstream Studenttxt("student.txt");
    string line;

    if (!Studenttxt) {
        cout << "Error: Could not open students.txt file.\n";
        return;
    }

    cout << "\n--- Registered Students ---\n";
    
    while (getline(Studenttxt, line)) 
	{
        cout << line << endl;
    }

    Studenttxt.close();
}

//-------------------- View Student enrolled Records ( Read enrolled.txt File ) -------------------------------------------

void readEnrolltxt() 
{
	system ("cls");
	
    ifstream Enrolltxt("enrolled.txt");
    string line;

    if (!Enrolltxt) {
        cout << "Error: Could not open enrolled.txt file.\n";
        return;
    }

    cout << "\n--- Enrolled Students ---\n";
    
    while (getline(Enrolltxt, line)) 
	{
        cout << line << endl;
    }

    Enrolltxt.close();

}

/************************* Straff *******************************************************************************/

//--------------------- Staff System options ---------------------------------------------------

void stfOptions()
{
	int Sfop;
	
	int StfOptions ();
	void readStudenttxt();
	void readEnrolltxt();
	void rOptions();
	int printMenu();
	
	
	do
	{
		Sfop=StfOptions ();	// display menu
		
		switch (Sfop) // menu based selection with switch
		{	
			case 1 : readStudenttxt();	
 						system("pause");
						break;
						
			case 2 : readEnrolltxt();	
 						system("pause");
						break;	
						
			case 3 : rOptions();	
 						system("pause");
						break;		
							
			case 4 : cout <<"Exit" <<endl;
						printMenu();
						break;
							
			default : cout <<"Incorrect Choice... Try Again..." <<endl;	
								system("pause");
								printMenu();						
		} 
		
	} while (Sfop!=3);	// end with option 3
}

//---------------- To Staff Menu ---------------------------------------------------------------------------

int StfOptions ()
{
	system ("cls");
	
	int choice2;
	
	cout <<"\nStaff System options" <<endl;
	cout <<"***************************************************" <<endl; 
	cout <<endl;
	
	cout <<"1. View New Student Records " <<endl;
	cout <<"2. View Student Enrolled Records" <<endl;
	cout <<"3. View Course Roster (Student records added by administrators can only be checked)" <<endl;
	cout <<"4. Exit" <<endl;
	cout <<endl;
	
	cout <<"Please select your choice : ";
	cin >>choice2;
	
	return choice2;

}
/************************* Students *******************************************************************************/

//--------------------- Students System options ---------------------------------------------------

void stdOptions()
{
	int Stop;
	
	int StdOptions ();
	void entrollCourse();
	void withdrawCourse();
	int enrollAndwithdrawal();
	int printMenu();
	
	
	do
	{
		Stop=StdOptions ();	// display menu
		
		switch (Stop) // menu based selection with switch
		{
			case 1 : entrollCourse();
						system("pause");
						break;
	
			case 2 : withdrawCourse();	
 						system("pause");
						break;
						
			case 3 : enrollAndwithdrawal();	
 						system("pause");
						break;
							
			case 4 : cout <<"Exit" <<endl;
						printMenu();
						break;
							
			default : cout <<"Incorrect Choice... Try Again..." <<endl;	
								system("pause");
								printMenu();						
		} 
		
	} while (Stop!=4);	// end with option 3
}

//---------------- To Students Menu ---------------------------------------------------------------------------

int StdOptions ()
{
	system ("cls");
	
	int choice3;
	
	cout <<"\nStudents System options" <<endl;
	cout <<"***************************************************" <<endl; 
	cout <<endl;
	
	cout <<"1. Enroll In Course " <<endl;
	cout <<"2. Withdraw From Course" <<endl;
	cout <<"3. Enroll and Withdraw Course" <<endl;
	cout <<"4. Exit" <<endl;
	cout <<endl;
	
	cout <<"GUIDELINES.." <<endl;
	cout <<"---------------------\n";
	cout <<" 1 Step : Select your choice as 1 to add your enroll course details in the correct database." <<endl;
	cout <<" 2 Step : Select your choice as 2 to add your withdrawal course in the correct database." <<endl;
	cout <<" 3 Step : Select your choice as 3....." <<endl;
	
	cout <<"\nPlease select your choice : ";
	cin >>choice3;
	
	return choice3;

}

// ------------------- Available Course List ------------------------------------------------------------------

void mainCourseList()
{
	cout <<"\nAvailable Courses\n" <<endl;
	cout <<"1001. Software Engineering" <<endl;
	cout <<"1002. Artificial Intelligence" <<endl;
	cout <<"1003. Physical Science" <<endl;
	cout <<"1004. Cyber Security" <<endl;
	cout <<"1005. Data Science" <<endl;
	cout <<"1011. Computer Science" <<endl;
	cout <<"1012. Information System" <<endl;
	cout <<"1013. Information Technology" <<endl;
	cout <<"1014. Network Engineering" <<endl;
	cout <<"1015. Others" <<endl;
	cout <<"\n------------------------------------------------------" <<endl;
}

//----------------- Enroll In Course ---------------------------------------------------------------------------

void entrollCourse()
{
	system ("cls");
	
	admoptions student[2];
	admoptions ecourse[2];
	
	void mainCourseList();
	void mainCourseList();
		
	cout<<"\nEnroll Process...."<<endl;
	cout <<"===================" <<endl;
	cout <<"\nYou can enroll in one course at a time." <<endl;
	
	ofstream enrollfile;
	enrollfile.open("Enroll.txt",ios::app); 
	
	mainCourseList();
	
	cout <<"\n------------------------------------------------------" <<endl;
	
	enrollfile <<"\n" <<"\n" <<setw(25) <<"Student ID No" <<setw(25) <<"Code" <<setw(25) <<"Course" <<setw(25) <<" Date";
	
	for (int i=0; i<1; i++)
	{
		cout <<"\nStudent ID No : ";
		cin >>student[i].id;		
		cin.ignore();	//Add this line to clear the newline character
		enrollfile <<"\n" <<setw(25) <<student[i].id;
		
		cout <<"\nCourse Code : ";
		cin >>ecourse[i].code;
		cin.ignore();	//Add this line to clear the newline character
		enrollfile <<setw(25) <<ecourse[i].code;
		
		cout <<"\nCourse Name : ";
		getline(cin,ecourse[i].course);
		enrollfile <<setw(25) <<ecourse[i].course;
		
		enrollfile <<setw(25) <<__DATE__ <<endl;
		
		cout <<"\n------------------------------------------------------" <<endl;
	}
	


	enrollfile.close();

}

//----------------- Withdraw From Course ---------------------------------------------------------------------------
void withdrawCourse()
{
	system ("cls");
	
	admoptions student;
	admoptions wcourse;
	
	void mainCourseList();
		
	cout<<"\nWithdraw Process...."<<endl;
	cout <<"====================" <<endl;
	cout <<"\nYou can withdraw in one course at a time." <<endl;
	
	ofstream withdrawfile;
	withdrawfile.open("Withdraw.txt",ios::app); 
	
	cout <<"\n------------------------------------------------------" <<endl;
	
	withdrawfile <<"\n" <<"\n" <<setw(25) <<"Student ID No" <<setw(25) <<"Code" <<setw(25) <<"Course" <<setw(25) <<" Date";
	
	for (int i=0; i<1; i++)
	{
		cout <<"\nStudent ID No : ";
		cin >>student.id;		
		cin.ignore();	//Add this line to clear the newline character
		withdrawfile <<"\n" <<setw(25) <<student.id;
		
		cout <<"\nCourse Code : ";
		cin >>wcourse.code;
		cin.ignore();	//Add this line to clear the newline character
		withdrawfile <<setw(25) <<wcourse.code;
		
		cout <<"\nCourse Name : ";
		getline(cin,wcourse.course);
		withdrawfile <<setw(25) <<wcourse.course;
		
		withdrawfile <<setw(25) <<__DATE__ <<endl;
		
		cout <<"\n------------------------------------------------------" <<endl;
	}
	
	withdrawfile.close();

} 

// ------------------ Enroll and Withdraw Recodes --------------------------------------

int enrollAndwithdrawal()
{
	system ("cls");
	
	int num;
	int length = 0, ID;
	int readfile( admoptions Records[100] );
	void updateFile(admoptions Records[100], int& length, int id);
	void addtoFile();
	admoptions myRecords[100];
	
	length =readfile(myRecords);
	//cout<<"Student Records length  : "<<length<<endl;

	addtoFile();	length++;
	length = readfile(myRecords);
	//cout<<"Array length  : "<<length<<endl;
	
	cout<<"\nTo Withdraw Recodes\n";
	cout <<"-----------------------------------------\n";
	
		cout<<"If you want to continue, press 0... or " <<endl;
	cout<<"If you want to skip withdraw step, Please enter 1 : ";
	cin>>num;
	
	
	switch(num)
	{
		case 1 : cout<<"\nYou skiped withdraw step..." <<endl;
					//cin>>num;
					break;
		
		default : system ("cls");
					//mainCourseList();
		 			cout<<"\nEnter Student ID Number to remove : ";
					cin>>ID;
					cout<<"\nATTENTION, PLEASE....." <<endl;
					cout<<"If you enter the incorrect Student ID, Your course will not remove the entrolled record." <<endl;
					//cin>>ID;
					updateFile(myRecords,length, ID); 
					length = readfile(myRecords);
					//cout<<"Array length  : "<<length<<endl;
					break;
	}
	
	
	/*cout<<"Enter Student ID Number to remove : ";
	cin>>ID;
	cout<<"\nATTENTION, PLEASE....." <<endl;
	cout<<"If you enter the incorrect Student ID, Your course will not remove the entrolled record." <<endl;
	//cin>>ID;
	updateFile(myRecords,length, ID); 
	length = readfile(myRecords);
	//cout<<"Array length  : "<<length<<endl;*/
	
	return 0;
}

int readfile( admoptions Records[100] )
{
	int x = 0;
	ifstream enfile;
	enfile.open("enrolled.txt");
	//cout<<"\n\nSTUDENT DETAILS"<<endl;	
	//enfile>>Records[x].id>>Records[x].code;
	
	cout <<"Enroll and Withdraw Recodes" <<endl;
	cout <<"************************************************\n" <<endl;
	
	while (enfile)
	{
		//cout<<Records[x].id<<" : "<<Records[x].code<<endl;
		x++;
			enfile>>Records[x].id>>Records[x].code;
		
	}
	enfile.close();
	//cout<<"x: "<<x<<endl;	
	return x;
}

void addtoFile()
{
	void mainCourseList();
	ofstream enfile;
	enfile.open("enrolled.txt", ios::app);
	int sID;
	int code;
	int num;
	
	cout<<"\nTo Enroll Recodes\n";
	cout <<"-----------------------------------------\n";
	
	cout<<"If you want to continue, press 0... or " <<endl;
	cout<<"If you want to skip enroll step, Please enter 1 : ";
	cin>>num;
	
	
	switch(num)
	{
		case 1 : cout<<"\nYou skiped entrol step..." <<endl;
					//cin>>num;
					break;
		
		default : system ("cls");
					mainCourseList();
		 			cout<<"\nPlease enter student ID and Course Code ( Input like 0123 4567 format ) : ";
					cin>>sID>>code;
					enfile<<endl<<sID<<"\t"<<code<<endl;
					break;
	}
	
	/*cout<<"\nPlease enter student ID and Course Code : ";
	cin>>sID>>code;
	enfile<<endl<<sID<<"\t"<<code<<endl;*/

	enfile.close();
	
	system("pause");
	system ("cls");
}

void updateFile(admoptions Records[100], int& length, int id)
{
	ofstream ofile;
	ofile.open("enrolled.txt");
	//cout<<"update Length : "<<length<<endl;
		for (int x = 0; x < length; x++)
	{
		if (Records[x].id!= id)
		{
			ofile<<Records[x].id<<"\t"<<Records[x].code<<endl;
		}
		else
			cout <<id <<" " <<"Removed..\n"/*<<length*/<<endl;			
	}
	
		cout<<"\nYou can Exit in ";
	
	ofile.close();	
}


/************************************ Check Course Roster **********************************************************************/

//------------------------ 1001. Software Engineering ---------------------------------------------------
void SEtxt() 
{
	system ("cls");
	
    ifstream Enrolltxt("SE.txt");
    string line;

    if (!Enrolltxt) {
        cout << "Error: Could not open SE.txt file.\n";
        return;
    }

    cout << "\n\n--- Enrolled Software Engineering Students ---\n\n";
    
    while (getline(Enrolltxt, line)) 
	{
        cout << line << endl;
    }

    Enrolltxt.close();
} 

//------------------------ 1002. Artificial Intelligence ---------------------------------------------------
void AItxt() 
{
	system ("cls");
	
    ifstream Enrolltxt("AI.txt");
    string line;

    if (!Enrolltxt) {
        cout << "Error: Could not open AI.txt file.\n";
        return;
    }

    cout << "\n\n--- Enrolled Artificial Intelligence Students ---\n\n";
    
    while (getline(Enrolltxt, line)) 
	{
        cout << line << endl;
    }

    Enrolltxt.close();
}

//------------------------ 1003. Physical Science ---------------------------------------------------
void PStxt() 
{
	system ("cls");
	
    ifstream Enrolltxt("PS.txt");
    string line;

    if (!Enrolltxt) {
        cout << "Error: Could not open PS.txt file.\n";
        return;
    }

    cout << "\n\n--- Enrolled Physical Science Students ---\n\n";
    
    while (getline(Enrolltxt, line)) 
	{
        cout << line << endl;
    }

    Enrolltxt.close();
}

//------------------------ 1004. Cyber Security ---------------------------------------------------
void CyStxt() 
{
	system ("cls");
	
    ifstream Enrolltxt("CyS.txt");
    string line;

    if (!Enrolltxt) {
        cout << "Error: Could not open CyS.txt file.\n";
        return;
    }

    cout << "\n\n--- Enrolled Cyber Security Students ---\n\n";
    
    while (getline(Enrolltxt, line)) 
	{
        cout << line << endl;
    }

    Enrolltxt.close();
}

//------------------------ 1005. Data Science ---------------------------------------------------
void DCtxt() 
{
	system ("cls");
	
    ifstream Enrolltxt("DC.txt");
    string line;

    if (!Enrolltxt) {
        cout << "Error: Could not open DC.txt file.\n";
        return;
    }

    cout << "\n\n--- Enrolled Data Science Students ---\n\n";
    
    while (getline(Enrolltxt, line)) 
	{
        cout << line << endl;
    }

    Enrolltxt.close();
}

//------------------------ 1011. Computer Science ---------------------------------------------------
void CStxt() 
{
	system ("cls");
	
    ifstream Enrolltxt("CS.txt");
    string line;

    if (!Enrolltxt) {
        cout << "Error: Could not open CS.txt file.\n";
        return;
    }

    cout << "\n\n--- Enrolled Computer Science Students ---\n\n";
    
    while (getline(Enrolltxt, line)) 
	{
        cout << line << endl;
    }

    Enrolltxt.close();
}

//------------------------ 1012. Information System ---------------------------------------------------
void IStxt() 
{
	system ("cls");
	
    ifstream Enrolltxt("IS.txt");
    string line;

    if (!Enrolltxt) {
        cout << "Error: Could not open IS.txt file.\n";
        return;
    }

    cout << "\n\n--- Enrolled Information System Students ---\n\n";
    
    while (getline(Enrolltxt, line)) 
	{
        cout << line << endl;
    }

    Enrolltxt.close();
}

//------------------------ 1013. Information Technology ---------------------------------------------------
void ITtxt() 
{
	system ("cls");
	
    ifstream Enrolltxt("IT.txt");
    string line;

    if (!Enrolltxt) {
        cout << "Error: Could not open IT.txt file.\n";
        return;
    }

    cout << "\n\n--- Enrolled Information Technology Students ---\n\n";
    
    while (getline(Enrolltxt, line)) 
	{
        cout << line << endl;
    }

    Enrolltxt.close();
}

//------------------------ 1014. Network Engineering ---------------------------------------------------
void NEtxt() 
{
	system ("cls");
	
    ifstream Enrolltxt("NE.txt");
    string line;

    if (!Enrolltxt) {
        cout << "Error: Could not open NE.txt file.\n";
        return;
    }

    cout << "\n\n--- Enrolled Network Engineering Students ---\n\n";
    
    while (getline(Enrolltxt, line)) 
	{
        cout << line << endl;
    }

    Enrolltxt.close();
}

//------------------------ 1015. Others ---------------------------------------------------
void Otherstxt() 
{
	system ("cls");
	
    ifstream Enrolltxt("Others.txt");
    string line;

    if (!Enrolltxt) {
        cout << "Error: Could not open Others.txt file.\n";
        return;
    }

    cout << "\n\n--- Enrolled Others Students ---\n\n";
    
    while (getline(Enrolltxt, line)) 
	{
        cout << line << endl;
    }

    Enrolltxt.close();
}

//--------------------- Course Roster options ---------------------------------------------------

void rOptions()
{
	int Rop;
	
	int ROptions ();
	
	void SEtxt();
	void AItxt();
	void PStxt();
	void CyStxt();
	void DCtxt();
	void CStxt();
	void IStxt();
	void ITtxt();
	void NEtxt();
	void Otherstxt();
	
	int printMenu();
	
	
	do
	{
		Rop=ROptions ();	// display menu
		
		switch (Rop) // menu based selection with switch
		{
			case 1 : SEtxt();
						system("pause");
						break;
	
			case 2 : AItxt();	
 						system("pause");
						break;
						
			case 3 : PStxt();	
 						system("pause");
						break;
						
			case 4 : CyStxt();	
 						system("pause");
						break;			
							
			case 5 : DCtxt();
						system("pause");
						break;
						
			case 6 : CStxt();
						system("pause");
						break;
	
			case 7 : IStxt();	
 						system("pause");
						break;
						
			case 8 : ITtxt();	
 						system("pause");
						break;
						
			case 9 : NEtxt();	
 						system("pause");
						break;
						
			case 10 : Otherstxt();	
 						system("pause");
						break;									
							
			case 0 : cout <<"Exit" <<endl;
						printMenu();
						break;						
							
			default : cout <<"Incorrect Choice... Try Again..." <<endl;	
								system("pause");
								ROptions ();						
		} 
		
	} while (Rop!=0);	// end with option 3
}

//---------------- To Course Roster Menu ---------------------------------------------------------------------------

int ROptions ()
{
	system ("cls");
	
	int choiceR;
	
	cout <<"\nCourse Roster options" <<endl;
	cout <<"***************************************************" <<endl; 
	cout <<endl;
	
	cout <<"1. View Software Engineering Student Records" <<endl;
	cout <<"2. View Artificial Intelligence Student Records" <<endl;
	cout <<"3. View Physical Science Student Records" <<endl;
	cout <<"4. View Cyber Security Student Records" <<endl;
	cout <<"5. View Data Science Student Records" <<endl;
	cout <<"6. View Computer Science Student Records" <<endl;
	cout <<"7. View Information System Student Records" <<endl;
	cout <<"8. View Information Technology Student Records" <<endl;
	cout <<"9. View Network Engineering Student Records" <<endl;
	cout <<"10. View Others Student Records" <<endl;
	cout <<"0. Exit " <<endl;	
	cout <<endl;
	
	cout <<"Please select your choice : ";
	cin >>choiceR;
	
	return choiceR;

}

