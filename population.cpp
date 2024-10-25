#include <iostream>

using namespace std;

int main()
{
    int organisms;
    int populate;
    int days;
    cout << "Please enter the starting population size:\n";
    cin >> organisms;
    if(organisms < 2)
    {
        cout << "The population can not reproduce if the population is less than 2";
        return 0;
    }
    cout << "Now pleae enter the daily population increase:\n";
    cin >> populate;
    if(populate < 0)
    {
        cout << "This program is designed to calculate popualation increase not decreasing.";
        return 0;
    }
    cout << "Finally, enter the number of days to calculate:\n";
    cin >> days;
    if(days < 1)
    {
        cout << "Number of days less than one are not valid in this programm. Please try again.";
        return 0;
    }
    for(int final; final <= days; ++final)
    {
        int populate = populate * organisms;
        cout << populate << endl;
    }
    return 0;
}