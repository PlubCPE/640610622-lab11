#include<iostream>
#include<fstream>
#include<cmath>
#include<string>
#include <iomanip>
#include<cstdlib>

using namespace std;



int main()
{
    int num = 0;
    double mean,devi, sum = 0, sum2 = 0;
    string copy;
    ifstream score("score.txt");
    while(getline(score,copy))
	{
        
        sum += atof(copy.c_str());
        sum2 += pow((atof(copy.c_str())),2);
        num++; 

	}

    

    cout << "Number of data = " << num << endl;
    cout << setprecision(3);
    cout << "Mean = " << (mean = (sum/num)) << endl;
    cout << "Standard deviation = " << (devi = sqrt((sum2/num) - pow(mean,2)));

    score.close();
    return 0;
}

