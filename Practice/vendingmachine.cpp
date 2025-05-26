#include<iostream>
using namespace std;
#include<math.h>

int main()
{
int product,type; double money,change;
                                      
    cout<<"Welcome! Press 1 for Drinks\nPress 2 for Snacks\nPress 3 for Candies\n"; //Menu for products
    cout<<"Enter the product you wish to purchase: ";
    cin>>product; 
 switch (product)
 {
    case 1: 
        cout<<"Press 1 for Water (50Rs)\nPress 2 for Soda (100Rs)\nPress 3 for Juice (80Rs)\n"; //Menu for type of drink
        cout<<"Please select the type of drink you wish to purchase: "; 
         cin>>type;
         switch (type)    
         {
           case 1:
              cout<<"Put 50Rs in the vending machine: "; //Water
              cin>>money;
              if(money>=50) //change
              {
                 change=money-50;
                 cout<<"Your change is Rs."<<change<<"\n";
                 cout<<"Thank you for using the vending machine";
              }    
              else
              {
                cout<<"Sorry you have entered an insufficient amount";
              }
            break;  

           case 2:
              cout<<"Put 100Rs in the vending machine: "; //Soda
              cin>>money;
              if(money>=100) //change
              {
                change=money-100;
                cout<<"Your change is Rs."<<change<<"\n";
                cout<<"Thank you for using the vending machine";
              }
              else
              {
                cout<<"Sorry you have entered an insufficient amount";
              }
            break;

            case 3:
               cout<<"Put 80 Rs in the vending machine: "; //Juice
               cin>>money;
               if(money>=80) //change
               {
                change=money-80;
                cout<<"Your change is Rs."<<change<<"\n";
                cout<<"Thank you for using the vending machine";
               }
               else
               {
                cout<<"You have entered an insufficient amount";
               }
            break;

            default:
             cout<<"Invalid choice";
         }
    break;

    case 2:
       cout<<"Press 1 for Chips(100Rs)\nPress 2 for Cookies(220Rs)\nPress 3 for Crackers(120Rs)\n";//Menu for type of snacks
        cout<<"Please select the type of snacks you wish to purchase: ";
        cin>>type;
        switch(type)
        {
           case 1:
              cout<<"Put 100Rs in the vending machine: "; //Chips
              cin>>money;
              if(money>=100) //change
              {
                change=money-100;
                cout<<"Your change is Rs."<<change<<"\n";
                cout<<"Thank you for using the vending machine";
              }
              else
              {
                cout<<"Sorry you have entered an insufficient amount";
              }
            break;

            case 2:
               cout<<"Put 220Rs in the vending machine: "; //Cookies
               cin>>money;
               if(money>=220) //change
               {
                change=money-220;
                cout<<"Your change is Rs."<<change<<"\n";
                cout<<"Thank you for using the vending machine";
               }
               else
               {
                cout<<"You have entered an insufficient amount";
               }
            break;

            case 3:
               cout<<"Put 120Rs in the vending machine: "; //Crackers
               cin>>money;
               if(money>=120) //change
               {
                change=money-120;
                cout<<"Your change is Rs."<<change<<"\n";
                cout<<"Thank you for using the vending machine";
               }
               else
               {
                cout<<"Sorry you have entered an insufficient amount";
               }
            break; 

            default:
             cout<<"Invalid choice";   
        } 
    break;

    case 3:
       cout<<"Press 1 for Chocolate(100Rs)\nPress 2 for Gummy Bears(150Rs)\nPress 3 for Lollipops(120Rs)\n"; //Menu for candies
       cout<<"Please select the type of candy you wish to purchase: ";
        cin>>type;
        switch(type)
        {
            case 1:
               cout<<"Put 100Rs in the vending machine: "; //Chocolate
               cin>>money;
               if(money>=100) //change
               {
                change=money-100;
                cout<<"Your change is Rs."<<change<<"\n";
                cout<<"Thank you for using the vending machine";
               }
               else
               {
                cout<<"Sorry you have entered an insufficient amount";
               }
            break;

            case 2:
               cout<<"Put 150Rs in the vending machine: "; //Gummy Bears
               cin>>money;
               if(money>=150) //change
               {
                change=money-150;
                cout<<"Your change is Rs."<<change<<"\n";
                cout<<"Thank you for using the vending machine";
               }
               else
               {
                cout<<"Sorry you have entered an insufficient amount";
               }
            break;

            case 3:
               cout<<"Put 120Rs in the vending machine: "; //Lollipop
               cin>>money;
               if(money>=120) //change
               {
                change=money-120;
                cout<<"Your change is Rs."<<change<<"\n";
                cout<<"Thank you for using the vending machine";
               }
               else
               {
                cout<<"Sorry you have entred an in sufficient amount";
               }
            break;

            default:
             cout<<"Invalid choice";  
        }
    break;

    default:
     cout<<"Invalid choice";       
 }
return 0;  
}