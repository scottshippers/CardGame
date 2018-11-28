#include<iostream>
#include<cstring>
#include<vector>
#include<fstream>
#include<ctime>
#include<cstdlib>


int main()
{

std::vector<double> card;

    card.push_back(111);
    card.push_back(222);
    card.push_back(333);
    card.push_back(444);
    card.push_back(555);
    card.push_back(666);
    card.push_back(777);
    card.push_back(888);
    card.push_back(999);

    srand(time(0));
    std::vector<double> temvec;
    int counter=9;

for(int i=0;i<9;i++)
{

        //displays card size
        //std::cout<<card.size()<<std::endl;
        //create random 
    int random = rand()%counter;
        //std::cout<<random<<std::endl;

        //inserts card at random loc into temvec vector
    temvec.push_back(card[random]);

        //puts random card at card array end and then
        //destroys it
    card[random] = card[card.size()-1];
    card.pop_back();

        //displays what cards are left on the deck
        //std::cout<<card.size()<<std::endl;
    for(int j=0;j<card.size();j++)
    {
        //std::cout<<card[j]<<"--"<<std::endl;
    }

    counter=counter-1;
        //std::cout<<counter<<std::endl;
}

for(int i=0;i<9;i++)
{
    std::cout<<temvec[i]<< " - " << std::endl;
}

    return 0;
}

