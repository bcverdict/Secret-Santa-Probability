#include "Secret.h"
#include <string>
#include <stdlib.h>
using namespace std;
void menu();
bool Again();
void Answer(int Q);
int main()
{
	menu();
	return(0);
}
void menu()
{
	int Q = 0;
	cout<<"1: Play"<<endl;
	cout<<"2: Help"<<endl;
	cout<<"3: Quit"<<endl;
	cin>>Q;
	try
	{
		Answer(Q);
	}
	catch(std::runtime_error e)
	{
		cout<<e.what()<<endl;
	}

}
bool Again()
{
	char Y;
	cout<<"Would you like to play again? (Y or N)"<<endl;
	cin>>Y;
	if(Y == 'Y' || Y == 'y')
	{
		return(true);
	}
	else if(Y == 'N' || Y == 'n')
	{
		system("clear");
		menu();
		return(false);
	}
	else
	{
			cout<<"Please enter either Y or N"<<endl;
			return(Again());
	}
}
void Answer(int Q)
{
	Secret Santa;
	system("clear");
	if(Q == 1)
	{
		float X = 0;
		cout<<"How many people are playing?"<<endl;
		cin>>X;
		while(X<0)
		{
			cout<<"Please enter a positive number"<<endl;
			cin>>X;
		}
		Santa.Derangement(Santa.Factorial(X), X, 0, 1);
	}
	 else if(Q == 2)
	{
		cout<<"----------------------------------------------------"<<endl;
		cout<<"This program is meant to calculate the probability"<<endl;
		cout<<"of an unsuccessful secret Santa exchange."<<endl;
		cout<<"----------------------------------------------------"<<endl;
		try
		{
			menu();
		}
		catch(std::runtime_error e)
		{
			cout<<e.what()<<endl;
		}
	}
	else if(Q == 3)
	{
		cout<<"Goodbye!"<<endl;
	}
	else
	{
		throw(std::runtime_error("Not a valid integer"));
	}
	if((Q==1)&&(Again()))
	{
		Answer(1);
	}
}
