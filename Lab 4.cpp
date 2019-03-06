#include<iostream>
#include <string>
#include <iomanip>
using namespace std;
const int NUM_LOCATIONS = 10;
int low;
int low2;
int high;
int high2;
double avg;

//Lowest Function
int lowestIndex (int arg[], int length) {
    for (int n = 0; n < length; n++) {
        
            if(n == 0){
                low = arg[n];
                    low2 = n;
                }
            if( arg[n] < low){
                low = arg[n];
                    low2 = n;
                }
    }
    return low2;
}

//Highest Function
int highestIndex (int arg[], int length){
        for (int n = 0; n < length; n++) {
           
            if(n == 0){
                high = arg[n];
                    high2 = n;
            }
            
            if( arg[n] > high){
                high = arg[n];
                    high2 = n;
            }
    }
    return high2;
}

//Average Function
int getAverage(int arg[], int length){
    double sum = 0;
        for (int n = 0; n < length; n++) {
            sum = sum + arg[n];
                avg = sum/NUM_LOCATIONS;
    }
    return avg;
}

//Main
int main(){
    string locations[NUM_LOCATIONS] =  {"Eureka",
                                        "Ukiah",
                                        "Redding",
                                        "Sacramento",
                                        "Santa Rosa",
                                        "Oakland",
                                        "San Francisco",
                                        "Livermore",
                                        "Mountain View",
                                        "San Jose",
                                        };
    
        for(int x=0; x<NUM_LOCATIONS;){
            cout << "Enter the rainfall totals for " << locations[x] << ": ";
                int firstarray[NUM_LOCATIONS];
                    cin >> firstarray[x];
    
                        if(firstarray[x] > 0 && firstarray[x] < 100){
                            x++;
                            }
                        if(x == NUM_LOCATIONS){
                            lowestIndex(firstarray, NUM_LOCATIONS);
                            getAverage(firstarray, NUM_LOCATIONS);
                            highestIndex(firstarray, NUM_LOCATIONS);
                            }
                        else if( firstarray[x] < 0 || firstarray[x] > 100){
                            cout << "Please re-enter" << endl;
                            }
        };
    cout<< setprecision(2) << fixed;
    cout << endl << "------------------------Results------------------------" << endl;
    cout << "The average rainfall across all cities is " << avg << " inches." << endl;
    cout << "The city with the lowest rainfall is " << locations[low2] << " with " << low << " inches of rain." <<endl;
    cout << "The city with the highest rainfall is " << locations[high2] << " with " << high << " inches of rain." <<endl;
}
