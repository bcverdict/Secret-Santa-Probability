#include "Secret.h"
#include <iomanip>
using namespace std;
Secret::Secret()
{
}
int Secret::Factorial(int Y)
{
	if(Y <= 1)
	{
		return(1);
	}
	else
	{
		return(Y*Factorial(Y-1));
	}
}
void Secret::Derangement(int factorial, int People, int Counter, float n)
{
	if(Counter != People)
	{
		Counter++;
		if ((Counter % 2 != 0))
		{
			n = n - ((float)1/(float)Factorial(Counter));
		}
		else if(Counter % 2 == 0)
		{
			n = n + ((float)1/(float)Factorial(Counter));  
		}
			Derangement(factorial, People, Counter, n);
	}
	else
	{
		cout<<"Probability of an unsuccessfull secret Santa game: "<<fixed<<setprecision(2)<<(100*n)<<"%"<<endl;
	}
}
