#include <iostream>
#include <cstring>
using namespace std;

class red {
    int t;
    int hp;
public:
    red(int m) :t(0), hp(m) {}
    void start(int &j, char ti[], bool &t);
    int get_hp() { return hp; }
    void chang_t() { t = 0; }

};

class blue {
    int t;
    int hp;
public:
    blue(int m) :t(0), hp(m) {}
    void start(int &j, char ti[], bool &t);
    int get_hp() { return hp; }
    void chang_t() { t = 0; }

};

class weapon {
    string a;
public:
    weapon(int i = 0) {
        if (i = 0) a = "sword";
        else if (i = 1) a = "bomb";
        else a = "arrow";
    }
    string get_w() {
        return a;
    }
};

class lion {
    int id;
public:
    static int lion_strength;
    static int r_totel;
    static int b_totel;
    lion(int i) :id(i) {}
    int get_id() { return id; }

};

class wolf {
    int id;
public:
    static int wolf_strength;
    static int r_totel;
    static int b_totel;
    wolf(int i) :id(i) {}
    int get_id() { return id; }

};

class dragon {
    int id;
    weapon a;
public:
    static int dragon_strength;
    static int r_totel;
    static int b_totel;
    dragon(int i) :id(i) {
        a(i % 3);
    }
    int get_id() { return id; }

};

class ninja {
    int id;
    weapon a, b;
public:
    static int ninja_strength;
    static int r_totel;
    static int b_totel;
    ninja(int i) :id(i) {
        a(i % 3);
        b((i + 1) % 3);
    }
    int get_id() { return id; }

};

class icemen {
    int id;
public:
    static int icemen_strength;
    static int r_totel;
    static int b_totel;
    icemen(int i) :id(i) {}
    int get_id() { return id; }

};

int icemen::icemen_strength = 0;
int icemen::r_totel = 0;
int icemen::b_totel = 0;
int lion::lion_strength = 0;
int lion::r_totel = 0;
int lion::b_totel = 0;
int wolf::wolf_strength = 0;
int wolf::r_totel = 0;
int wolf::b_totel = 0;
int ninja::ninja_strength = 0;
int ninja::r_totel = 0;
int ninja::b_totel = 0;
int dragon::dragon_strength = 0;
int dragon::r_totel = 0;
int dragon::b_totel = 0;

void red::start(int &j, char ti[], bool &tb) {
    if (hp < icemen::icemen_strength && hp < ninja::ninja_strength && hp < dragon::dragon_strength && hp < wolf::wolf_strength && hp < lion::lion_strength) {
        tb = false;
        hp = 0;
    }
    while (hp > 0) {
        if (hp >= icemen::icemen_strength && t % 5 == 0) {
            hp -= icemen::icemen_strength;
            icemen * p = new icemen(j);
            t++;
            icemen::r_totel++;
            cout << ti << " red iceman ";
            cout << p->get_id() << " born with strength ";
            cout << icemen::icemen_strength << ',';
            cout << icemen::r_totel << " iceman in red headquarter" << endl;
            delete p;
            break;
        }
        else if (hp >= lion::lion_strength && t % 5 == 1) {
            hp -= lion::lion_strength;
            lion * p = new lion(j);
            t++;
            lion::r_totel++;
            cout << ti << " red lion ";
            cout << p->get_id() << " born with strength ";
            cout << lion::lion_strength << ',';
            cout << lion::r_totel << " lion in red headquarter" << endl;
            delete p;
            break;
        }
        else if (hp >= wolf::wolf_strength && t % 5 == 2) {
            hp -= wolf::wolf_strength;
            wolf * p = new wolf(j);
            t++;
            wolf::r_totel++;
            cout << ti << " red wolf ";
            cout << p->get_id() << " born with strength ";
            cout << wolf::wolf_strength << ',';
            cout << wolf::r_totel << " wolf in red headquarter" << endl;
            delete p;
            break;
        }
        else if (hp >= ninja::ninja_strength && t % 5 == 3) {
            hp -= ninja::ninja_strength;
            ninja * p = new ninja(j);
            t++;
            ninja::r_totel++;
            cout << ti << " red ninja ";
            cout << p->get_id() << " born with strength ";
            cout << ninja::ninja_strength << ',';
            cout << ninja::r_totel << " ninja in red headquarter" << endl;
            delete p;
            break;
        }
        else if (hp >= dragon::dragon_strength && t % 5 == 4) {
            hp -= dragon::dragon_strength;
            double morale;
            morable = hp / dragon::dragon_strength;
            dragon * p = new dragon(j);            
            t++;
            dragon::r_totel++;
            cout << ti << " red dragon ";
            cout << p->get_id() << " born with strength ";
            cout << dragon::dragon_strength << ',';
            cout << dragon::r_totel << " dragon in red headquarter" << endl;
            delete p;
            break;
        }
        else t++;
    }

}

void blue::start(int &j, char ti[], bool &tb) {
    if (hp < icemen::icemen_strength && hp < ninja::ninja_strength && hp < dragon::dragon_strength && hp < wolf::wolf_strength && hp < lion::lion_strength) {
        tb = false;
        hp = 0;
    }
    while (hp > 0) {
        if (hp >= lion::lion_strength && t % 5 == 0) {
            hp -= lion::lion_strength;
            lion * p = new lion(j);
            t++;
            lion::b_totel++;
            cout << ti << " blue lion ";
            cout << p->get_id() << " born with strength ";
            cout << lion::lion_strength << ',';
            cout << lion::b_totel << " lion in blue headquarter" << endl;
            delete p;
            break;
        }
        else if (hp >= dragon::dragon_strength && t % 5 == 1) {
            hp -= dragon::dragon_strength;
            t++;
            dragon * p = new dragon(j);
            double morale;
            morable = hp / dragon::dragon_strength;
            dragon::b_totel++;
            cout << ti << " blue dragon ";
            cout << p->get_id() << " born with strength ";
            cout << dragon::dragon_strength << ',';
            cout << dragon::b_totel << " dragon in blue headquarter" << endl;
            delete p;
            break;
        }
        else if (hp >= ninja::ninja_strength && t % 5 == 2) {
            hp -= ninja::ninja_strength;
            ninja * p = new ninja(j);
            t++;
            ninja::b_totel++;
            cout << ti << " blue ninja ";
            cout << p->get_id() << " born with strength ";
            cout << ninja::ninja_strength << ',';
            cout << ninja::b_totel << " ninja in blue headquarter" << endl;
            delete p;
            break;
        }
        else if (hp >= icemen::icemen_strength && t % 5 == 3) {
            hp -= icemen::icemen_strength;
            icemen * p = new icemen(j);
            t++;
            icemen::b_totel++;
            cout << ti << " blue iceman ";
            cout << p->get_id() << " born with strength ";
            cout << icemen::icemen_strength << ',';
            cout << icemen::b_totel << " iceman in blue headquarter" << endl;
            delete p;
            break;
        }
        else if (hp >= wolf::wolf_strength && t % 5 == 4) {
            hp -= wolf::wolf_strength;
            wolf * p = new wolf(j);
            t++;
            wolf::b_totel++;
            cout << ti << " blue wolf ";
            cout << p->get_id() << " born with strength ";
            cout << wolf::wolf_strength << ',';
            cout << wolf::b_totel << " wolf in blue headquarter" << endl;
            delete p;
            break;
        }
        else t++;
    }
}

void c_time(int time, char ti[]) {
    if (time < 10) ti[2] = 48 + time;
    else if (time > 10 && time < 100) {
        ti[1] = 48 + time / 10;
        ti[2] = 48 + time % 10;
    }
    else {
        ti[0] = 48 + time / 100;
        ti[1] = 48 + (time - time / 100 * 100) / 10;
        ti[2] = 48 + time % 10;
    }
}

int main() {
    int a[5], m, n, j, time;
    char ti[4];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Case:" << i + 1 << endl;
        cin >> m;
        for (int j = 0; j < 5; j++)
            cin >> a[j];
        bool flag_r = true, flag_b = true, f_r = true, f_b = true;
        time = 0;
        j = 1;
        for (int j = 0; j < 3; j++) ti[j] = 48;
        ti[3] = '\0';
        red r(m);
        blue b(m);
        dragon::dragon_strength = a[0];
        ninja::ninja_strength = a[1];
        icemen::icemen_strength = a[2];
        lion::lion_strength = a[3];
        wolf::wolf_strength = a[4];
        while (flag_r || flag_b) {
            c_time(time, ti);
            r.start(j, ti, flag_r);
            if (!flag_r && f_r) {
                f_r = false;
                cout << ti << ' ' << "red headquarter stops making warriors" << endl;
            }
            b.start(j, ti, flag_b);
            if (!flag_b && f_b) {
                f_b = false;
                cout << ti << ' ' << "blue headquarter stops making warriors" << endl;
            }
            time++;
            j++;
        }
        icemen::r_totel = 0;
        icemen::b_totel = 0;
        lion::r_totel = 0;
        lion::b_totel = 0;
        wolf::r_totel = 0;
        wolf::b_totel = 0;
        ninja::r_totel = 0;
        ninja::b_totel = 0;
        dragon::r_totel = 0;
        dragon::b_totel = 0;
    }
    return 0;

}