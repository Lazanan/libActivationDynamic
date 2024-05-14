#include <iostream>
#include "Activation.hpp"

using namespace std;

int main()
{
    string i;
    ifstream fs("key_file.txt");
    fs >> i;
    if (fs.fail())
    {
	cout << "key_file.txt introuvable" << endl;
    }
    else if (i != "activated")
    {
    	    Activation test = Activation();
	    if (test.getStatus() == false)
	    {
		test.verifyActivation();
	    }
	    if (test.getPoint() > 0)
	    {

		if (test.getStatus() == true)
		{
		    cout << "Hello world" << endl;
		}
		else
		{
		    cout << "Just \"Hello\" because you didn't pay" << endl;
		    cout << "You have "<< test.getPoint() << " Free trial remaining " << endl;
		}
	    }
	    else
	    {
		cout << "Pay for more" << endl;
	    }
   }
   else
   {
   	cout << "Hello world" << endl;
   }
   return (0);
}
