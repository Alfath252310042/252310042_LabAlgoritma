#include <iostream>
#include <fstream>

using namespace std;
int main ()
{
	ofstream myfile;
	myfile.open("Test.exe", ios :: app);
	
	cout<< "OPRASI FILE OFSTREAM" <<endl;
	cout << "-------------------" << endl;
	
	if (!myfile.fail())
	{
		myfile << "Belajar OPRASI FILE OF STREAM" <<endl;
		myfile.close();
		cout <<"Text telah dituliskan ke dalam File" << endl;
	}
	else
	{
		cout << "File tidak ditemukan" << endl;
	}
	getchar();
	return 0;
}
