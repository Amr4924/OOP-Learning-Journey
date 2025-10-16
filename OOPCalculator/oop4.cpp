#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Process
{
    double num1, num2;
public:
    Process(double, double);
    double addition() { return num1 + num2; }
    double subtraction() { return num1 - num2; }
    double multi() { return num1 * num2; }
    double division() 
    {
        if (num2 == 0)return 0;
        else return num1 / num2;
    }

};
Process::Process(double a, double b)
{
    num1 = a;
    num2 = b;
}

bool is_number(string str)
{

    for (char c : str)
    {
        if (c < '0' || c > '9') return false;
    }

    return true;
}
void ads()
{
    system("start chrome https://linktr.ee/sa3dwy");
}

int main()
{
    double numOne, numTwo;
    cout << "Enter two number: ";
    cin >> numOne >> numTwo;
    Process pros(numOne, numTwo);
    
    string ch = "0";
    int pick = 0;
    vector<string> str =
    {
        "[1] Collection process",
        "[2] Subtraction process",
        "[3] Multiplication process",
        "[4] Division process"
    };

    for (string s : str) { cout << s << endl; }

    cout << "Choose the operation" << endl;
    cout << ": " << endl;
    cin >> ch;
    
    if (is_number(ch)) pick = stoi(ch);
    else
    {
        cout << "You entered something incompatible." << endl;
    }

    system("cls");
    if (pick <= 4 && pick >= 1)
    {
        cout << "-------------- Results --------------" << endl;
        switch (pick)
        {
        case 1: cout << "Result: " << numOne << " + " << numTwo << " = " << pros.addition() << endl;
            break;
        case 2:cout << "Result: " << numOne << " - " << numTwo << " = " << pros.subtraction() << endl;
            break;
        case 3:cout << "Result: " << numOne << " * " << numTwo << " = " << pros.multi() << endl;
            break;
        case 4:cout << "Result: " << numOne << " / " << numTwo << " = " << pros.division() << endl;
        }
        cout << "______________ ------- ______________ "<< endl;
    }
    else 
    {
        cout << "You entered an incorrect number. Please see the order of the list." << endl;
    }
        system("pause");
        ads();
    
    return 0;
}