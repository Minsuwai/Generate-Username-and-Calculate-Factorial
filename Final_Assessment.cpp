#include<iostream>
#include<string.h>
using namespace std;

void menu();
void string_function();
void number_function();
void create_name(string);

string me; //Global variable

int main()
{
	cout<<"Enter Your Full Name : ";
	getline(cin,me,'\n');
	
	menu();
	
	return 0;
}

void menu()
{
	int choice;//Local variable for menu option to hold value input from user
	
	do
	{
		cout<<"\nMenu Option : \n1. Create Username. \n2. Calculate the Factorial. \n3. Exit.\n";
		cout<<"\n Enter your choice of option :";
		cin>>choice;
		
		switch(choice)
		{
			case 1:string_function();break;
			case 2:number_function();break;
			case 3:exit(0);
		}
	}while(choice!=3);
}

void string_function()
{
	cout<<"This is option 1, "<<me<<endl;
	
	string string2;//Local variable to keep all character
	
	cout<<"Enter your name : ";
	getline(cin,string2,'\n');
	getline(cin,string2,'\n');
	
	create_name(string2);
}

void number_function()
{
	cout<<"This is option 2, "<<me<<"\n"<<endl;
	
	int number,factorial=1,count;
	
	cout<<"Enter number = ";
	cin>>number;
	
	//if (number == 0 )
		//cout<<"Error"<<endl;
	
	if (number > 0)
		{
			for(count=number;count>=1;count--)
				{
					factorial=factorial*count;
					cout<<count;
					if(count!=1)
						cout<<"*";
				}
			cout<<" = "<<factorial<<endl;
		}
	else if (number <= 0)
		cout<<"Enter a positive whole number greater than 0 ! "<<endl;
	
}

void create_name(string username)//Username parameter
{
	string string1;//Local variable to hold the first character
	
	string1=username.at(0);
	int index=username.find(" ");
	string1.append(username,index+1,username.length());
	
	index=string1.find(" ");
	
	if (index != -1)
		string1.assign(string1,0,index);
		
	cout<<"Welcome "<<string1<<endl;
}
