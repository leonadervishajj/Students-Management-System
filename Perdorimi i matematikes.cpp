#include <math.h> //Perdorimi i matematikes, per shembull

struct Student {
    int id;
    char emri[50];
    float notat[3];
};

//Funksioni per gjetjen e notes me te larte
float gjejNotenMeTeLarte(struct Student*student){
    float max = student ->notat[0];
    for (int i = 1; i < 3; i++){
        if (student -> notat [i] > max){
            max = student -> notat[i];
        }
    }
    return max;
}

int main(){
    struct Student studenti = {1, "Liridon",{8.5,9.0,7.5}};
    float notaMeTeLarte = gjejNotenMeTeLarte(&student);
    return 0;
}
struct Student {
    int id;
    char emri[50];
    float notat[3];
    int numriNotave;
};