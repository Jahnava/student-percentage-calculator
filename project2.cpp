//Jahnava Baltz
//COP2000.0M1
//Displaying the percentage of demographic information based on the user's input about student enrollment.

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::string;
	using std::setprecision;
	using std::fixed;
	using std::setw;

	int studentsTotal;   //input value for total number of students
	int fullTime;        //input value for full time students
	int partTime;        //input value for part time students
	int basLevel;        //input value for BAS level students
	int aa_as;           //input value for AA/AS level students

	// float variables for the percentages of students in each category
	float fullTimePercent;  
	float partTimePercent;  
	float basLevelPercent;
	float aa_asLevelPercent; 
	
	cout << "Demographic Facts\n\n";

	//numbers for each category
	cout << "Please enter total number of students enrolled: ";
	cin >> studentsTotal;
	cout << endl << endl; 

	cout << "Please enter number of students enrolled full-time: ";
	cin >> fullTime;

	cout << "Please enter number of students enrolled part-time: ";
	cin >> partTime;
	cout << endl << endl;

	cout << "Please enter number of students enrolled at the BAS level:   ";
	cin >> basLevel;

	cout << "Please enter number of students enrolled at the AA/AS level: ";
	cin >> aa_as;
	cout << endl;


	//calculating the percentage of full time students
	fullTimePercent = static_cast<float>(fullTime) / static_cast<float>(studentsTotal)*100;     // fullTimePercent is the variable, dividing # of full time students by the total, and multiplying by 100 so it is a percent. float allows for the number to be a percentage.  static_cast allows for the use of float on each side of the equation, so I'm able to divide fullTime/studentsTotal. integers need the static_cast in order to keep the decimal place on the division.
	//calculating the percentage of part time students
	partTimePercent = static_cast<float>(partTime) / static_cast<float>(studentsTotal)*100;
	//calculating percentage of baslevel students
	basLevelPercent = static_cast<float>(basLevel) / static_cast<float>(studentsTotal)*100;
	//calculating percent of aa/as students
	aa_asLevelPercent = static_cast<float>(aa_as) / static_cast<float>(studentsTotal)*100;

	

	//display the output
	cout << endl; //creates extra space
	cout << "Calculating...\n";
	cout << endl << endl;
	cout << fixed << setprecision(2); //specifies 2 decimal points for the final number
	cout << " Percentage enrolled full-time: " << setw(5) << fullTimePercent << "%" << endl;
	cout << " Percentage enrolled part-time: " << setw(5) << partTimePercent << "%" << endl << endl <<endl;
	cout << " Percentage enrolled at the BAS level: " << setw(8) << basLevelPercent << "%" << endl;
	cout << " Percentage enrolled at the AA/AS level: " << setw(6) << aa_asLevelPercent << "%" << endl << endl <<endl;

	cout << "End of data"<< endl <<endl <<endl; 

	system("pause");
	return 0;
}