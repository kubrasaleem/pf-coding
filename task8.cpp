#include <iostream>
#include <cmath>
using namespace std;
double cd(double a, double b, double c)
{
    double disc = b * b - 4 * a * c;
    return disc;
}
void solveroots(double a, double b, double c)
{
    double discremenant = cd(a, b, c);
    cout << "Dicremenant" << discremenant << endl;
    if (discremenant > 0)
    {
        double root1 = (-b + sqrt(discremenant)) / (2 * a);
        double root2 = (-b - sqrt(discremenant)) / (2 * a);
        cout << "Solutions:";
        cout << "X=" << root1 << " and X =" << root2 << endl;
    }
    else if (discremenant == 0)
    {
        double root = -b / (2 * a);
        cout << "Solutions:";
        cout << "X= " << root << endl;
    }
    else
    {
        double realpart = -b / (2 * a);
        double imaginarypart = sqrt(-discremenant) / (2 * a);
        cout << "Complex solutions:";
        cout << "X= " << realpart << " +" << imaginarypart << " i " << endl;
        cout << "X= " << realpart << " -" << imaginarypart << " i " << endl;
    }
    cout << endl;
}
int main()
{
    double a, b, c;
    char choice;
    cout << "Enter the value of a:";
    cin >> a;
    if (a == 0)
    {
        cout << "Error! 'a' can not be zero. Not a quadratic equation." << endl;
    }
    else
    {
        cout << "Enter the value of b:";
        cin >> b;
        cout << "Enter the value of c:";
        cin >> c;
        solveroots(a, b, c);
    }
    return 0;
}