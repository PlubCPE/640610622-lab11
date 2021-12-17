#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	string copy;
	dest << "-------------------- BOOM ---------------------" << endl;
	while(getline(source,copy))
	{
		dest << copy << endl;
	}
	dest << "-------------------- HA!! ---------------------" << endl;

    source.close();
    dest.close();
	return 0;
}
