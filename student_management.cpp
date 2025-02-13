#include <iostream>
using namespace std;

struct Student {
    string emri;
    int id;
    float nota;
};

// Funksioni për të shtuar një student
void shtoStudent(Student &s) {
    cout << "\n--- Shtimi i Studentit ---\n";
    cout << "Shkruani emrin: ";
    cin >> s.emri;
    cout << "Shkruani ID: ";
    cin >> s.id;
    cout << "Shkruani notën: ";
    cin >> s.nota;
    cout << "Studenti u regjistrua me sukses!\n";
}

int main() {
    Student s1;
    shtoStudent(s1);
    return 0;
}
