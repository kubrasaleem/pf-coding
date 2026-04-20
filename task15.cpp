#include <iostream>
using namespace std;
string calculatePoolState(int V, int P1, int P2, float H)
{
    float totalWater = (P1 + P2)*H;
    if (totalWater > V)
    {
        float overflow = totalWater - V;
        cout<< "For " << H << " hours the pool overflows with "
             << (int)overflow << " liters.";
    }
    else
    {
        int poolPercent = (int)((totalWater / V) * 100);
        int pipe1Percent = (int)(((P1 * H) / totalWater) * 100);
        int pipe2Percent = (int)(((P2 * H) / totalWater) * 100);

        cout<<"The pool is "<< poolPercent << "% full. "<<
               "Pipe 1: " << pipe1Percent<< "%. "<< 
               "Pipe 2: " << pipe2Percent<< "%.";
    }
}
int main()
{
    int V, P1, P2;
    float H;
    cout << "Enter volume of the pool in liters (1-10000): ";
    cin >> V;
    cout << "Enter flow rate of Pipe 1 per hour (1-5000): ";
    cin >> P1;
    cout << "Enter flow rate of Pipe 2 per hour (1-5000): ";
    cin >> P2;
    cout << "Enter hours worker is absent (1-24): ";
    cin >> H;
    calculatePoolState(V, P1, P2, H);

    return 0;
}