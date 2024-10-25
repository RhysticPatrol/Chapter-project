#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
 ifstream MyFile("Names.txt");
 int counter = 0;
 string myText =""; 
 string mostF = ""; //variables for program
 string mostL = "";

 while (getline(MyFile, myText))//setting up comparing process
 {
    if(mostF == "") mostF = myText;
    if(mostL == "") mostL =myText;
    if(mostF.compare(myText) > 0) mostF = myText; //finding first name in list
    if(mostL.compare(myText) < 0) mostL = myText; //findinh last name in list
    counter++;
 }
 MyFile.close();
 cout << endl << mostF << endl << mostL << endl << counter;
 return 0;

}
