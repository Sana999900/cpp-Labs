
#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
public:
    void getRoll() {
        cout << "Enter roll number: ";
        cin >> roll;
    }
};

class Test : virtual public Student {
protected:
    int m1, m2;
public:
    void getMarks() {
        cout << "Enter marks of two subjects: ";
        cin >> m1 >> m2;
    }
};

class Sports : virtual public Student {
protected:
    int sm;
public:
    void getSports() {
        cout << "Enter sports marks: ";
        cin >> sm;
    }
};

class Result : public Test, public Sports {
public:
    void display() {
        cout << "\nRoll Number: " << roll;
        cout << "\nTotal Marks: " << m1 + m2 + sm;
    }
};

int main() {
    Result r;
    r.getRoll();
    r.getMarks();
    r.getSports();
    r.display();

    return 0;
}
