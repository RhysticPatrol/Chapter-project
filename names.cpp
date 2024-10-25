#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
 ifstream MyFile("Names.txt");
 int counter = 0;
 string myText ="";
 string mostF = "";
 string mostL = "";

 while (getline(MyFile, myText))
 {
    if(mostF == "") mostF = myText;
    if(mostL == "") mostL =myText;
    if(mostF.compare(myText) > 0) mostF = myText;
    if(mostL.compare(myText) < 0) mostL = myText;
    counter++;
 }
 MyFile.close();
 cout << endl << mostF << endl << mostL << endl << counter;
 return 0;

}