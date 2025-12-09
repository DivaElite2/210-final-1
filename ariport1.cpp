#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int  main()
{
    map<string, int>airportTraffic;

    ifstream inputFile("210-final-1FA25.txt");

    if(!inputFile.is_open()) {
        cout <<"Error: could not open file"<<endl;
        return 1;
    }

    string origin, destination;
    while(inputFile >> origin >> destination) {
         airportTraffic[origin]++;
         
    }
 
    return 0;
}
