#include <iostream>
#include <limits>
#include <cstdlib>
using namespace std;
int inventoryadd1=0,inventoryadd2=0,inventoryadd3=0;
void combat()
{
    int health,enemyhealth;
    char fightingpress;
    health=20;
    enemyhealth=20;
    while(health>0 && enemyhealth>0)
    {
        cout<<"\nPress h to fight with the enemy\n";
        cin>>fightingpress;
        if (fightingpress=='h')
        {enemyhealth=enemyhealth-5;
        health=health-1;
        cout<<"\nYou both are fighting with each other and You both hit each other";
        cout<<"\nYour Health="<<health<<"/20";
        cout<<"\nEnemy health="<<enemyhealth<<"/20";}
    }
    cout<<"\n----------You encountered the enemy-------------\n";
    cout<<"Another enemy is comming";
    enemyhealth=20;
    while(health>0 && enemyhealth>0)
    {
        cout<<"\nPress h to fight with the enemy\n";
        cin>>fightingpress;
        if (fightingpress=='h')
        {enemyhealth=enemyhealth-4;
        health=health-2;
        cout<<"\nYou both are fighting with each other and You both hit each other";
        cout<<"\nYour Health="<<health<<"/20";
        cout<<"\nEnemy health="<<enemyhealth<<"/20";}
    }
    cout<<"\n----------You encountered the enemy-------------\n";
     cout<<"Another enemy is comming";
    enemyhealth=20;
    while(health>0 && enemyhealth>0)
    {
        cout<<"\nPress h to fight with the enemy\n";
        cin>>fightingpress;
        if (fightingpress=='h')
        {enemyhealth=enemyhealth-2;
        health=health-2;
        cout<<"\nYou both are fighting with each other and You both hit each other";
        cout<<"\nYour Health="<<health<<"/20";
        cout<<"\nEnemy health="<<enemyhealth<<"/20";}
    }
    cout<<"\n You have died";
    cout<<"\n---------- Game Over-------------\n";
}

void addtoinventory()
{
string inventorybox;
    if(inventoryadd1==1 && inventoryadd2==1 && inventoryadd3==1)
    {
        cout<<"Inventory:\nmoney\nmysterious artifect\ngold\n";
    }
    else if(inventoryadd1==1 && inventoryadd2==1)
    {
        cout<<"Inventory:\nmoney\nmysterious artifect\n";
    }
    else if(inventoryadd1==1 && inventoryadd3==1)
    {
        cout<<"Inventory:\nmoney\ngold\n";
    }
    else if(inventoryadd2==1 && inventoryadd3==1)
    {
        cout<<"Inventory:\nmysterious artifect\ngold\n";
    }
    else if(inventoryadd1==1)
    {
        cout<<"Inventory:\nmoney\n";
    }
    else if(inventoryadd2==1)
    {
        cout<<"Inventory:\nmyaterious artifect\n";
    }
    else if(inventoryadd3==1)
    {
        cout<<"Inventory:\ngold\n";
    }
    else
    {
        cout<<"Invalid Input";
    }
}

int main()
{
int startingpress, directionpress, viewinventory, exploringpress, fightorfleechoice, yourhealth=20, enemyhealth=20;
string name;
    cout<<"Welcome to GTA 69\n";
    cout<<"Please enter your name\n";
    cin>>name;
    cout<<"Hey "<<name<<"!! Hope you will enjoy the game\n";
    cout<<"Press 1 to START the game";
    cin>>startingpress;
    if (startingpress==1)
    {
        cout<<"Game Started";
        cout<<"You are Given three directions(north, east & west)\n";
        for(int i=1;i<numeric_limits<int>::max();i++)
        {
        cout<<"Press 1 to move towards north\nPress 2 to move towards east\nPress 3 to move towards west\nPress 4 to check health\nPress 5 to Quit the game\n";
        cin>>directionpress;
        switch(directionpress)
        {
            case 1:
            {
                cout<<"You are in the forest\n";
                cout<<"There is money in the forest\n";
                cout<<"Press 1 to add money to the inventory\n";
                cin>>inventoryadd1;
                if(inventoryadd1==1)
                {
                    cout<<"You have collected the money.\n";
                }
                cout<<"Press 2 to view inventory";
                cin>>viewinventory;
                if (viewinventory==2)
                {
                     addtoinventory();
                }
                cout<<"\nPress 3 to explore the Forest\n";
                cin>>exploringpress;
                if (exploringpress==3)
                {
                    cout<<"The forest is dangeorous because enemies are there\n";
                }
                break;
            }
            case 2:
            {
                cout<<"You are in the cave\n";
                cout<<"There is Mysterious Artifect in the cave\n";
                cout<<"Press 1 to collect the Mysterious Artifect\n";
                cin>>inventoryadd2;
                if(inventoryadd2==1)
                {
                    cout<<"You have collected the mysterious artifect.\n";
                }
                 cout<<"Press 2 to view inventory";
                cin>>viewinventory;
                if (viewinventory==2)
                {
                     addtoinventory();
                }
                cout<<"\nPress 3 to explore the cave\n";
                cin>>exploringpress;
                if (exploringpress==3)
                {
                    cout<<"The cave is peacefull.\n";
                }
                break;
            }
            case 3:
            {
                cout<<"You are in the forest\n";
                cout<<"There is gold in the forest\n";
                cout<<"Press 1 to collect the gold\n";
                cin>>inventoryadd3;
                if(inventoryadd3==1)
                {
                    cout<<"You have collected the gold.\n";
                }
                cout<<"Press 2 to view inventory";
                cin>>viewinventory;
                if (viewinventory==2)
                {
                     addtoinventory();
                }
                cout<<"\nPress 3 to explore the forest\n";
                cin>>exploringpress;
                if (exploringpress==3)
                {
                    cout<<"The forest is dangeorous because enemies are there\n";
                }
                cout<<name<<"!! get ready. Enemies are coming to attack on you.\nPress 1 to Fight with the enemy\nPress 2 to flee";
                cin>>fightorfleechoice;
                if (fightorfleechoice==1)
                {
                    combat();
                    exit(0);
                }
                if (fightorfleechoice==2)
                {
                    cout<<"You have choosed to flee. Game over\n";
                    exit(0);
                }
                break;
            }
            case 4:
            {
                cout<<"Health = "<<yourhealth;
                break;
            }
            case 5:
            {
                cout<<"You quit the game";
                break;
            }
            default:
                cout<<"Invalid Input";
        }
        }
        
    }
return 0;
}