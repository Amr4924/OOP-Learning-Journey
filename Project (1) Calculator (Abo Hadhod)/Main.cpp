#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

class Calculator
{
private:
	double _userinput;
	double _result=0;
	int _typeProcess = 0;
	int _PreviousResult=0;
	vector<double> _saveUserinput;
	vector<double> _saveResult;
	vector<string> _saveProsess;
	void _ads()
	{
		system("start chrome https://linktr.ee/sa3dwy?utm_source=linktree_profile_share&ltsid=de08e0e3-804c-4346-980e-b191a24d30a7");
	}

public:

	void Add(double num)
	{
		_userinput = num;

		_saveUserinput.push_back(_userinput);

		_PreviousResult = _result;
		_typeProcess = 1;
		_result+= _userinput;

		_saveResult.push_back(_result);
		saveProcess();

	}
	void Subtract(double num)
	{
		_userinput = num;

		_saveUserinput.push_back(_userinput);

		_PreviousResult = _result;
		_typeProcess = 2;

		 _result -= _userinput;

		 _saveResult.push_back(_result);

		 saveProcess();
	}
	void Divid(double num)
	{
		if (_result == 0)_result += 1;
		_userinput = num;

		_saveUserinput.push_back(_userinput);

		_typeProcess = 3;

		if (_userinput != 0)
		{
			_result /= _userinput;
			_saveResult.push_back(_result);
			saveProcess();

		}
	}
	void Multiply(double num) 
	{
		if (_result == 0)_result += 1;
		_userinput = num; 

		_saveUserinput.push_back(_userinput);

		_typeProcess = 4;

		_result *= _userinput;
		_saveResult.push_back(_result);
		saveProcess();
	}
	void Clear()
	{
		_result = 0;
		_saveResult.push_back(_result);
		_userinput = 0;
		_saveUserinput.push_back(_userinput);
		_typeProcess = 5;
		saveProcess();
	}
	void PrintResult()
	{
		switch (_typeProcess)
		{
		case 1: cout << "Result After Adding " << _userinput << " is: " << _result << endl;
			break;
		case 2: cout << "Result After Subtracting " << _userinput << " is: " << _result << endl;
			break;
		case 3: cout << "Result After dividing " << _userinput << " is: " << _result << endl;
			break;
		case 4: cout << "Result After Multiplying " << _userinput << " is: " << _result << endl;
			break;
		case 5: cout << "Result After Clear " << _userinput << " is: " << _result << endl;
			break;
		case 6:  cout << "Result After Cancel " << _userinput << " is: " << _result << endl;
			break;
		}
		
	}
	void GetFinalResult()
	{
		cout << "Final Result: " << _result << endl;
	}
	void CancelLastOperation()
	{
		_userinput = 0;

		_saveUserinput.push_back(_userinput);

		_typeProcess = 6;
		_result = _PreviousResult;

		_saveResult.push_back(_result);
		saveProcess();

	}
	void saveProcess()
	{
		switch (_typeProcess)
		{
		case 1: _saveProsess.push_back("Result After Adding ");
			break;
		case 2: _saveProsess.push_back("Result After Subtracting ");
			break;
		case 3: _saveProsess.push_back("Result After dividing ");
			break;
		case 4: _saveProsess.push_back("Result After Multiplying ");
			break;
		case 5: _saveProsess.push_back("Result After Clear ");
			break;
		case 6: _saveProsess.push_back("Result After Cancel ");
			break;
		}
	}

	void save_file_Process()
	{
			int nameRand = rand() %58654;

			string fileName = to_string(nameRand) + "0.txt";

			ofstream file(fileName);
			if (file.is_open())
			{
				file << "The file was created with the name: " << fileName << endl;
				cout << "\nThe file was created with the name: " << fileName << endl;
				cout << "\n=========================" << endl;
				file << "=========================" << endl;
				cout << "Process outcomes: " << endl;
				file << "Process outcomes: " << endl;
				file << "=========================" << endl;
				cout << "=========================" << endl;

				for (int i = 0; i < _saveUserinput.size(); i++)
				{
					cout << _saveProsess.at(i) << _saveUserinput.at(i) << " is: " << _saveResult.at(i) << endl;
					file << _saveProsess.at(i) << _saveUserinput.at(i) << " is: " << _saveResult.at(i) << endl;
				}
				cout << "\nFinal Result: " << _result << endl;
				file << "\nFinal Result: " << _result << endl;
				cout << "=========================" << endl;
				file << "=========================" << endl;
				file.close();

				cout << "\n*************************" << endl;
				cout << "The file was saved as: " << fileName << endl;
				cout << "*************************" << endl;

				string common = "start " + fileName;
				system(common.c_str());
			}
			else
			{
				cout << "An error occurred while creating the file!" << endl;
			}
			
	}
	void Get() { _ads(); }
	
};

void list(vector<string> str)
{
	for (string v : str)
	{
		cout << v << endl;
	}
}
bool permissions(char permission)
{
	if (permission == 'n')return false;

	return true;
}

int main()
{
	srand(time(0));
	Calculator calc;
	int pick;
	vector<string> minue =
	{
		"|-------------------------|",
		"|       Welcome Calc      |",
		"|-------------------------|",
		"|                         |",
		"| [1] Start.              |",
		"| [2] Contact me.         |",
		"| [3] End.                |",
		"|_________________________|"
	};
	list(minue);
	cout << "pick from the list: ";
	cin >> pick;
	system("cls");

	if (pick == 3)
	{
		return 0;
	}
	else if (pick == 1)
	{
		cout << "Welcome to Calculator" << endl;
		double num_input = 0;
		while (true)
		{
			int choose;

			vector<string> Op
			{
				"[1] Add.",
				"[2] Subtract.",
				"[3] Multiply.",
				"[4] Divid.",
				"[0] Exit.",
			};
			list(Op);

			cout << "pick an operation: ";
			cin >> choose;

			if (choose == 0) break;

			cout << "Enter number" << endl;
			cout << ":";
			cin >> num_input;

			if (num_input == 0) break;
			switch (choose)
			{
			case 1:calc.Add(num_input);
				
				break;
			case 2:calc.Subtract(num_input);
				
				break; 
			case 3:calc.Multiply(num_input);
				
				break;
			case 4:calc.Divid(num_input);
				
				break;
			}

			char permission;

			vector<string> postOpMenu
			{
				"( [1] PrintResult ,"
				"[2] GetFinalResult ,"
				"[3] CancelLastOperation ,"
				"[4] Clear. )"
			};

			list(postOpMenu);
			cout << "\nDo you want to undergo one of these procedures (y/n)" << endl;
			cout << ": ";
			cin >> permission;

			if(permissions(permission))
			{
				cout << "Choose:-" << endl;
				cout << ": ";
				cin >> choose;

				switch (choose)
				{
				case 1:calc.PrintResult();
					break;
				case 2:calc.GetFinalResult();
					break;
				case 3:calc.CancelLastOperation();
					break;
				case 4:calc.Clear();
				}
			}
			system("pause");

			system("cls");
		}
		system("cls");

		calc.save_file_Process();

		system("pause");
	}
	else if (pick == 2)
	{
		calc.Get();
	}



		return 0;
}