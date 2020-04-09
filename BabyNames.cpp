#include <iostream>
using namespace std;

class BabyNames {
public:
    // constructors
    BabyNames() {
        this->ID = -1;
        this->year = -1;
        this->gender = -1;
        this->count = -1;
        this->name = "";
    }

    BabyNames(int ID, string name, int year, int gender, int count) {
        this->ID = ID;
        this->year = year;
        this->gender = gender;
        this->count = count;
        this->name = name;
    }

    // assignment operator
    BabyNames &operator=(const BabyNames & rhs) {
        this->ID=rhs.ID;
        this->year = rhs.year;
        this->gender = rhs.gender;
        this->count = rhs.count;
        this->name = rhs.name;
    }

     // overload < operator
     int operator<(BabyNames & otherBabyNames) {
        if (this->year < otherBabyNames.year) {
            return -1;
        }
        else if (this->year > otherBabyNames.year) {
            return 1;
        }
        else {
            if (this->count < otherBabyNames.count) {
                return -1;
            }
            else if (this->count > otherBabyNames.count) {
                return 1;
            }
            else {
                return this->name < otherBabyNames.name;
            }
        }
    }

    // overload != operator
    bool operator!=(BabyNames & otherBabyNames) {
        if (this->year == otherBabyNames.year) {
            return false;
        }
        else {
            if (this->count == otherBabyNames.count) {
                return false;
            }
            else {
                return this->name != otherBabyNames.name;
            }
        }
    }

    ostream& operator<<(ostream os) {
        os << "ID: " << this->ID << endl;
        os << "Year: " <<this->year << endl;
        os << "Gender: " << endl;
        if (this->gender == 0) {
            os << "Male" << endl;
        }
        else {
            os << "Female" << endl;
        }
        os << "Count: " << this->count << endl;
        os << "Name: " << this->name << endl;
        return os;
    }

    // destructor
    ~BabyNames() = default;

    int GetID () {
        return this->ID;
    }
    int GetYear () {
        return this->year;
    }
    int GetGender () {
        return this->gender;
    }
    int GetCount () {
        return this->count;
    }
    string GetName () {
        return this->name;
    }

private:
    int ID;
    string name;
    int year;
    int gender;
    int count;
};