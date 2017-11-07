#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;
// 在此处补充你的代码

class A
{
public:
        int age;
        A(int n) :age(n) {}
        friend ostream & operator << (ostream &o, const A &a) {
                o << "A " << a.age;
                return o;
        }
        template<class T1, class T2>
        friend bool operator < (const T1 & a1, const T2 & a2);
        template<class T1, class T2>
        friend bool operator > (const T1 & a1, const T2 & a2);
        virtual void print() { cout << *this << endl; }
        int get_age() const {
                return age;
        }
};

class B :public A
{
public:
        B(int n) :A(n) {}
        friend ostream & operator << (ostream &o, const B &b) {
                o << "B " << b.age;
                return o;
        }
        void print() { cout << *this << endl; }
};

template<class T1, class T2>
bool operator < (const T1 &a1, const T2 &a2)
{
        return (a1.get_age() < a2.get_age());
}

template<class T1, class T2>
bool operator > (const T1 &a1, const T2 &a2)
{
        return (a1.get_age() > a2.get_age());
}

void Print(A *const a)
{
        a->print();
}


struct Comp
{
        template <class T>
        bool operator () (T & a1, T & a2) { return a1->age < a2->age; }
};

int main()
{

        int t;
        cin >> t;
        set<A*, Comp> ct;
        while (t--) {
                int n;
                cin >> n;
                ct.clear();
                for (int i = 0; i < n; ++i) {
                        char c; int k;
                        cin >> c >> k;

                        if (c == 'A')
                                ct.insert(new A(k));
                        else
                                ct.insert(new B(k));
                }
                for_each(ct.begin(), ct.end(), Print);
                cout << "****" << endl;
        }
        return 0;
}