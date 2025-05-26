#include<iostream>
using namespace std;
int main()
{
    string  name;
    int choice, gadget, enemy_health=100, your_health=100;
    char inventory, action;
    cout<<"what is your name? ";
    cin>>name;
    cout<<"hey "<<name<<" aliens have kidnapped shizuka and you have to accompany Doraemon,Nobita and team to help them rescue shizuka\n";
    cout<<"you have entered the alien's territory, it is extremely  dark out here and we have to rescue shizuka before the aliens wake up\n MAKE YOUR CHOICE CAREFULLY OR ELSE WE WILL LOOSE SHIZUKA!!\n";
    cout<<"press 1 to look for shizuka in the boiler room\n press 2 to look for shizuka in the UFO station\n press 3 to look for shizuka in the dungeon\n";
    cout<<"hint: shizuka is somewhere very dark\n";
    cin>>choice;
    if (choice==1)
    {
       cout<<"chef alien woke up and pushed you in the boiler\n";
       cout<<"GAME OVER!!";
    }
    else if (choice==2)
    {
        cout<<"alien's soilder shot you\n";
        cout<<"GAME OVER!!";
    }
    else if (choice==3)
    {
       cout<<"you have entered in the dungeon,it is very dark in here, shizuka might be in anywhere in this dungeon, we have to rescue her before the alien wakes up\n";
       cout<<"press k to view your inventory";
       cin>>inventory;
       if (inventory=='k')
       {
         cout<<"press 1: invisiblity cloak\n";
         cout<<"press 2: night vision glasses\n";
         cout<<"press 3: sword\n";
       }
       cout<<"choose one gadget from your inventory";
       cin>>gadget;
       if (gadget==1)
       {
           cout<<"invisiblity cloak was of no use here try again later";
       }
       else if(gadget==2)
       {
           cout<<"night vision glasses will help you see things clearly in the dark\n";
           cout<<"shizuka is in cell#4\n";
           cout<<"you have reached at cell#4, but first  you will have to fight with the alien guarding shizuka\n";
           cout<<"\npress k to view your inventory";
           cin>>inventory;
           if(inventory=='k')
           {
               cout<<"press 1: invisiblity cloak\n";
               cout<<"press 2: sword\n";
           }
           cout<<"choose one gadget from your inventory";
           cin>>gadget;
           if (gadget==1)
           {
               cout<<"it is of no use in this situation, try again later\n";
           }
           else if(gadget==2)
           {
               while(enemy_health>0 && your_health>0)
               {
                   cout<<"enemy health= "<<enemy_health<<"\nyour health= "<<your_health<<endl;
                   
                   cout<<"press f to attack the alien ";
                   cin>>action;
                   if(action=='f')
                   {
                       enemy_health=enemy_health-40;
                   }
                   else
                   {
                       your_health=your_health-40;
                   }
               }
               if (your_health==0)
               {
                   cout<<"GAME OVER!!";
               }
               else
               {
                   cout<<"alien is dead, yayyy!!\n";
                   cout<<"congragulations for saving shizuka, now you have to get her out of the alien's territory safely\n";
                   cout<<"choose a gadget from your inventory, press k to view your inventory\n";
                   cin>>inventory;

                   if (inventory=='k')
                   {
                       cout<<"press 1: invisiblity cloak";
                   }
                   cin>>gadget;
                   if (gadget==1)
                   {
                       cout<<"invisiblity cloak will help you to get shizuka out of alien,s territory easily without them spotting you";
                       cout<<"yayy..you wonn!!";
                   }
                   else
                   {
                       cout<<"invalid choice";
                   }
               }    
           }
           else
            {
                cout<<"Invalid Gadget";
            }     
       }
       else
       {
           cout<<"sword is of no use try again later";
       }
    }
    else
    {
        cout<<"invalid input";
    }
}
