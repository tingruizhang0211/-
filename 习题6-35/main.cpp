#include <bits/stdc++.h>
using namespace std;

void guessGame();
bool isCorrect(int,int);
void analyzeCount(int);

int main()
{
    srand(time(0));
    guessGame();
}

void guessGame()
{
    int answer;
    int guess;
    int total;
    char response;

    do
    {
        answer=1+rand()%1000;
        total=0;
        cout<<"I have a number between 1 and 1000.\n"<<"Can you guess my number?\n"<<"Please type your first guess.";
        cin>>guess;
        total++;
    }
    while(!isCorrect(guess,answer));
        cin>>guess;
        total++;
        cout<<"\nExcellent!You guessed the number!\n"<<"Would you like to play again(y or n)?";
        analyzeCount(total);
        cin>>response;
        cout<<endl;
}
bool isCorrect(int g,int a)
{
    if(g==a)
        return true;
    if(g<a)
        cout<<"Too low.Try again.\n?";
    else
        cout<<" high.Try again.\n?";
    return false;
}

void analyzeCount(int count)
{
    if(count<10)
        cout<<"Either you know the secret or you got lucky!";
    else if(count==10)
        cout<<"Ahah!You know the secret!";
    else if(count>10)
        cout<<"You should be able to do better!";

}
