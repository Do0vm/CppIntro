// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#include <vector>
#include <map>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::rand;
using std::vector;
using std::map;


void jumpLine()
{

    cout << endl;
}

void Fighting()
{
    cout << "Slash" << endl;

  

    cout << "You gained Skill1" << endl;
    
}


int FatStackOfCashGenerator()
{


}

int main()
{
    srand(time(NULL)); // Seed random number generator

    string Name;
    string KingsName = "Jerome"; // Removed extra spaces

    vector<string> weaponList{ "Knife", "Fist", "Gun" };
    
    int StrengthDice = ((rand() % 6) + 1) * 3;
    int MagicDice = ((rand() % 6) + 1) * 3;
    int stamina = 6;


    map<string, int> abilities
    {
        { "Luck", 2},
        { "MaxMana", 5 },
        { "MaxStamina", 4 },

    };

    cout << "Enter your name: ";
    cin >> Name;

    cout << "Hello " << Name << "!" << endl;
    cout << "My name is " << KingsName << "." << endl;

    cout << "Your strength is " << StrengthDice << endl;
    cout << "Your magic is " << MagicDice << endl;

    cout << "Your bag contains: "  << endl;


    for (int i = 0; i < weaponList.size(); i++)
    {
        cout << "\t-" << weaponList[i] << endl;


    }
    jumpLine();
    cout << "Here is another fpr you" << endl;

    weaponList.push_back("Potion");

    cout << "You recieved a " << weaponList[3]<< " Your bag now contains" << endl;

    for (const string& weapon : weaponList)
    {
        cout << "\t- " << weapon << endl; 
    }





    cout << "Your ability Luck" << abilities["Luck"] << endl;

    

    cout << "Your Max Mana is " << abilities["MaxMana"] << endl;
    cout << "Your Max Stamina is " << abilities["MaxStamina"] << endl;
    jumpLine();

    cout << "Choose Your Class" << endl;
    cout << "1 is mage" << endl;
    cout << "2 is warrior" << endl;
    cout << "3 is Berserke" << endl;
    cout << "anything more is a peasent" << endl;


    int gameclass= 0;
    
    cin >> gameclass;

    switch (gameclass)
    {
    case 1:
        cout << "You are a mage" << endl;
        break;

    case 2:
        cout << "You are a Warrior" << endl;
        break;

    case 3:
        cout << "Berseker" << endl;
        break;

    default:

        cout << "You are a peasent" << endl;
        break;
    }


    cout << "You enter the courtyard to practice" << endl;
    jumpLine();
    cout << "You approach a training dummy" << endl;

    do
    {

        
        Fighting();

        StrengthDice ++;

        stamina - 1;

    } while (StrengthDice < 10);
   


    cout << "You skill is now "<< StrengthDice << endl;









    return 0; // Explicit return statement
}


