#include <iostream>
using namespace std;
#include <string>
struct appointment
{
	string name_p;
	string name_d;
	int year;
	int monthe;
	int day;
	int hour;
	int minute;
	int price;
};
struct patient
{
	string name;
	int age;
	int number;
	int year;
	int month;
	int day;
};
struct dector
{
	string name;
	string specialty;
	int number;
	int price;
};
void book_appo(appointment appo[], int& n, dector decto[], patient patien[], int j, int m)
{
	string name_p1;
	string name_d1;
	bool a = false;
	bool b = false;
	appointment x;
	cout << "Enter name's patient : ";
	cin >> name_p1;
	for (int i = 0;i <= j;i++)
	{
		if (patien[i].name == name_p1)
		{
			a = true;
		}
	}
	if (a == false)
		cout << "the patient is not exist " << endl<<endl;
	if (a)
	{
		cout << "Enter name's dector : ";
		cin >> name_d1;
		for (int i = 0;i <= m;i++)
		{
			if (decto[i].name == name_d1)
			{
				b = true;
				x.price = decto[i].price;
			}
		}
		if (b == false)
			cout << "the dector is not exist " << endl<<endl;
	}
	
	
	if (a && b)
	{
		x.name_p = name_p1;
		x.name_d = name_d1;
		cout << "Enter year : ";
		cin >> x.year;
		cout << "Enter month : ";
		cin >> x.monthe;
		cout << "Enter day : ";
		cin >> x.day;
		cout << "Enter the hour : ";
		cin >> x.hour;
		cout << "Enter the minute : ";
		cin >> x.minute;
		
		appo[n] = x;
		n++;
	}
}
void enrol_doctor(dector decto[],int &m)
{
	dector x;
	cout << "Enter name : ";
	cin >> x.name;
	cout << "Enter specialty : ";
	cin >> x.specialty;
	cout << "Enter number : ";
	cin >> x.number;
	cout << "Enter doctor's scout : ";
	cin >> x.price;
	decto[m] = x;
	m++;
}

void enrol_patient(patient patien[], int &j)
{
	
	patient x;
		cout << "Enter name : ";
		cin >> x.name;
		cout << "Enter age : ";
		cin >> x.age;
		cout << "Enter number : ";
		cin >> x.number;
		cout << "Enter year : ";
		cin >> x.year;
		cout << "Enter month : ";
		cin >> x.month;
		cout << "Enter day : ";
		cin >> x.day;
		patien[j] = x;
		j++;
}
void mange_patient()
{
	cout << "1.Register a new patient " <<endl;
	cout << "2.View all patients "<<endl;
	cout << "3.Searching for a patient "<<endl;
	cout << "4.Patient information update "<<endl<<endl;
}
void mange_doctors()
{
	cout << "1.Register a new doctor "<<endl;
	cout << "2.View all doctors "<<endl;
	cout << "3.Filter doctors by specialty "<<endl<<endl;
	
}
void mange_appointment()
{
	cout << "1.book a new appointment " << endl;
	cout << "2.cancel appointment " << endl;
	cout << "3.View all appintments " << endl;
	cout << "4.view appointment patient " << endl;
	cout << "5.view appointment doctor " << endl<<endl;
}
void financial_system()
{
	cout << "1.Calculating the hospital's total revenue"<<endl;
	cout << "2.Calculating doctor's income "<<endl<<endl;
}
void view_all_p(patient patien[], int &j)
{
	for (int p = 0;p <=j;p++)
	{
		cout << patien[p].name<<endl;
	}
}
void searche(patient patien[], int& j)
{
	bool a = false;
	string name;
	cout << "Enter the name ";
	cin >> name;
	for (int i = 0;i <= j;i++)
	{
		if (patien[i].name == name)
		{
			a = false;
			cout << "name : " << patien[i].name << endl;
			cout << "age : " << patien[i].age << endl;
			cout << "telephone number : " << patien[i].number << endl;
			cout << patien[i].year << "/" << patien[i].month << "/" << patien[i].day << endl;
			break;
		}
		else
			a = true;
	}
	if(a)
		cout << "this patient does not exist" << endl;
}
void update_p(patient patien[], int& j)
{
	bool a = false;
	string name;
	cout << "Enter the name ";
	cin >> name;
	for (int i = 0;i <= j;i++)
	{
		if (patien[i].name == name)
		{
			a = false;
			cout << "name : " << patien[i].name << endl;
			cout << "age : " << patien[i].age << endl;
			cout << "telephone number : " << patien[i].number << endl;
			cout << patien[i].year << "/" << patien[i].month << "/" << patien[i].day << endl;
			patient x;
			cout << "Enter name : ";
			cin >> x.name;
			cout << "Enter age : ";
			cin >> x.age;
			cout << "Enter number : ";
			cin >> x.number;
			cout << "Enter year : ";
			cin >> x.year;
			cout << "Enter month : ";
			cin >> x.month;
			cout << "Enter day : ";
			cin >> x.day;
			patien[i] = x;
			break;
		}
		else
			a = true;
	}
	if(a)
	cout << "this patient does not exist" << endl;
}
void view_all_d(dector decto[],int &m)
{
	for (int d = 0;d <= m;d++)
	{
		cout << decto[d].name << endl;
	}
}
void view_all_app(appointment appo[], int& n)
{
	for (int d = 0;d < n;d++)
	{
		cout <<d+1<<"." << appo[d].name_p << " withe the dector " << appo[d].name_d << " in " << appo[d].year << "/" << appo[d].monthe << "/" << appo[d].day << " at " << appo[d].hour << ":" << appo[d].minute << endl << endl;
	}
}
void view_all_app_p(appointment appo[],int &n)
{
	string name;
	cout << "Enter the name's patient ";
	cin >> name;
	for (int i = 0;i <= n;i++)
	{
		if (appo[i].name_p == name)
		{
			cout << appo[i].name_p<<" with the dector "<<appo[i].name_d<<" in "<< appo[i].year << "/" << appo[i].monthe << "/" << appo[i].day << " at " << appo[i].hour << ":" << appo[i].minute << endl << endl;;
		}
		
	}
}
void fin(appointment appo[],int &n)
{
	int f=0;
	for (int i = 0;i < n;i++)
	{
		f += appo[i].price;
	}
	cout << f<<endl;
}
void fin_d(appointment apoo[],int &n)
{
	int fd = 0;
	string name;
	cout << "enter the name of dector " << endl;
	cin >> name;
	for (int i = 0;i < n;i++)
	{
		if(apoo[i].name_d==name)
		{
			fd += apoo[i].price;
		}
	}
	cout << fd<<endl;
}
void view_all_app_d(appointment appo[], int& n)
{
	string name;
	cout << "Enter the name's dector ";
	cin >> name;
	for (int i = 0;i <= n;i++)
	{
		if (appo[i].name_d == name)
		{
			cout << appo[i].name_d << " with the patient " << appo[i].name_p << " in " << appo[i].year << "/" << appo[i].monthe << "/" << appo[i].day << " at " << appo[i].hour << ":" << appo[i].minute << endl << endl;;
		}

	}
}
void specialty(dector decto[], int &m)
{
	string sp;
	cout << "Enter the specialty :";
	cin >> sp;
	for (int d = 0;d <= m;d++)
	{
		if (sp == decto[d].specialty)
			cout << decto[d].name << endl;
	}
}
void cancel(appointment appo[], int& n)
{
	int num;
	for (int d = 0;d < n;d++)
	{
		cout << d + 1 << "." << appo[d].name_p << " withe the dector " << appo[d].name_d << " in " << appo[d].year << "/" << appo[d].monthe << "/" << appo[d].day << " at " << appo[d].hour << ":" << appo[d].minute << endl << endl;
	}
	cout << "Enter the number of appointment ";
	cin >> num;
	for (int j = num-1;j < n;j++)
	{
		appo[j] = appo[j + 1];
	}
	n--;
}
int main()
{
	int x;
	int y;
	patient patien[100];
	dector decto[100];
	appointment appo[100];
	int j=0;
	int m = 0;
	int n = 0;
	while (true)
	{
		
		cout << "Enter the option number you want " << endl;
		cout << "1.Mange the patient" << endl;
		cout << "2.Mange the doctors" << endl;
		cout << "3.Appointment management" << endl;
		cout << "4. Financial system" << endl;
		cin >> x;
		if(x==1)
		{
			mange_patient();
			cout << "Enter the option number you want "<<endl;
			cin >> y;
			if(y==1)
				enrol_patient(patien, j);
			else if(y==2)
				view_all_p(patien, j);
			else if(y==3)
				searche(patien, j);
			else if(y==4)
				update_p(patien, j);
		}
		else if (x == 2)
		{
			mange_doctors();
			cout << "Enter the option number you want " << endl;
			cin >> y;
			if (y == 1)
				enrol_doctor(decto, m);
			else if (y == 2)
				view_all_d(decto, m);
			else if (y == 3)
				specialty(decto,m);
		}
		else if (x == 3)
		{
			mange_appointment();
			cin >> y;
			if (y == 1)
			{
				book_appo(appo, n, decto, patien, j, m);
			}
			else if (y == 2)
			{
				cancel(appo, n);
			}
			else if (y == 3)
			{
				view_all_app(appo, n);
			}
			else if (y == 4)
				view_all_app_p(appo, n);
			else if (y == 5)
				view_all_app_d(appo, n);
		}
		else if (x == 4)
		{
			financial_system();
			cin >> y;
			if (y == 1)
			{
				fin(appo, n);
			}
			else if (y == 2)
			{
				fin_d(appo,n);
			}
		}
	}
	return 0;
}