#include <iostream>
using namespace std;

class BabyNames {
public:
    // constructors
    BabyNames();
    BabyNames(int ID, string name, int year, int gender, int count);

    // assignment operator
    BabyNames &operator=(const BabyNames & rhs);

    int operator<(BabyNames & otherBabyNames);

    bool operator!=(BabyNames & otherBabyNames);

    ostream& operator <<(ostream os);

    // destructor
    ~BabyNames();

    int GetID();
    string GetName();
    int GetYear();
    int GetGender();
    int GetCount();


private:
    int ID;
    string name;
    int year;
    int gender;
    int count;
};
