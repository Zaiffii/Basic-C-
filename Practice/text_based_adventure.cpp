#include<iostream>
using namespace std;
int main()
{
    string name, Neville, thirdfloor, secondriddle, threeheadeddog, Aconitum, Threemen, spell, fight, difficultchoice,thirdriddle,quirell,finalfight;
    char inventory;
    int firstchoice, enemyhealth, yourhealth, quirellhealth;
    cout<<"Please enter your name: ";
    cin>>name;
    cout<<"Hey! "<<name<<" Your friends are Ron and Hermione. You three are sitting in the Gryfindor lobby thinking about how to stop Voldemort\n";
    cout<<"You have told Professor McGonagall that you have a doubt that Professor Snape is with Voldemort and is trying to steal the Philosophers Stone\n";
    cout<<"But Professor McGonagall has told you that there is nothing like that and Professor Snape is the one helping to protect the stone and you should go in your rooms\n";
    cout<<"You have 2 options you can press 1 to go to your rooms and leave it or You can press 2 stop it by yourself. What are your going to do? ";
    cin>>firstchoice;
    if(firstchoice==1)
        cout<<"Lord Voldemort has returened and is very powerful your life is in danger!!! GameOver :/ Run it again to Try again!";
    else if(firstchoice==2)
    {
        cout<<"You along with Hermione and Ron have gathered in the Gryffindor common room after 12 o clock. You are pretty sure that everyone has slept and now you can finally\n";
        cout<<"investigate the situation.\n";
        cout<<"You see that your friend Neville is standing in your way and is not letting you pass through because he is afraid that you guys might get into trouble\n";
        cout<<"You have 2 options you can type Absornious to cast a spell on him which will make him go to sleep or you can type tell to tell him everything in detail and hope that he will let you go\n";
        cin>>Neville;
        if(Neville=="Absornious" || Neville=="absornious")
        {
            cout<<"You take out your wand and cast a spell named Absornious to make Neville go to sleep.\n"; 
            cout<<"You can view your inventory by pressing i";
            cin>>inventory;
            if(inventory=='i')
            {
                cout<<"\tInventory\nWand\n";
            }
            cout<<"You guys go to the third floor there are three doors.\n";
            cout<<"Door 1 is in the north type  gonorth to go to that door, Door 2 is in the east type goeast to go to that door, Door 3 is in the west type gowest to go to that door\n";
            cout<<"There is a talking picture with a riddle if you can solve it you can know which door is the right one\n";
            cout<<"The Riddle is that: I am the direction where the compass always points, guiding explorers through snowy joints. I am home to the pole that is icy and cold. What am I?: ";
            cin>>thirdfloor;
            if(thirdfloor=="gonorth")
            {
                cout<<"There is a talking picture besides a door you need to answer a riddle in order to unlock that door\n";
                cout<<"The riddle is that: I am tall when I am young, and I am short when I am old. What am I?: ";
                cin>>secondriddle;
                // do
                // {
                if(secondriddle=="candle" || secondriddle=="Candle")
                {
                    cout<<"Nice thinking "<<name<<" Congratulations you have entered the room, There is a three headed dog with its paw on a basement door if you come close you will get eaten\n";
                    cout<<"You see a potion that can make it paralize for 1 hour type Use to use it or Miss to miss it: ";
                    cin>>threeheadeddog;
                    if(threeheadeddog=="Use" || threeheadeddog=="use")
                    {
                        cout<<"You used the portion to paralize the dog.\n"; 
                        cout<<"Potion has been added to your inventory Press i to view it";
                        cin>>inventory;
                        if(inventory=='i')
                        {
                            cout<<"\tInventory\nWand\tPotion\n";
                        }
                        cout<<"All three of you jumped into the basement you are caught by the plant named Aconitum it is killing all of you by trapping you tight\n";
                        cout<<"with its roots Your friend Hermione is saying that she read about it somewhere if you guys relax it will leave you after that both Hermione and Ron are vanished.\n";
                        cout<<"You can either trust Hermione and type Relax to relax or you can type Struggle to struggle so that you can grap your want and do something.  Now what will you do?: ";
                        cin>>Aconitum;
                        if(Aconitum=="Relax" || Aconitum=="relax")
                        {
                            cout<<"Yay Good to know that you trust your friends!\n";
                            cout<<"There was a door to the next room as soon as you entered that room three men are there they casted a spell named crucio on you\n";
                            cout<<"Your health dropped to 70%, You can either type Surrender or type Fight: ";
                            cin>>Threemen;
                            if(Threemen=="Surrender" || Threemen=="surrender")
                                cout<<"They stil tortured you untill all of you died";
                            else if(Threemen=="Fight" || Threemen=="fight")
                            {
                                cout<<"You guys grapped your wand and you can now make a counter spell you have two options since it is the first year you dont know many fighting spells\n";
                                cout<<"You can either use Expelliarmus or the same spell that they used that is crucio. What would it be?: ";
                                cin>>spell;
                                if(spell=="Expelliarmus" || spell=="Expelliarmus")
                                {
                                    cout<<"Nice choice since Expelliarmus is a much powerful spell than Crucio\n";
                                     enemyhealth=80, yourhealth=70;
                                    while(enemyhealth>0 && yourhealth>0)
                                    {
                                        cout<<"Your health= "<<yourhealth<< endl;
                                        cout<<"Enemy Health= "<<enemyhealth<< endl;
                                        cout<<"Type Expelliarmus again to fight again Hurry!! ";
                                        cin>>fight;
                                        if(fight=="Expelliarmus" || fight=="Expelliarmus")
                                        {
                                            cout<<"Clang! Dshhhh! Smack! Whack! Dshhhh! Dshhhh! Whack! \n";
                                            enemyhealth=enemyhealth-20;
                                        }
                                        else
                                        {
                                        yourhealth=yourhealth-10;
                                        cout<<"Clang! Dshhhh! Smack! Whack! Dshhhh! Dshhhh! Whack! \n";
                                        }
                                    }
                                    if(yourhealth==0)
                                        cout<<"The enemy has killed you :/ Better luck next time! Run it again to Try again";
                                    else
                                    {    
                                        cout<<"Congratualtions you have defeated the enemy. Your health is :"<<yourhealth<< endl;
                                        cout<<"The enemy which Ron was dealing with threw a knife at Ron which hit him in the stomach now you have to make a difficult choice Either you can type Back to take Ron to the hospital with Hermione\n";
                                        cout<<"or you can type Forward to carry on to defeat Voldemort from returning and protect the Philosophers Stone. So what is to gonna be?: ";
                                        cin>>difficultchoice;
                                        if(difficultchoice=="Back" || difficultchoice=="back")
                                        {
                                            cout<<"You made the wRong choice. NO DOUBT we should stay with friends when they need us but sometimes we need to think about other people also if Voldemort returns he will kill\n";
                                            cout<<"innocent people and Hermione could take Ron. Dont be sad it was indeed a very hard choice to make. GameOver :/ Run it again to Try again!";
                                        }    
                                        if(difficultchoice=="Forward" || difficultchoice=="forward")
                                        {
                                            cout<<"Excellent choice "<<name<<" You have got to stop Voldemort now. There is the last door with another riddle. Behind that door you are quite sure that Snape is stealing Philosophers Stone\n";
                                            cout<<"The riddle is that: Iam always infront of you but cannot be seen what am I?: ";
                                            cin>>thirdriddle;
                                            if(thirdriddle=="Future" || thirdriddle=="future")
                                            {
                                                cout<<"Execellent Guess "<<name<<" No doubt why you are the CHOSEN ONE!\n";
                                                cout<<"When you entered the room you saw that Instead of Snape your favourite Professor Quirell is standing and behind his head there is the face of Voldemort\n";
                                                cout<<"He shouts at you and demands to give him the Philosophers Stone. You are confused because you dont have the Philosophers Stone but you feel that something is present in the left pocket of your jeans\n";
                                                cout<<"When you take it out you see that it is the Philosophers Stone.\n";
                                                cout<<"Press i to view your inventory";
                                                cin>>inventory;
                                                if(inventory=='i')
                                                {
                                                    cout<<"\tInventory\nWand\tPotion\tPhilosophers Stone\n";
                                                } 
                                                cout<<"You read that it can give you powers. Quirell comes at you and pushes you\n";
                                                cout<<"You can either type fight to fight with him or you can type leave to give up and let him take the Philosophers Stone. What will you do?: ";
                                                cin>>quirell;
                                                if(quirell=="Leave" || quirell=="leave")
                                                    cout<<"Wrong choice after all the efforts you should have tried your best to stop him and should not have given up your hope GameOver :/ Run it again to Try again!";
                                                else if(quirell=="Fight" || quirell=="fight")    
                                                {
                                                    cout<<"You went to stop him when you grabbed him by your hands to stop him his skin started burning You both are confused what just happened\n";
                                                    quirellhealth=80;
                                                    while(quirellhealth != 0 && yourhealth !=0)
                                                    {
                                                        cout<<"\nYourhealth = "<<yourhealth<< endl;
                                                        cout<<"Quirell health = "<<quirellhealth<< endl;
                                                        cout<<"Type Attack to try putting hands on him again so that he can burn: ";
                                                        cin>>finalfight;
                                                        if(finalfight=="Attack" || finalfight=="attack")
                                                        {
                                                            quirellhealth=quirellhealth-20;
                                                            cout<<"Hiss!Hiss!Hiss!Hiss!Hiss!Hiss!Hiss!Hiss!Hiss!Hiss!Hiss!Hiss!Hiss!\n";
                                                            cout<<"Ughhhhhh quirell shouting in pain";
                                                        }
                                                        else
                                                        {
                                                            cout<<"Quirell hits you";
                                                            yourhealth=yourhealth-10;
                                                            cout<<name<<" Shouting in pain";
                                                        }
                                                    }
                                                    if(yourhealth==0)
                                                        cout<<"Quirell killed you :/ Game Over Better luck next time Run it again to Try again!";
                                                    else
                                                    {
                                                        cout<<"You have finally killed quirell and stopped Voldemort from returining!!!\n";
                                                        cout<<"You passed out and have woken up in the Hogwarts Hospital Ron and Hermione are sleeping on the sofa\n";
                                                        cout<<"Dumbeldore comes and Congratulates you on your bravery!!";
                                                        cout<<"\tHAPPY ENDING\n";
                                                        cout<<"Well done "<<name<<" We need more Wizards like you :-)\n";
                                                        cout<<"See you again in the next chapter!!!";
                                                    }
                                                }   
                                                else    
                                                    cout<<"Please enter a valid move";
                                            }
                                            else
                                                cout<<"Oops wRong guess try again";
                                         }    
                                        else
                                            cout<<"Please type a valid choice";
                                    }    
                                }
                                else if(spell=="=Crucio" || spell=="crucio")
                                {
                                    cout<<"Since you used crucio so your health and the health of the enemy is being decreased at the same time\n";
                                    cout<<"Your health was already dropped at 70% because they made the first attack and their health is at 100% so you will die eventually GameOver :/ Run it again to Try again!";
                                }    
                                else
                                    cout<<"Please type a valid spell";
                            }
                            else
                                cout<<"Please type a valid choice";
                        }
                        else if(Aconitum=="Struggle" || Aconitum=="struggle")
                            cout<<"You could not grap your want because when you struggled the plant grapped you more firmly and squished you, You should learn to trust your friends GameOver :/ Run it again to Try again!";
                        else
                            cout<<"Please type a valid move";    
                    }
                    else if(threeheadeddog=="Miss" || threeheadeddog=="miss")
                        cout<<"The dog woke up and killed all of you by ripping you off in several pieces, Better luck next time Run it again to Try again!";
                    else
                        cout<<"Please type a valid move";    
                }
                else
                    cout<<"Nope try again";   
            }
            else if(thirdfloor=="goeast")
                cout<<"You chose to go to door:2 there were 2 teachers there you got caught and are in detention now Oops better luck next time!! Run it again to Try again!";
            else if(thirdfloor=="gowest")
                cout<<"You chose to go to door:3 there was a ditch you all fell in that and died Game over :/ Run it again to Try again!";   
            else
                cout<<"Please type a valid direction";
        }
        else if(Neville=="Tell" || Neville=="tell")
            cout<<"Neville doesn't understand it & he don't let you leave either.GameOver :/ Run it again to Try again!";
        else
            cout<<"Please type a valid move";    
    }
    else
        cout<<"Please enter a valid choice";
    return 0;    
}