#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
ofstream  ffile{"abc.txt"};

if(ffile) {

	ffile << a << endl;

	ffile << b << endl;
	
	ffile << c;
}

else {
    	
	cout << "Could not read" << endl;
   
}

   return 0;

}
