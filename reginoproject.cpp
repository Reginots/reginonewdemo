#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Mage{


 public:
  short mageHp=30;
  short mageNormalAttack=8;
  short mageStrongAttack=10;
  short mageSpecialAttack=15*1.5;
};

class Warriror{


  public:
  short warriorHp=37;
  short warriorNormalAttack=10;
  short warriorStrongAttack=12;
  short warriorSpecialSkill=warriorHp+5;
};

class Bag{

    public:
    string itemFirst="NONE";
    string itemSecond="NONE";
    string itemThird="NONE";
};


void dice10(int maximum , int minimum);

int main()
{

    cout<<"hello pick your class:Warrior,Mage"<<endl;

    string userpick;
    cin >> userpick;

    while(userpick!="Warrior"&&userpick!="warrior"&&userpick!="Mage"&&userpick!="mage"){
    cout<<"please be serious and choose again"<<endl;
    cin>> userpick;}

    // objects from classes

    Warriror characterW;
    Mage characterM;
    Bag itemA,itemB,itemC;

    if(userpick=="Warrior"||userpick=="warrior"){
        cout<<"class:Warrior"<<endl;
        cout<<"HP:"<<characterW.warriorHp<<endl;;
        cout<<"Normal Attack:"<<characterW.warriorNormalAttack<<endl;;
        cout<<"Strong Attack"<<characterW.warriorStrongAttack<<endl;
        cout<<"Special Skill can heal your self for 5 HP"<<endl;
    }else if (userpick=="Mage"||userpick=="mage"){
        cout<<"class:Mage"<<endl;
        cout<<"HP:"<<characterM.mageHp<<endl;
        cout<<"Normal Attack:"<<characterM.mageNormalAttack<<endl;
        cout<<"Strong Attack"<<characterM.mageStrongAttack<<endl;;
        cout<<"Special Skill deals 15*1.5 Dmg to all enemies on feild"<<endl;
    }
                int maximum=10;
                int minimum=1;

      void  dice10(int maximum , int minimum);

}

void dice10( int maximum , int minimum){



    srand(time(0));
    int diceroll=(rand(maximum-minimum+1)+minimum);
    cout<<"you rolled:"<<diceroll<<endl;


}

