#include <stdio.h>
#include "mesFontions.h"

int exo1(){
    int entier1 = 0;
    int entier2 = 0;
    printf("Saisissez deux entiers.\nEntier 1:");
    scanf("%d", &entier1);
    printf("Entier 2:");
    scanf("%d", &entier2);
    if (entier1 > entier2){
        printf("L'entier le plus grand est %d \n", entier1);
    }
    else{
        printf("L'entier le plus grand est %d \n", entier2);
    }
}

int exo2(){
    float longueur = 0;
    float largeur = 0;
    float perimetre = 0;
    float aire = 0;
    printf("Saisissez la longueur du rectangle:\n");
    scanf("%f", &longueur);
    printf("Saisissez la largeur du rectangle:\n");
    scanf("%f", &largeur);
    perimetre = 2*largeur + 2*longueur;
    printf("Le perimetre du rectangle est %f .\n",perimetre);
    aire = longueur * largeur;
    printf("L'aire du rectangle est %f .\n",aire);

}

int exo3(){
    int entier = 0;
    int constante = 3;
    printf("Saisissez un entier:");
    scanf("%d",&entier);
    if (entier > 10 && entier % 3 == 0){
        printf("Cet entier est multiple de %d et > 10\n",constante);
    }
    else {
        printf("Cet entier n'est pas multiple de %d et/ou >10\n",constante);
    }
}

int exo4(){
    int age = 0;
    int etudiant = 0;
    printf("Entrez votre age.");
    scanf("%d", &age);
    printf("Etes vous etudiant oui=[1] et non=[0] ?");
    scanf("%d", &etudiant);
    if (age < 12){
        printf("Vous beneficiez du tarif enfant (4€).\n");
    }
    else if (12 <= age <= 17){
        printf("Vous beneficiez du tarif jeune (6€).\n");
    }
    else if (etudiant == 1 && age <= 27){
        printf("Vous béneficiez du tarif jeune (6€).\n");
    }
    else if (age >= 65){
        printf("Vous beneficiez du tarif senior (6€).\n");
    }
    else {
        printf("Vous beneficiez du plein tarif (9€).\n");
    }
}

int exo5() {
    int numero = 0;
    printf("Taper le numero de la boisson correspondante.\n");
    scanf("%d", &numero);
    if (numero == 1){
        printf("Boisson 1");
    }
    else if (numero == 2){
        printf("Boisson 2");
    }
    else if (numero == 3){
        printf("Boisson 3");
    }
    else if (numero == 10){
        printf("Boisson 10");
    }
    else if (numero == 11){
        printf("Boisson 11");
    }
    else {
        printf("Erreur! Cette boisson n'existe pas.");
    }
}


int exo6(){
    float note1 = 0;
    float note2 = 0;
    float note3 = 0;
    float moyenne = 0;
    printf("Saisissez votre 1e note :");
    scanf("%f", &note1);
    if (note1 < 0 || note1 > 20){
        while (note1 < 0 || note1 > 20);
            printf("Erreur saisissez une note correcte.");
            scanf("%f", &note3);
    }
    printf("Saisissez votre 2e note :");
    scanf("%f", &note2);
    if (note2 < 0 || note2 > 20){
        while (note2 < 0 || note2 > 20);
            printf("Erreur saisissez une note correcte.");
            scanf("%f", &note2);
    }
    printf("Saisissez votre 3e note :");
    scanf("%f", &note3);
    if (note3 < 0 || note3 > 20){
        while (note3 < 0 || note3 > 20);
            printf("Erreur saisissez une note correcte.");
            scanf("%f", &note3);
    }
    moyenne = (note1 + note2 + note3) / 3;
    printf("La moyenne est de %f\n", moyenne);
}


int exo6bis(){
    float note4 = 0;
    float note5 = 0;
    float note6 = 0;
    float m = 0;
    for (int i = 4; i = 6; i++){
        printf("Saisissez votre note %d", i);
        scanf("%d", &note4);

    }

    /*
    printf("Saisissez votre note.\n Note 1:");
    scanf("%f", &note4);
        while (note4 < 0 && note4 > 20);
            printf("Saisissez une note correcte");
            scanf("%f", &note4);

    printf("Saisissez votre note.\n Note 2:");
    scanf("%f", &note5);
        while (note5 < 0 && note5 > 20);
            printf("Saisissez une note correcte");
            scanf("%f", &note5);

    printf("Saisissez votre note.\n Note 3:");
    scanf("%f", &note6);
        while (note6 < 0 && note6 > 20);
            printf("Saisissez une note correcte");
            scanf("%f", &note6);
    */
}


int exo7(){
    int classe = 0;
    int eleve = 0;
    printf("Saisir le nombre de classes :");
    scanf("%d",&classe);
    for (int i = 1; i <= classe; i++) {
        printf("Saisir le nombre d'eleves dans la classe %d : ", i);
        scanf("%d", &eleve);
        eleve += eleve;
    }

    printf("Il y a %d bambins dans l'ecole. \n", eleve);
}

int exo8(){
    int n = 0;
    printf("Saisissez un entier : ");
    scanf("%d", &n);
    if (!(n % 2 == 0 && n % 7 == 0)){
        while (!(n % 2 == 0 && n % 7 == 0)) {
            printf("Essayer encore ! \n Saisissez un entier : ");
            scanf("%d", &n);
        }
    }
    else {
    printf("%d est bien divisible par 2 et 7.", n);
    }
}

int exo9(){
    int pierres = 0;
    int etages = 0;
    printf("Entrez le nombre de pierres possedees : ");
    scanf("%d\n", &pierres);
        while (pierres - (etages * etages) > 0);
            etages ++;
            


    printf("Il y a %d etages dans la pyramide", &etages);
}

int exo10(){
    int nombre = 0;
    float somme = 0;
    while (nombre > 0) {
        printf("Saisissez nombre:");
        scanf("%d", &nombre);
        somme += nombre;
    }
}

int main(){
    //exo1();
    //exo2();
    //exo3();
    //exo4();
    //exo5();
    //exo6();
    //exo6bis();
    //exo7();
    //exo8();
    exo9();
    //exo10();
    return 0;
}