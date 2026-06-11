#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int playerHealth = 100;
int gold = 0;

void showStats()
{
    cout << "\n===== PLAYER STATS =====\n";
    cout << "Health: " << playerHealth << endl;
    cout << "Gold: " << gold << endl;
}

void fightMonster()
{
    int monsterHealth = rand() % 41 + 10; // 10-50

    cout << "\nA monster appears!\n";
    cout << "Monster Health: " << monsterHealth << endl;

    while(monsterHealth > 0 && playerHealth > 0)
    {
        int damage = rand() % 16 + 5; // 5-20
        monsterHealth -= damage;

        cout << "You hit the monster for "
             << damage << " damage.\n";

        if(monsterHealth <= 0)
        {
            cout << "Monster defeated!\n";

            int reward = rand() % 21 + 10;
            gold += reward;

            cout << "You found "
                 << reward
                 << " gold.\n";
            return;
        }

        int monsterDamage = rand() % 11 + 5;
        playerHealth -= monsterDamage;

        cout << "Monster hits you for "
             << monsterDamage
             << " damage.\n";
    }
}

void openChest()
{
    int reward = rand() % 51 + 20;

    cout << "\nYou found a treasure chest!\n";
    cout << "Gold found: " << reward << endl;

    gold += reward;
}

int main()
{
    srand(time(0));

    int choice;

    cout << "========================\n";
    cout << "   DUNGEON CRAWLER\n";
    cout << "========================\n";

    while(playerHealth > 0)
    {
        cout << "\nChoose Action:\n";
        cout << "1. Explore Room\n";
        cout << "2. View Stats\n";
        cout << "3. Exit Dungeon\n";
        cout << "Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                int event = rand() % 3;

                if(event == 0)
                {
                    fightMonster();
                }
                else if(event == 1)
                {
                    openChest();
                }
                else
                {
                    cout << "\nEmpty room.\n";
                }

                break;
            }

            case 2:
                showStats();
                break;

            case 3:
                cout << "\nYou escaped the dungeon!\n";
                cout << "Final Gold: " << gold << endl;
                return 0;

            default:
                cout << "Invalid choice!\n";
        }
    }

    cout << "\nYou have died!\n";
    cout << "Game Over!\n";

    return 0;
}
