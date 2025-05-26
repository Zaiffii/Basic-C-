#include<iostream>
using namespace std;
#include<math.h>

int main()
{
 int operation,type,angle; float no1,no2,result;      
   cout<<"Welcome! Press 1 for Arithmetic Operations (Addition, Subtraction, Multiplication, Division)\nPress 2 for Trignometric Operations (Sine, Cosine, Tangent)\nPress 3 for Exponential & Logarithmic Operations (Power, Logarithm)\nPlease Enter the operation that you want to perform: "; //Menu for operations
   cin>>operation;
   switch(operation)
   {
      case 1:
          cout<<"Press 1 for division(/)\nPress 2 for multiplication(*)\nPress 3 for addition(+)\nPress 4 for subtraction(-)\n"; //Menu for arithmetic operations
          cout<<"Please enter the type of arithmetic operation that you want to perform: ";
          cin>>type;
          cout<<"Please enter your first number: ";
          cin>>no1;
          cout<<"Please enter your second number: ";
          cin>>no2;
          switch(type)
          { 
                case 1: //Divide
                switch(int(no2))
                {
                        case 0:
                           cout<<"division by 0 is not possible";
                           break;
                        
                        default:
                         result=no1/no2;
                         cout<<"Answer: "<<result<< endl;
                         break;
                                
                }
                break;
                
              case 2:  //Multiply
                 result=no1*no2;
                cout<<"Answer: "<<result<< endl;
              break;

              case 3:  //Plus
                result=no1+no2;
                cout<<"Answer: "<<result<< endl;
              break;

              case 4:  //Subtract
                 result=no1-no2;
                cout<<"Answer: "<<result<< endl;
              break;

          default:
          cout<<"You have entered an invalid type of arithmetic operation";
           }
        break;

        case 2:
           cout<<"Press 1 for sine\nPress 2 for cosine\nPress 3 for tangent\n"; //Menu for trigonometric operations
           cout<<"Please enter the type of Trigonometric Operation that you want to perform: ";
           cin>>type;
           cout<<"Please enter your angle in radians: ";
           cin>>angle;     
           switch(type)           
           {
               case 1:
                  result=sin(angle); //Sine
                  cout<<"Answer: "<<result<< endl;
                break;

                case 2:
                   result=cos(angle); //Cosine
                   cout<<"Answer: "<<result<< endl;
                break;

                case 3:
                   result=tan(angle); //Tangent
                   cout<<"Answer: "<<result<< endl;  
                break;

           default:
           cout<<"You have entered an invalid type of trigonometric operation";    
           }     
        break;

        case 3:
           cout<<"Press 1 for Power function\nPress 2 for natural Logarithim function\n";// Functions
           cout<<"Enter the type of function that you want to perform: ";
           cin>>type;
           cout<<"Enter your base: ";
           cin>>no1;
           switch(type)
           {
               case 1:
                  cout<<"Enter your exponent: ";
                  cin>>no2;
                  result=pow(no1,no2); //Power
                  cout<<"Answer: "<<result<< endl;
                break;

                case 2:
                   result=log(no1); //Log
                   cout<<"Answer: "<<result<< endl;
                break;

           default:
           cout<<"You have entered an invalid type of Power or logarithmic function";   
           }
        break;              
   default:
   cout<<"Invalid Operation";   
   } 
}