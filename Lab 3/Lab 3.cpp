#include <iostream>
#include <iomanip>

using namespace std;
double calculateCharges(double x, int y);
double hoc;
int low;


int main()
{
    string low2;
        cout << fixed << setprecision(2);
    
    cout << "Enter the number of hours charging: ";
        cin >> hoc;                                  // hours of charging
    
        double net1 = calculateCharges(1, 10);       //Per hour, fee
            cout << "Network 1: $" << net1 << endl;
        double net2 = calculateCharges(2.50, 0);
            cout << "Network 2: $" << net2 << endl;
        double net3 = calculateCharges(.50, 20);
            cout << "Network 3: $" << net3 << endl;

        if((net1 < net2)&&(net1 < net3)){           //Lowest network
            low = net1;
            low2 = "Network 1";
        }
        if((net2 < net1)&&(net2 < net3)){
            low = net2;
            low2 = "Network 2";
        }
        if((net3 < net1)&&(net3 < net2)){
            low = net3;
            low2 = "Network 3";
        }
    
        cout << "The lowest cost network is " << low2 << " at $" << low << endl;
    
    return 0;
}

double calculateCharges(double x, int y)           // function returns each cost
{
    double value = y + (x*hoc);
    return value;
}
