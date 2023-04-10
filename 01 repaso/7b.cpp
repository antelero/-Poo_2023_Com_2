//programa 7b------------------------------------------
#include <iostream>
#include <conio.h>
using namespace std;
void opera(int n)
{
	if (n==1)
		cout<< "--";
	else
		if (n%2==0)
			cout<<"**";
		else
		{ 
		    cout<<"--";
		    opera(n-1);
		}
} // fin de la función opera
//-------------------------------
int main(int argc, char* argv[])
{ 
    opera(11) ;
    return 0;
}
