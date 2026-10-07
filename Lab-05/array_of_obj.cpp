#include <iostream>
#include <cstring>
using namespace std;

class Person {
public:
    char name[64];
    int age;
    char address[64];
    double basicPay, hra, da, totalSalary;

    // Default constructor
    Person() {
        strcpy(name, "");
        age = 0;
        strcpy(address, "");
        basicPay = hra = da = totalSalary = 0;
    }

    // Parameterized constructor
    Person(const char* n, int a, const char* addr, double pay) {
        strcpy(name, n);
        age = a;
        strcpy(address, addr);
        basicPay = pay;
        hra = 0.20 * basicPay; 
        da = 0.10 * basicPay;  
        totalSalary = basicPay + hra + da;
    }

    // Display salary slip
    void displaySalarySlip(int index) {
        cout << "\n--- Salary Slip ---" << endl;
        cout << "Name: " << name << "\nAge: " << age << "\nAddress: " << address << endl;
        cout << "Basic Pay: ₹" << basicPay << "\nHRA: ₹" << hra << "\nDA: ₹" << da << endl;
        cout << "Total Salary: ₹" << totalSalary << endl;
    }
};

// Inline function to find youngest and eldest age
inline void findYoungestAndEldest(Person p[], int size) {
    int minAge = p[0].age, maxAge = p[0].age;
    for (int i = 1; i < size; i++) {
        if (p[i].age < minAge) minAge = p[i].age;
        if (p[i].age > maxAge) maxAge = p[i].age;
    }
    cout << "Youngest Age: " << minAge << "\nEldest Age: " << maxAge << endl;
}

int main() {
    // Array of 10 Person objects
    Person people[10] = {
        Person("Amit", 25, "Delhi", 45000),
        Person("Priya", 32, "Mumbai", 60000),
        Person("Rohan", 19, "Bangalore", 30000),
        Person("Sneha", 45, "Kolkata", 85000),
        Person("Vikram", 58, "Jaipur", 95000),
        Person("Ananya", 28, "Chennai", 52000),
        Person("Karan", 35, "Ahmedabad", 67000),
        Person("Neha", 22, "Pune", 38000),
        Person("Rajesh", 50, "Kochi", 88000),
        Person("Pooja", 41, "Hyderabad", 74000)
    };

    // (a) Inline function call
    findYoungestAndEldest(people, 10);

    // (b) Display salary slip
    for (int i = 0; i < 10; i++) {
        people[i].displaySalarySlip(i + 1);
    }
    return 0;
}
