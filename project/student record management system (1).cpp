#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
#include<iomanip>
#include<string>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<cstdio>
#include<windows.h>
#include<conio.h>
using namespace std;
string temp;
class student
{
public:
	char name[20];
	char address[100];
	char gender[20];
	char father_name[20];
	char department[20];
	char section[20];
	char email[100];
	char kinship[20];
	char overseas[20];
	char reg_no[26];
	char blood[4];
	char dob[15];
	char ph_no[15];
	long long int  reg;
	char nic[14];
	float cgpa;

public:
	void getting(void);
	void showing(void);
	long long int getreg_no();
	string getname();
};

void student::getting(void)
{
	cout<< "\n\n";
    cout<< "\t\t\t\t=======CREATE A STUDENT RECORD========\n\n";
	cout << "\nEnter Name: ";
	cin.ignore();
	cin.getline(name,20);
	for(int i = 0;i < strlen(name); i++){
		char a = name[i];
		if(isdigit(a)){
			    cout<< "Wrong Input !!!" << endl;
				cout<< "Enter Your Name Without any Digit : ";
				cin.getline(name, 20);
		i = -1;
		continue;
		}

	}


	cout<<"\nEnter your Registration number(Last 4 digits only) : ";
	string reg_num;
	ssh:
	cin >> reg_num;

	if(reg_num.length() != 4){
		cout<< "Invalid Input !!!" << endl;
		cout<< "Enter Your Registration number using digits only : ";
		cin.ignore(1000,'\n');

		goto ssh;
	}
	for(int i = 0; i < reg_num.length(); i++)
	{
		if(!isdigit(reg_num[i]))
		{
			cout<< "Invalid Input !!!" << endl;
			cout<< "Enter Your Registration number using digits only : ";
			cin.ignore(1000,'\n');

			goto ssh;
		}
	}
	reg = stoi(reg_num);
	cout<<"\nEnter Your Gender : ";
	cin.ignore();
	cin.getline(gender, 20);
	for(int i = 0;i < strlen(gender); i++){
		char a = gender[i];
		if(isdigit(a)){
			    cout<< "Wrong Input !!!" << endl;
				cout<< "Enter Your Gender Without any Digit : ";
				cin.getline(gender, 20);
		i = -1;
		continue;
		}

	}
	cout<<"\nEnter Your Father Name : ";

	cin.getline(father_name, 20);
	for(auto a:father_name){
		if(isalpha(a)){
			temp = father_name;
		}
		else if(isdigit(a)){
			    cout<< "Wrong Input !!!" << endl;
				cout<< "Enter Your Father Name Without any Digit : ";
				cin.getline(father_name, 20);

		}

	}
	cout<<"\nEnter your NIC : ";
	cin.getline(nic, 14);
	for(auto a:nic){
		if(isdigit(a)){
			temp = nic;
		}
		else if(isalpha(a))

		{
		        cout<< "Wrong Input !!!" << endl;
				cout<< "Enter Your NIC Without any Alphabet : ";
				cin.getline(nic, 14);
				cout<< endl;
			}


	}

	cout << "\nEnter Your Address : ";
	cin.ignore();
	cin.getline(address, 100);
	cout << "\nEnter Phone Number : ";

	cin.ignore();
	cin.getline(ph_no, 15);
	for(int i = 0;i < strlen(ph_no); i++){
		char a = ph_no[i];
		if(isalpha(a)){
			    cout<< "Wrong Input !!!" << endl;
				cout<< "Enter Your Phone Number Without any Alphabet : ";
				cin.getline(ph_no, 15);
		i = -1;
		continue;
		}

	}

	cout<<"\nEnter your Date of Birth(dd-mm-yyyy) : ";
	cin.ignore();
	cin.getline(dob, 15);
	for(auto a:dob){
		if(isdigit(a) || a == '-'){
			temp = dob;
		}
		else if(isalpha(a)){
			    cout<< "Wrong Input !!!" << endl;
				cout<< "Enter Your DOB Without any Alphabet : ";
				cin.getline(dob, 15);

		}

	}
	cout<<"\nEnter your Department : ";

	cin.getline(department, 20);
	for(int i = 0;i < strlen(department); i++){
		char a = department[i];
		if(isdigit(a)){
			    cout<< "Wrong Input !!!" << endl;
				cout<< "Enter Your Department Without any Digit : ";
				cin.getline(department, 20);
		i = -1;
		continue;
		}

	}

	cout<<"\nEnter your Section : ";

	cin.getline(section, 20);
		for(int i = 0;i < strlen(section); i++){
			char a = section[i];
			if(isdigit(a)){
				cout<< "Wrong Input !!!" << endl;
				cout<< "Enter Your Section Without any Digit : ";
				cin.getline(section, 20);
		i = -1;
		continue;
		}

	}
	cout<<"\nEnter your cgpa : ";
	cin>>cgpa;

	cout<<"\nEnter your E-mail : ";
	cin.ignore();
	cin.getline(email, 100);
	cout<<"\nEnter your blood group(e.g o+ or o-) : ";
	cin.getline(blood, 4);
		for(auto a:blood){
		if(isalpha(a) || a == '-' || a == '+'){
			temp = blood;
		}
		else if(isdigit(a)){
			    cout<< "Wrong Input !!!" << endl;
				cout<< "Enter Your Blood Group Without any Digit : ";
				cin.getline(blood, 4);

		}

	}
	cout<<"\nEnter your Kinship status(Yes or No, Relation if Yes) :";

	cin.getline(kinship, 20);
	for(int i = 0;i < strlen(kinship); i++){
		char a = kinship[i];
		if(isdigit(a)){
			    cout<< "Wrong Input !!!" << endl;
				cout<< "Enter Your Kinship Status Without any Digit : ";
				cin.getline(kinship, 20);
		i = -1;
		continue;
		}

	}
	cout<<"\nEnter Your overseas status(Yes or No, Countery if Yes) : ";

	cin.getline(overseas, 20);
	for(int i = 0;i < strlen(overseas); i++){
		char a = overseas[i];
		if(isdigit(a)){
			    cout<< "Wrong Input !!!" << endl;
				cout<< "Enter Your Overseas Status Without any Digit : ";
				cin.getline(gender, 20);
		i = -1;
		continue;
		}

	}
}
void student :: showing()
{
	cout << "Name: " << name<<endl;
	cout << "Registration Number: " << reg<<endl;
	cout << "Gender: " << gender<<endl;
	cout << "Father Name: " << father_name<<endl;
	cout << "CNIC: " << nic<<endl;
	cout << "Address: " << address<<endl;
	cout << "Phone Number: " << ph_no<<endl;
	cout << "Date of Birth: " << dob<<endl;
	cout << "Department: " << department<<endl;
	cout << "Section: " <<section << endl;
	cout << "CGPA: " << cgpa<<endl;
	cout << "Email: " << email<<endl;
	cout << "Blood Group: " << blood<<endl;
	cout << "Kinship: " << kinship<<endl;
	cout << "Overseas: " << overseas<<endl;
}

long long int student ::getreg_no()
{
	return reg;
}
string student ::getname()
{
	return name;
}

void write_student()
{
	student s;
	ofstream outFile;
	outFile.open("student.dat", ios::binary | ios::app);
	s.getting();
	outFile.write(reinterpret_cast<char *> (&s), sizeof(student));
	outFile.close();
	cout << "\n\nStudent Record Has Been Saved Successfully..."<<endl;
	cout << "Press Enter key to Continue......."<<endl;
	cin.ignore();
	cin.get();
}



void display_all()
{

	student s;
	ifstream inFile;
	inFile.open("student.dat", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press any Key...";
		cin.ignore();
		cin.get();
		return;
	}
	cout << "\n\n\n\t\tDISPLAY ALL RECORD !!!....press any key\n\n";
	while (inFile.read(reinterpret_cast<char *> (&s), sizeof(student)))
	{
		s.showing();
		cout << "\n\n====================================\n";
	}
	cout<< "\t\tAll Records Displayed\n";
	cout<< "\n\t\tPress Enter Key------\n";
	inFile.close();
	cin.ignore();
	cin.get();
}

void display_sp(int n)
{
	student s;
	ifstream inFile;
	inFile.open("student.dat", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press Enter Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag = false;
	while (inFile.read(reinterpret_cast<char *> (&s), sizeof(student)))
	{
		if (s.getreg_no()==n)

		{
			s.showing();
			cout << "===========Display record========"<<endl;
			cout << "..............press Enter key......."<<endl;
			flag = true;
		}


	}
	inFile.close();
	if (flag == false)
	cout << "\n\nRecord not Exist";
	cout << "..............press Enter key......."<<endl;
	cin.ignore();
	cin.get();
}
void searchbyname(string n)
{
	student s;
	ifstream inFile;
	inFile.open("student.dat", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press Enter Key...";
		cin.ignore();
		cin.get();
		return;
	}
	bool flag = false;
	while (inFile.read(reinterpret_cast<char *> (&s), sizeof(student)))
	{
		if (s.getname()==n)

		{
			s.showing();
			cout << "===========Display record========"<<endl;
			cout << "..............press Enter key......."<<endl;
			flag = true;
		}


	}

	inFile.close();
	if (flag == false)
	cout << "\n\nRecord not Exist";
	cout << "..............press Enter key......."<<endl;
	cin.ignore();
	cin.get();
}

void modify_student(int n)
{

	bool found = false;
	student s;
	fstream File;
	File.open("student.dat", ios::binary | ios::in | ios::out);
	if (!File)
	{
		cout << "File could not be open !! Press Enter Key...";
		cin.ignore();
		cin.get();
		return;
	}
	while (!File.eof() && found == false)
	{

		File.read(reinterpret_cast<char *> (&s), sizeof(student));
		if (s.getreg_no() == n )
		{
			s.showing();
			cout << "\n\nPlease Enter The New Details" << endl;
			s.getting();
			int pos = (-1)*static_cast<int>(sizeof(s));
			File.seekp(pos, ios::cur);
			File.write(reinterpret_cast<char *> (&s), sizeof(student));
			cout << "\n\n\t Record Updated";
			found = true;
		}
	}
	File.close();
	if (found == false)
		cout << "\n\n Record Not Found ";
	cin.ignore();
	cin.get();
}

void delete_student(int n)
{

	student s;
	ifstream inFile;
	inFile.open("student.dat", ios::binary);
	if (!inFile)
	{
		cout << "File could not be open !! Press Enter Key...";
		cin.ignore();
		cin.get();
		return;
	}

	ofstream outFile;
	outFile.open("Temp.dat", ios::out);
	bool flag=false;
	while (inFile.read(reinterpret_cast<char *> (&s), sizeof(student)))
	{
		if (s.getreg_no()!= n)
		{
			outFile.write(reinterpret_cast<char *> (&s), sizeof(student));
			flag=true;
		cin.ignore();
		cin.get();

		}

	}
	outFile.close();
	inFile.close();
	remove("student.dat");
	rename("Temp.dat", "student.dat");
	cout << "\n\n\tRecord Deleted.... press Enter key!!!";
	cin.ignore();
	cin.get();

}
void intro()
{

    cout << "\n\n\n";
    Sleep(270);
    cout << "\t\t\t\t * * *  **** *      ****  ***   ***   ****   " << endl;
    Sleep(270);
    cout << "\t\t\t\t * * * *     *     *     *   * * * * *        " << endl;
    Sleep(270);
    cout << "\t\t\t\t * * * ***** *     *     *   * * * * *****    " << endl;
    Sleep(270);
    cout << "\t\t\t\t * * * *     *     *     *   * * * * *         " << endl;
    Sleep(270);
    cout << "\t\t\t\t  ***   **** *****  ****  ***  * * *  ****     " << endl;
    Sleep(270);
    cout<< endl;
    cout<< "\t\t\t\t=============================================" << endl;
    Sleep(450);
    cout<< "\t\t\t\tTHIS IS STUDENT RECORD MANEGEMENT SYSTEM" << endl;
    Sleep(450);
    cout<< "\t\t\t\t=============================================" << endl;
    Sleep(450);
    cout<<"\t\t\t\t=====================Members=================\n";
    Sleep(450);
    cout<<"\t\t\t\tMuhammad Sajeel(Leader)\t\t1128\n";
    cout<<"\t\t\t\tMuhammad Subhan \t\t1129\n";
    cout<<"\t\t\t\tMuhammad Hassan Tahir\t\t1124\n";
    cout<< "press Enter to continue...";

    cin.get();
}
int mainmenu()
{
	char ch;

	char *a;
	int num;
	do
	{

	  system("color 02");
		cout<< "\t\t\t\t=================MAIN MENU=================\n\n" << endl;
		Sleep(270);
		cout<<"\t\t\t\t\t1.\tAdd Record\n"<<endl;
		Sleep(270);
		cout<<"\n\t\t\t\t\t2.\tDisplay All\n"<<endl;
		Sleep(270);
		cout<<"\n\t\t\t\t\t3.\tSearch By Name\n"<<endl;
		Sleep(270);
		cout<<"\n\t\t\t\t\t4.\tSearch By Registration Number \n"<<endl;
		Sleep(270);
		cout<<"\n\t\t\t\t\t5.\tUpdate a Record\n"<<endl;
		Sleep(270);
		cout<<"\n\t\t\t\t\t6.\tDelete a Record\n"<<endl;
		Sleep(270);
		cout<<"\n\t\t\t\t\t7.\tExit from Main Menu"<<endl;
		 cout<< "\t\t\t\t============================================" << endl;
		 Sleep(270);
		 cout<< "\t\t\t\tENTER YOUR CHOICE...:) <1-7> : ";
		Sleep(270);
		cin>> ch;
		string x;
	switch (ch)
		{
		case '1':
            write_student();
			break;
		case '2':
		    display_all();
			break;
		case '3':
			cin.ignore();
			cout << "\nPlease Enter your name : ";
			a = new char [99];

			cin.getline(a, 99);

			for(int i = 0; a[i] != '\0'; i++)
			{
				x += a[i];
			}
			searchbyname(x);
			break;

		case '4':
			cout << "\nPlease Enter your Registration ID : ";
            cin >> num;
			display_sp(num);
		    break;
		case '5':
				cout << "\nPlease Enter your Registration ID : ";
		     	cin >> num;
				modify_student(num);
				break;
			 case '6':
			 	cout << "\nPlease Enter your Registration ID : ";
				cin >> num;
				delete_student(num);

		case '7':
				cout << "Exiting From Program\n";
				return 0;
                break;
		}
		

	cin.ignore();
	}

	while (ch != '8');

	return 0;
}
int main()
{
	system("color B");
    system("cls");
    intro();


	string input;
	cout.setf(ios::fixed | ios::showpoint);
	cout << setprecision(2);
	char c;
	 do
	{
 	    system("cls");
 	    system("color 16");
  	    cout<< "\n\n";
	    cout<< "\t====================STUDENT RECORD MANEGEMENT SYSTEM===================="<<endl;
    	cout<< endl;
   	    cout<< "\t\t\t\t1. MAIN MENU\n\n";
 	    cout<< "\t\t\t\t2. EXIT\n\n";
   		cout<< "ENTER YOUR CHOICE :";
   		cin>> c;
        system("cls");
    	switch(c)
   		{
    		case '1':
    		{
        		mainmenu();
        		break;
    		}
   		}
    }
	while(c != '2');
    return 0;
}
