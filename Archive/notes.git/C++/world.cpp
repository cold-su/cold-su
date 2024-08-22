#include <bits/stdc++.h>
using namespace std;

/// # dsa
class Person {

public:
    string name;
    int age;
    char gander;

    Person() {};
    Person(string name) {
        this->name = name;
        cout<<this->name<<"已出生"<<"\n";
    }
    ~Person() {
        cout<<this->name<<"已死亡."<<"\n";
    };    
};

int main() {
    // freopen("C++\\pbGame.in","r",stdin);
    freopen("C++\\world.out","w",stdout);

    Person* human_1 = new Person("hhh");
    return 0;
}
