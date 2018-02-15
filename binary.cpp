#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
ofstream  sfile{"abc.bin", ios::binary};

if(sfile) {

	sfile.write(reinterpret_cast<char*>(&a), sizeof(a));
	sfile.write(reinterpret_cast<char*>(&b), sizeof(b));
	sfile.write(reinterpret_cast<char*>(&c), sizeof(c));
}

else {
    	
	cout << "Error opening abc.bin" << endl;
   
}

   return 0;

}
