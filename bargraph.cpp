#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string fileName;
    cout << "Please enter the file name for the population txt file:\n";
    cin >> fileName;

    ifstream inputFile;
    inputFile.open(fileName);

    if(inputFile.is_open())
    {
        cout << "File has successfully opened";
    }
    if(inputFile.fail())
    {   
        cout << "File failed to open";
        return 1;
    }

    int year;
    int population;

    while (inputFile >> year >> population){
    
    cout << year << ": ";
    for (int i = 0; i < population/1000; i++)
    
        cout << '*';
       cout << endl;
    
    }
    inputFile.close();
    return 0;

}