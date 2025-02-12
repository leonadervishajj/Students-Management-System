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

// Funksioni për të fshirë një student nga emri
void fshiStudent() {
    string emri;
    cout << "Shkruani emrin e studentit që dëshironi të fshini: ";
    cin >> emri;

    bool gjetur = false;

    for (int i = 0; i < numriStudentëve; i++) {
        if (studentet[i].emri == emri) {
            // Zhvendosim të gjithë studentët pas këtij studenti një pozita mbrapa
            for (int j = i; j < numriStudentëve - 1; j++) {
                studentet[j] = studentet[j + 1];
            }
            numriStudentëve--; // Ulet numri i studentëve
            cout << "Studenti " << emri << " u fshi me sukses." << endl;
            gjetur = true;
            break;
        }
    }

    if (!gjetur) {
        cout << "Studenti me emrin " << emri << " nuk u gjet." << endl;
    }
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


