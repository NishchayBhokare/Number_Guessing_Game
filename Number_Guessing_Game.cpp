#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;

int main()
{
    srand(time(0));
    int number=rand()%100+1;
    //cout<<number<<endl;
    int you,attempts=1;
    cout<<"Guess the number between 1 to 100"<<endl;
    cin>>you;
    do
    {
     if(you<number)
     {
         cout<<"Higher number please..."<<endl;
         cin>>you;
         attempts++;
     }
    else if(you>number)
     {
         cout<<"Lower number please..."<<endl;
         cin>>you;
         attempts++;
     }

    if(you==number)
     {
         cout<<"Wow! your guess is right..."<<endl;
         cout<<"you guessed it in "<<attempts<<" attempts"<<endl;
     }

    }while(you!=number);
    getch();
    return 0;
}
