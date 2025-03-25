
#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime>   
#include <vector>
#include <map>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::rand;
using std::vector;
using std::map;

void jumpLine() {
    cout << endl;
}


void Fighting() {
    cout << "*Slash*" << endl;
    
    void JumpLine();
    cout << "You gained Strength Skill" << endl;
}

int FatStackOfCashGenerator(int* Dollas) {
   
    *Dollas += ((rand() % 7)) + 1 * 99;
    return *Dollas;
}

int main() {
    srand(time(NULL));

  
    string Name;
    string KingsName = "Jerome"; // King's name

    
    vector<string> weaponList{ "Knife", "Fist", "Gun" };

    
    int StrengthDice = ((rand() % 6) + 1) * 3;
    int MagicDice = ((rand() % 6) + 1) * 3;

    
    int Stamina = 6;
    int PlayerMoney = 100;

    
    map<string, int> abilities{
        { "Luck", 2 },
        { "MaxMana", 5 },
        { "MaxStamina", 4 }
    };

   
    cout << "Enter your name: ";
    cin >> Name;
    cout << "Hello " << Name << "!" << endl;
    cout << "My name is " << KingsName << "." << endl;
    cout << "Your strength is " << StrengthDice << endl;
    cout << "Your magic is " << MagicDice << endl;

   
    cout << "Your bag contains: " << endl;
    for (size_t i = 0; i < weaponList.size(); i++) {
        cout << "\t- " << weaponList[i] << endl;
    }

    jumpLine();
    cout << "Here is another for you" << endl;

  
    weaponList.push_back("Potion");
    cout << "You received a " << weaponList[3] << ". Your bag now contains:" << endl;

    // Print updated weapon list.
    for (const string& weapon : weaponList) {
        cout << "\t- " << weapon << endl;
    }

    // Display abilities.
    cout << "Your ability 'Luck': " << abilities["Luck"] << endl;
    cout << "Your Max Mana is " << abilities["MaxMana"] << endl;
    cout << "Your Max Stamina is " << abilities["MaxStamina"] << endl;
    jumpLine();

    // Choose player class.
    cout << "Choose Your Class" << endl;
    cout << "1 is mage" << endl;
    cout << "2 is warrior" << endl;
    cout << "3 is berserker" << endl;
    cout << "anything more is a peasant" << endl;

    int Gameclass = 0;
    cin >> Gameclass;

    switch (Gameclass) {
    case 1:
        cout << "You are a mage" << endl;
        break;
    case 2:
        cout << "You are a warrior" << endl;
        break;
    case 3:
        cout << "Berserker" << endl;
        break;
    default:
        cout << "You are a peasant" << endl;
        break;
    }

    
    cout << "You enter the courtyard to practice" << endl;
    jumpLine();
    cout << "You approach a training dummy" << endl;

    
    do {
        Fighting();
        StrengthDice++; 
        Stamina --;     
    } while (StrengthDice < 10);

    jumpLine();
    jumpLine();
    jumpLine();

    cout << "Your Strength skill is now " << StrengthDice << endl;
    cout << "You notice something on the floor and pick it up" << endl;

    FatStackOfCashGenerator(&PlayerMoney);


    cout << "You collected somebody's money from the floor! Your money is now: " << PlayerMoney << endl;

    return 0; // Explicit return statement for clarity.
}
