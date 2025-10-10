#include <iostream>

using namespace std;

class Student
{
    string name;
    int id;
    bool isPresent =false;
public:
    void setData(string, int);
    void markPresent();
    void markAbsent();
    void showInfo()
    {
        cout << "=== Student Info ===" << endl;
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;

        if (isPresent) cout << "Present :)" << endl;
        else cout << "Absent." << endl;
    }
};

void Student::setData(string names, int ids)
{
    name = names;
    id = ids;
}

void Student::markPresent() { isPresent = true; }
void Student::markAbsent()  { isPresent = false; }

int main()
{
    Student student1;
    string name;
    int id;
    int attend;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter Id: ";
    cin >> id;
    cout << "Did the student attend? (1 for yes / 0 for no): ";
    cin >> attend;

    student1.setData(name, id);

    if (attend == 1)student1.markPresent();
    else student1.markAbsent();
    student1.showInfo();

    return 0;
}