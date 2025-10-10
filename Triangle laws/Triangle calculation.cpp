#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Triangle
{
    double a, b, c ;
public:
    void setData(int ,int, int);
    double area();
    int Perimeter();
    double Heron();
};

void Triangle::setData(int k, int d,int l)
{
    a = k;
    b = d;
    c = l;
}
double Triangle::area() { return 0.5 * a * b;}
int Triangle::Perimeter() { return a + b + c; }
double Triangle::Heron()
{ 
    double s = (a + b + c) / 2;
    double sqr = s * (s - a) * (s - b) * (s - c);
    return sqrt(sqr);
}

void print(vector<string> l)
{
    for (string s : l)
    {
        cout << s << endl;
    }
}


int main()
{
    Triangle triangle;
    int base, height, height2;

    vector<string> list =
    {
        "[1] Area of ​​triangle.",
        "[2] Perimeter of triangle.",
        "[3] Heron's law.",
    };
    print(list);
    int pick;

    cout << "|_______-> Pick to list <-_______|" << endl;
    cout << ": ";
    cin >> pick;


    if (pick == 1)
    {
        cout << "Enter The Base" << endl;
        cin >> base;
        cout << "Enter The Height" << endl;
        cin >> height;
        triangle.setData(base, height, 0);
        cout << triangle.area();
    }
    else if (pick == 2)
    {
        cout << "Enter the lengths of the three sides." << endl;
        cout << ": ";
        cin >> base >> height >> height2;
        triangle.setData(base, height, height2);
        cout << triangle.Perimeter() << endl;
    }
    else if (pick == 3)
    {
        cout << "Enter the lengths of the three sides." << endl;
        cout << ": ";
        cin >> base >> height >> height2;
        triangle.setData(base, height, height2);
        cout << triangle.Heron() << endl;
    }

    

    return 0;
}