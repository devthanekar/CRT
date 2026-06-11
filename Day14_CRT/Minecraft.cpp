#include <iostream>
using namespace std;

int wood = 0;
int stone = 0;
int iron = 0;

bool woodenPickaxe = false;
bool stonePickaxe = false;

void showInventory()
{
    cout << "\n===== INVENTORY =====\n";
    cout << "Wood: " << wood << endl;
    cout << "Stone: " << stone << endl;
    cout << "Iron: " << iron << endl;

    cout << "\nTools:\n";
    if(woodenPickaxe)
        cout << "- Wooden Pickaxe\n";

    if(stonePickaxe)
        cout << "- Stone Pickaxe\n";

    if(!woodenPickaxe && !stonePickaxe)
        cout << "No tools\n";
}

void mineWood()
{
    wood += 5;
    cout << "\nYou chopped 5 wood.\n";
}

void mineStone()
{
    if(!woodenPickaxe)
    {
        cout << "\nYou need a Wooden Pickaxe!\n";
        return;
    }

    stone += 3;
    cout << "\nYou mined 3 stone.\n";
}

void mineIron()
{
    if(!stonePickaxe)
    {
        cout << "\nYou need a Stone Pickaxe!\n";
        return;
    }

    iron += 2;
    cout << "\nYou mined 2 iron.\n";
}

void craftWoodenPickaxe()
{
    if(wood >= 10)
    {
        wood -= 10;
        woodenPickaxe = true;
        cout << "\nWooden Pickaxe Crafted!\n";
    }
    else
    {
        cout << "\nNot enough wood.\n";
    }
}

void craftStonePickaxe()
{
    if(stone >= 10)
    {
        stone -= 10;
        stonePickaxe = true;
        cout << "\nStone Pickaxe Crafted!\n";
    }
    else
    {
        cout << "\nNot enough stone.\n";
    }
}

int main()
{
    int choice;

    cout << "========================\n";
    cout << " TEXT MINECRAFT GAME\n";
    cout << "========================\n";

    do
    {
        cout << "\n1. Mine Wood";
        cout << "\n2. Mine Stone";
        cout << "\n3. Mine Iron";
        cout << "\n4. Craft Wooden Pickaxe";
        cout << "\n5. Craft Stone Pickaxe";
        cout << "\n6. View Inventory";
        cout << "\n7. Exit";
        cout << "\n\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                mineWood();
                break;

            case 2:
                mineStone();
                break;

            case 3:
                mineIron();
                break;

            case 4:
                craftWoodenPickaxe();
                break;

            case 5:
                craftStonePickaxe();
                break;

            case 6:
                showInventory();
                break;

            case 7:
                cout << "\nThanks for playing!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 7);

    return 0;
}
