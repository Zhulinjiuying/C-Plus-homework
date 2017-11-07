#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

const int WARRIOR_NUM = 5;
const int WEAPON_NUM = 3;
static int n = 0;

/*
string Warrior::names[WARRIOR_NUM] = { "dragon","ninja","iceman","lion","wolf" };
红方司令部按照 iceman、lion、wolf、ninja、dragon 的顺序制造武士。
蓝方司令部按照 lion、dragon、ninja、iceman、wolf 的顺序制造武士。
*/

class Headquarter;
class Warrior;

class City
{
    int no; //城市编号
    int color; //旗帜
    int elements;
    Warrior * pW[2];
public:
    friend class Warrior;
    City(int _no, int _color, int lv);
    void Produce();
    void lose(Headquarter * pH);
    string GetColor();
    void ChangeWarrior(Warrior * w);
};

class weapons
{
    Warrior * w;
    static int R;
    int att;
    int no;
public:
    friend class Warrior;
    static string weapon[WEAPON_NUM];
    weapons(Warrior & w_, int no_);
};

class Warrior
{
private:
    Headquarter * pHeadquarter;
    int kindNo; //武士的种类编号 0 dragon 1 ninja 2 iceman 3 lion 4 wolf
    int weaponNum;
    int att;
    int no;
    City * c;
    weapons * we[2];
    double morale;  //士气
    int loyalty;    //忠诚度
public:
    int hp;
    friend class weapons;
    static string names[WARRIOR_NUM];
    static int initialLifeValue[WARRIOR_NUM];
    static int attack[WARRIOR_NUM];
    Warrior(Headquarter * p, int no_, int kindNo_, City * c);
    int GetAtt();
    int GetColor();
    void Dead();
    void Attack(Warrior * w);
    void ReAttack(Warrior * w);
    void Move();
};

class Headquarter :public City
{
private:
    bool stopped;
    int totalLifeValue;
    int totalWarriorNum;
    int curMakingSeqIdx; //当前要制造的武士是制造序列中的第几个
    int warriorNum[WARRIOR_NUM]; //存放每种武士的数量
    Warrior * pWarriors[1000];
public:
    friend class Warrior;
    static int makingSeq[2][WARRIOR_NUM]; //武士的制作顺序序列
    void Init(int color_, int lv, int no_);
    ~Headquarter();
    int Produce(int nTime);
    void GetElemnts(int hp);
};

City::City(int no_, int color_ = 2, int lv = 0)
{
    pW[0] = nullptr;
    pW[1] = nullptr;
    no = no_;
    elements = lv;
}

void City::Produce()
{
    elements += 10;
}

void City::lose(Headquarter * pH)
{
    pH->GetElemnts(elements);
    elements = 0;
}

string City::GetColor()
{
    if (0 == color) return "red";
    else return "blue";
}

bool City::ChangeWarrior(Warrior * w) 
{
    if (0 == w.GetColor() && !pw[0]) {
        pw[0] = w;
        return true;
    }
    else if (1 == w.GetColor() && !pw[1]) {
        pw[1] = w;
        return true;
    }
    else return false;
}

weapons::weapons(Warrior * w_, int no_)
{
    w = w_;
    no = no_;
    if (0 == no) att = w->att * 0.2;
    else att = 0;
}

Warrior::Warrior(Headquarter * p, int no_, int kindNo_, City * c_)
{
    pHeadquarter = p;
    no = no_;
    kindNo = kindNo_;
    hp = initialLifeValue[kindNo];
    att = attack[kindNo];
    c = c_;
    if (kindNo != 3 && kindNo != 4)
    {
        if (kindNo == 1) weaponNum = 2;
        else weaponNum = 1;
    }
    else weaponNum = 0;
    for (int i = 0; i < weaponNum; i++)
    {
        we[i] = new weapons(*this, (no + i) % 3);
        if (0 == (no + i % 3)) att += we[i]->att;
    }
    if (0 == kindNo) morale = (double)p->totalLifeValue / initialLifeValue;
    else morale = 0;
    if (3 == kindNo) loyalty = p->totalLifeValue;
    else loyalty = 0;
}

int Warrior::GetAtt() { return att; }

void Warrior::Attack(Warrior * w)
{
    w.hp -= this->GetAtt();
    if (w.hp > 0) {
        if (0 == kindNo) morale -= 0.2;
        w.ReAttack(this);
    }
    else {
        if (0 == kindNo) morale += 0.2;
        w.Dead();
    }
}

void Warrior::ReAttack(Warrior * w)
{
    w.hp -= this->GetAtt() / 2;
    if (w.hp > 0) {
        if (0 == kindNo) morale -= 0.2;
        w.ReAttack(this);
    }
    else {
        if (0 == kindNo) morale += 0.2;
        w.Dead();
    }
}

void Warrior::Dead()
{
    hp = 0;
    att = 0;
    loyalty = 0;
    morale = 0;
}

int Warrior::GetColor()
{
    return p.color;
}

void Warrior::Move()
{
    if ()
}