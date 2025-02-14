#include <math.h> // Perdorimi i matematikes

struct Student {
    int id;
    char emri [50];
    float notat [3];
    int numriNotave;
};

//Funksioni per shtimin e nje note
void shtoNote(struct Student* student, float nota) {
    if (student->numriNotave < 3) { // Kontrollon nese ka vend per nota
        student->notat[student->numriNotave] = nota;
        student->numriNotave++;
        }
}