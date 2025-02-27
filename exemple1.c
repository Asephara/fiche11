#include <stdio.h>

struct Etudiant
{
    char nom [50];
    int age;
    float moyenne;
};

int main(){
    struct Etudiant etu= {"Robert", 22, 96.8};
    printf("Nom: %s\n", etu.nom);
    printf("Age: %d\n", etu.age);
    printf("Moyene: %.2f pourcent\n ", etu.moyenne);

    return 0;
    
}
