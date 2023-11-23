#include<iostream>
#include<random>
#include<time.h>
using namespace std;
int main()
{ 
    int snum,input,count=0;
    srand(time(nullptr));
    snum=rand() % 100 +1;
    
    cout<<"enter a number";
    cin>>input;
    while(snum!=input)
    {
        if(input<snum)
        {
            cout<<"secret number is greater than your guess";
            cin>>input;

        }
        else{
            cout<<"secret number is smaller than your guess";
            cin>>input;

        }
        count++;
    }
    cout<<"won the game in"<<count<<" guesses"<<endl;
    return 0;
}