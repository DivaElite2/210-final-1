#include <iostream>
#include <fstream>
#include <map>

using namespace std;

void printAirportsInRange(const map<string, int>& airportTraffic, int low, int high) {
    cout<< "Airports with traffic between " <<low <<"and " <<high << ":" <<endl;
    bool foundAny = false;
    
}







int  main()
{
    map<string, int>airportTraffic;

    ifstream inputFile("210-final-1-FA25.txt");

    if(!inputFile.is_open()) {
        cout <<"Error: could not open file"<<endl;
        return 1;
    }

    string origin, destination;
    while(inputFile >> origin >> destination) {
         airportTraffic[origin]++;

         airportTraffic[destination]++;
    }

    inputFile.close();

    for(const auto& entry: airportTraffic) {
        cout <<entry.first << " " <<entry.second <<endl;
    }

    int maxCount = 0;

    for (const auto& entry : airportTraffic) {
        if(entry.second > maxCount) {
            maxCount = entry.second;
        }
    }

    cout<<"\nBusiest airport by count " << maxCount << ":" <<endl;
    for(const auto& entry : airportTraffic) {
        if(entry.second == maxCount) {
            cout << entry.first << endl;
        }
    }
 
    return 0;
}
