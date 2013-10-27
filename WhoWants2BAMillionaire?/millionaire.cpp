//
//  millionaire.cpp
//  WhoWants2BAMillionaire?
//
//  Created by Tugrul Savran on 10/9/13.
//  Copyright (c) 2013 CuriouScientists. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{

    char s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
    char eh;
    cout<< "\t - Welcome To The Spectacular Game of Who Wants To Be A Millionaire! - \n\n I, Mehmet Tugrul Savran, will be your host tonight! \n\n LET THE GAMES BEGIN!";
    cout<<"\tQuestion 1: What is the capital of France?\n\n\t\ta)Berlin b)Nice c)Ankara d)Paris\n \n";
    cout<< "\t\t\nAnswer : ";
    cin >> s1;
    if(s1=='d')
    {cout<< "Answer correct! You just earned 50 Turkish Lira.\n";}
    else{cout<<"You earned NOTHING!\n";return 0;}
    
    cout<<"\tQuestion 2: Which one is not a Nobel Laureate?\n\n\t\ta)Barack Obama b)Wolfgang Ketterle c)Stephen Hawking d)Peter Higgs\n \n";
    cout<< "\t\t\nAnswer : ";
    cin >> s2;
    if(s2=='c')
    { cout <<"Though an awesome scientist(and maybe the smartest person on the planet), unfortunately Hawking is not a Nobel Laureate... Answer correct! You just earned 100 TL"<<endl;}
    else { cout << "You earned NOTHING!"; return 0;}
    cout<<"\tQuestion 3: Which one does not have a UEFA Champions League Cup?\n\n\t\ta)Galatasaray b)Nottingham Forest c)Marseille d)Ajax\n \n";
    cout<< "\t\t\nAnswer : ";
    cin >> s3;
    if (s3=='a'){ cout <<"Answer correct! You just earned 200 Turkish Lira\n";}
    else { cout<<"You earned NOTHING!"; return 0; }
    cout<<"\tQuestion 4: Who stars the Silence of The Lambs?\n\n\t\ta)Nicole Kidman b)Jodie Foster c)Sophia Loren d)Angelina Jolie\n \n";
    cout<< "\t\t\nAnswer : ";
    cin >> s4;
    if (s4=='b'){ cout <<"Answer correct! You just earned 300 Turkish Lira\n";}
    else { cout<<"You earned NOTHING!"; return 0; }
    cout<<"\tWARNING: You have reached the stage question. \n If you answer it correctly,\n your safety money will raise from 0 to 500 Turkish Lira! \n Question 5: Which one of the following is not a Turkish NBA Player?\n\n\t\ta)Hedo Turkoglu b)Mehmet Okur c)Omer Onan d)Omer Asik\n \n";
    cout<< "\t\t\nAnswer : ";
    cin >> s5;
    if (s5=='c'){ cout <<"Answer correct! You just cracked the stage question! You now have 500 Turkish Lira for sure!\n";}
    else { cout<<"You earned NOTHING!"; return 0; }
    cout<<"\tFrom now on, you will be given a chance\nto withdraw. \nBecause, the questions are getting harder!\n LET THE GAMES BEGIN, AGAIN!\n\nQuestion 6: Who wrote the controversial novel Lady Chatterley's Lover? \n\n\t\ta)D.H. Lawrence b)T.S. Eliot c)James Joyce d)Henri Miller\n \n";
    cout<< "\t\t\nAnswer : ";
    cin >> s6;
    cout<<"Would you like to withdraw?(Please write y for YES or anything else for NO):";
    cin >> eh;
    if (eh=='y'){cout<<"Thank you for competing!\n You earned 500 Turkish Lira!"<<endl; return 0;}
    else {
    if (s6=='a'){ cout <<"Answer correct! You just earned 1000 Turkish Lira";}
        else { cout<<"Your answer was incorrect! You earned 500 Turkish Lira"; return 0; } }
    cout<<"\tQuestion 7: What is the middle name of former U.S. President Ronald Reagan? \n\n\t\ta)Herbert b)Wilson c)Jefferson d)Earl\n \n";
    cout<< "\t\t\nAnswer : ";
    cin >> s7;
    cout<<"Would you like to withdraw?(Please write y for YES or anything else for NO):";
    cin >> eh;
    if (eh=='y'){cout<<"Thank you for competing!\n You earned 1000 Turkish Lira!"<<endl; return 0;}
    else {
        if (s7=='b'){ cout <<"Answer correct! You just earned 15000 Turkish Lira";}
        else { cout<<"Your answer was incorrect! You earned 500 Turkish Lira"; return 0; } }
    
    cout<<"\t\n\nNow, you reached the last stage question,\nwhich is worth 60000 Turkish Lira!\nI can feel your anxiety!\n Question 8: Boyle's Law deals with what subject? \n\n\t\ta)Magnetic Induction b)Radioactivity c)Photonics d)Gas Under Pressure\n \n";
    cout<< "\t\t\nAnswer : ";
    cin >> s8;
    cout<<"Would you like to withdraw?(Please write y for YES or anything else for NO):";
    cin >> eh;
    if (eh=='y'){cout<<"Thank you for competing!\n You earned 15000 Turkish Lira!"<<endl; return 0;}
    else {
        if (s8=='d'){ cout <<"Answer correct! You just earned 60000 Turkish Lira!!! \nCONGRATULATIONS\n";}
        else { cout<<"Your answer was incorrect! You earned 500 Turkish Lira"; return 0; } }
    
    cout<<"\t\n\nNow, you reached the last two questions of this competition!\nYou are one of the most knowledgeable\n people on the planet!\n The two following questions will be the\n hardest questions you would ever hear!\n\n NOW! \n\n\n\n\n Question 9: Da Vinci's anatomical drawing depicting the \nideal proportions and geometry of man is called what? \n\n\t\ta)Palladian Man b)Albertian Man c)Vitruvian Man d)Brunelleschian Man\n \n";
    cout<< "\t\t\nAnswer : ";
    cin >> s9;
    cout<<"Would you like to withdraw?(Please write y for YES or anything else for NO):";
    cin >> eh;
    if (eh=='y'){cout<<"Thank you for competing!\n You earned 60000 Turkish Lira!"<<endl; return 0;}
    else {
        if (s9=='c'){ cout <<"Answer correct! You just earned 250000 Turkish Lira!!! \nCONGRATULATIONS!\n";}
        else { cout<<"Your answer was incorrect! You earned 60000 Turkish Lira"; return 0; } }
    
    cout<<"\t\n\nWell, well... Are you going to be the winner?\n\n You seem extremely determined!\n\n NOW! \n\n\n\n\n FINAL QUESTION: What is 2+2?\n\n\t\ta)1 b)2 c)3 d)4\n \n";
    cout<< "\t\t\nAnswer : ";
    cin >> s10;
    cout<<"Would you like to withdraw?(Please write y for YES or anything else for NO):";
    cin >> eh;
    if (eh=='y'){cout<<"Thank you for competing!\n You earned 250000 Turkish Lira!"<<endl; return 0;}
    else {
        if (s10=='d'){ cout <<"Answer correct!\n\nYOU ARE THE WINNER OF THE GAME!\n\n You just earned 1000000 Turkish Lira!!! \nCONGRATULATIONS!\n\n Your knowledge is worth more than a million, for sure!";}
        else { cout<<"Your answer was incorrect! You earned 60000 Turkish Lira"; return 0; } }
    return 0;
}

