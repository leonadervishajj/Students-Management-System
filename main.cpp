#include <iostream>
using namespace std;

// Struktura per ruajtjen e informacionit te studenteve
struct Student {
    string emri;
    int mosha;
    double notat[10]; 
    int numriNotave;   
};

// Lista globale për të mbajtur studentët
Student studentet[50]; 
int numriStudentëve = 0;
// Funksionet e programit
void shtoStudent();
void shfaqStudentet();
void shfaqMenu();

// Funksioni per shfaqjen e menusë
void shfaqMenu() {
    cout << "Menaxhimi i Studenteve:" << endl;
    cout << "1. Shto Student" << endl;
    cout << "2. Shfaq Studentet" << endl;
    cout << "3. Mbyll Programin" << endl;
    cout << "Zgjedhja: ";
}

int main() {
    int zgjedhja;

    do {
        shfaqMenu(); // Thirrja e funksionit për shfaqjen e menu-së
        cin >> zgjedhja;

        switch (zgjedhja) {
            case 1: shtoStudent(); break;
            case 2: shfaqStudentet(); break;
            case 3: cout << "Programi do te mbyllet.!" << endl; break;
            default: cout << "Zgjedhje e gabuar! Pritni nje zgjedhje te sakte." << endl; break;
        }
    } while (zgjedhja != 3);  

    return 0;
}


