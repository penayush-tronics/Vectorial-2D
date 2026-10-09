#include <iostream> //io header
#include <string> //stringg datatype 
#include <cmath> //math
//#include <random> //random

void printNum(std::string text, double nums){
    std::cout << text << " " << nums << std::endl;

}

void print(std::string text){
    std::cout << text << std::endl;

}

double enterNum(std::string text){
    double num;
    std::cout << text;
    std::cin >> num;
    return num;
}


class character{
    private:
      std::string name;
      int health;
      int attack;
      double defense;
    
    public: 
      
      character(std::string n, int h,int a,double d){
        name=n;
        health=h;
        attack=a;
        defense=d;
      }
      int getHealth(){
        return health;
      }
      int getAttack(){
        return attack;
      }
      double getDefense(){
        return defense;
      }
      std::string getName(){
        return name;
      }
      void damage(double att){
        double dam=att*(1-(defense/100));
        health=health-dam;
        if (health <0){health=0;}
        printNum("Damage done to "+name+" is ",dam);
        printNum("Remaining health of "+name+": ",health);

      }
     
};



int main(){
    character bob("bob",100,50,10);
    character john("john",100,40,20);
    character players[2]={bob,john};
    

   while (players[0].getHealth()>0 && players[1].getHealth()>0){
        players[0].damage(players[1].getAttack());
        players[1].damage(players[0].getAttack());  

    }

    return 0;
}