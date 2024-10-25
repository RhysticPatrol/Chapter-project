#include <iostream>

using namespace std;

int main()
{
    int organisms; //setting up variables
    int populate;
    int days;
    cout << "Please enter the starting population size:\n";
    cin >> organisms;
    if(organisms < 2) // restriction
    {
        cout << "The population can not reproduce if the population is less than 2";
        return 0;
    }
    cout << "Now pleae enter the daily population increase:\n";
    cin >> populate;
    if(populate < 0) // restriction
    {
        cout << "This program is designed to calculate popualation increase not decreasing.";
        return 0;
    }
    cout << "Finally, enter the number of days to calculate:\n";
    cin >> days;
    if(days < 1) // restriction
    {
        cout << "Number of days less than one are not valid in this programm. Please try again.";
        return 0;
    }
    for(int final; final <= days; ++final) //loop to print results
    {
        int populate = populate * organisms;
        cout << populate << endl;
    }
    return 0;
}
