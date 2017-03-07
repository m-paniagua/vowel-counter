#include <iostream>
#include <cstring>
using namespace std;

//function to count number of lowercase vowels
void countLower(char *userInput, int size);
//function to count number of uppercase vowels
void countUpper(char *userInput, int size);

int const MAX_SIZE = 100 ;

int main()
{
	char temp[MAX_SIZE];											//temporary storage location for user input
	char contin;
	char *userInput = nullptr;										//pointer to char
	int lowerCaseVowels, upperCaseVowels, size;

	do
	{

		//prompt user
		cout << "Enter a string: ";
		cin.get(temp, MAX_SIZE, '\n');								//captures 99 digits
		cin.clear();
		cin.ignore(10000, '\n');									

		size = strlen(temp) + 1;									//determine legnth of string entered, add 1 to accomodate null char

		userInput = new char[size];									//create c string of exact size
		strcpy_s(userInput, size, temp);

		countLower(userInput, size);								//call function to count and display lowercase vowels

		countUpper(userInput, size);								//call function to count and display uppercase vowels

		cout << "\nEnter anything starting with a y/Y to continue, anything else to exit." << endl;		//prompt to continue
		cin >> contin;
		cin.ignore(10000, '\n');
		system("cls");

	} while (contin == 'y' || contin == 'Y');

	cout << "End of program" << endl;

	delete[] userInput;							
	userInput = nullptr;
	system("pause");
	return 0;
}

void countLower(char *userInput, int size)
{
	int lowerA = 0, lowerE = 0, lowerI = 0, lowerO = 0, lowerU = 0;

	for (int i = 0; i < size; i++)												//counts frequency of each lower case vowel
	{
		if (userInput[i] == 'a')
		{
			lowerA++;
		}
		else if (userInput[i] == 'e')
		{
			lowerE++;
		}
		else if (userInput[i] == 'i')
		{
			lowerI++;
		}
		else if (userInput[i] == 'o')
		{
			lowerO++;
		}
		else if (userInput[i] == 'u')
		{
			lowerU++;
		}
	
	}
	if (lowerA > 0 || lowerE > 0 || lowerI > 0 || lowerO > 0 || lowerU > 0)
	{
		cout << "The lower case vowels which are present are: ";				//if at least one lower case vowel present, displays
		if (lowerA > 0)															//displays which vowel present
		{
			cout << "a ";
		}
		if (lowerE > 0)
		{
			cout << "e ";
		}		
		if (lowerI > 0)
		{
			cout << "i ";
		}
		if (lowerO > 0)
		{
			cout << "o ";
		}
		if (lowerU > 0)
		{
			cout << "u ";
		}
	}
	else
	{
		cout << "There are no lower case vowels present" << endl;			//message if zero lower case vowels present
		return;																//ends function
	}

	cout << endl;

	if (lowerA > lowerE && lowerA > lowerI && lowerA > lowerO && lowerA > lowerU)				//compares count each lower case vowel
	{
		cout << "The highest frequency lower case vowel is 'a' with a frequency of: " << lowerA << endl;
	}
	else if (lowerE > lowerA && lowerE > lowerI && lowerE > lowerO && lowerE > lowerU)
	{
		cout << "The highest frequency lower case vowel is 'e' with a frequency of: " << lowerE << endl;
	}
	else if (lowerI > lowerA && lowerI > lowerE && lowerI > lowerO && lowerI > lowerU)
	{
		cout << "The highest frequency lower case vowel is 'i' with a frequency of: " << lowerI << endl;
	}
	else if (lowerO > lowerE && lowerO > lowerI && lowerO > lowerA && lowerO > lowerU)
	{
		cout << "The highest frequency lower case vowel is 'o' with a frequency of: " << lowerO << endl;
	}
	else if (lowerU > lowerE && lowerU > lowerI && lowerU > lowerO && lowerU > lowerA)
	{
		cout << "The highest frequency lower case vowel is 'u' with a frequency of: " << lowerU << endl;
	}
	else
	{
		cout << "There is no highest, most frequently occuring lower-case vowel" << endl;		//if no vowel most frequent, displays message
	}
}
void countUpper(char *userInput, int size)
{
	int upperA = 0, upperE = 0, upperI = 0, upperO = 0, upperU = 0;

	for (int i = 0; i < size; i++)
	{
		if (userInput[i] == 'A')
		{
			upperA++;
		}
		else if (userInput[i] == 'E')
		{
			upperE++;
		}
		else if (userInput[i] == 'I')
		{
			upperI++;
		}
		else if (userInput[i] == 'O')
		{
			upperO++;
		}
		else if (userInput[i] == 'U')
		{
			upperU++;
		}
		
	}
	if (upperA > 0 || upperE > 0 || upperI > 0 || upperO > 0 || upperU > 0)
	{
		cout << "\nThe upper case vowels which are present are: ";
		if (upperA > 0)
		{
			cout << "A ";
		}
		if (upperE > 0)
		{
			cout << "E ";
		}
		if (upperI > 0)
		{
			cout << "I ";
		}
		if (upperO > 0)
		{
			cout << "O ";
		}
		if (upperU > 0)
		{
			cout << "U ";
		}
	}
	else
	{
		cout << "\nThere are no upper case vowels present" << endl;
		return;
	}
	cout << endl;

	if (upperA > upperE && upperA > upperI && upperA > upperO && upperA > upperU)
	{
		cout << "The highest frequency upper case vowel is 'A' with a frequency of: " << upperA << endl;
	}
	else if (upperE > upperA && upperE > upperI && upperE > upperO && upperE > upperU)
	{
		cout << "The highest frequency upper case vowel is 'E' with a frequency of: " << upperE << endl;
	}
	else if (upperI > upperA && upperI > upperE && upperI > upperO && upperI > upperU)
	{
		cout << "The highest frequency upper case vowel is 'I' with a frequency of: " << upperI << endl;
	}
	else if (upperO > upperE && upperO > upperI && upperO > upperA && upperO > upperU)
	{
		cout << "The highest frequency upper case vowel is 'O' with a frequency of: " << upperO << endl;
	}
	else if (upperU > upperE && upperU > upperI && upperU > upperO && upperU > upperA)
	{
		cout << "The highest frequency upper case vowel is 'U' with a frequency of: " << upperU << endl;
	}
	else
	{
		cout << "There is no highest, most frequently occuring upper-case vowel" << endl;
	}
}