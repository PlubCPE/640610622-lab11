#include<iostream>
#include<string>
using namespace std;

int main(){
	string grade;
	int i = 1;
	int count[5] = {};
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << i << "]: ";
		getline(cin,grade); 
		if( grade == "A") 
		{
			count[0] += 1; 
		}
		else if( grade == "B") 
		{
			count[1] += 1; 
		}
		else if( grade == "C") 
		{
			count[2] += 1; 
		}
		else if( grade == "D") 
		{
			count[3] += 1; 
		}
		else if( grade == "F") 
		{
			count[4] += 1; 
		}
		else if( grade == "0") 
		{
			i--;
			break; 
		}		
		else
		{
			cout << "Wrong input. Please input again." << endl;
			i--;
		} 
		i++;
	}while(true);
	
	
	cout << "In total " << i <<" students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];

	
	return 0;
}
