// This program is an Adventure RPG Stats Calculator
// Anael Redrovan 
// March 23 2026 


#include <iostream>
#include <string>


using namespace std;

// Task 1: XP to Level
int xpToLevel(int xp);  // function prototype

// Task 2: Compute Attack Power
double computeAttackPower(int strength, double weaponMultiplier);

// Task 3: Rank Category
string rankCategory(int level);

// Task 4: Clamp Stat
void clampStat(int& value, int min, int max);

// Task 5: Character Creation
void runCharacterCreation();

int main() {
    // Run the character creation workflow
    runCharacterCreation();
    return 0;
}

// -------------------- Function Definitions --------------------

// Task 1
int xpToLevel(int xp) {
    return xp / 100;
}

// Task 2
double computeAttackPower(int strength, int weaponMultiplier) {
    return strength * weaponMultiplier;
}

// Task 3
string rankCategory(int level) {
    if (level < 3) {
        return "Novice";
    }
    else if (level <= 5) {
        return "Apprentice";
    }
    else if (level <= 9) {
        return "Warrior";
    }
    else {
        return "Master";
    }
}

// Task 4
void clampStat(int& value, int min, int max) {
    if (value < min) {
        value = min;
    }
    else if (value > max) {
        value = max;
    }
}

// Task 5
void runCharacterCreation() {
    string name;
    int xp;
    int strength;
    int weaponMultiplier;

    cout << "Enter character name: ";
    getline(cin, name);

    cout << "Enter XP: ";
    cin >> xp;

    cout << "Enter strength (1-20): ";
    cin >> strength;
    clampStat(strength, 1, 20);
    cout << "Enter weapon multiplier: ";
    cin >> weaponMultiplier;

    // Compute stats
    int level = xpToLevel(xp);
    double attackPower = computeAttackPower(strength, weaponMultiplier);
    string rank = rankCategory(level);

    // Print summary
    cout << "--- Character Summary ---" << endl;
    cout << "Name: " << name << endl;
    cout << "XP: " << xp << endl;
    cout << "Level: " << level << endl;
    cout << "Rank: " << rank << endl;
    cout << "Strength (clamped): " << strength << endl;
    cout << "Weapon multiplier: " << weaponMultiplier << endl;
    cout << "Attack Power: " << attackPower << endl;
}