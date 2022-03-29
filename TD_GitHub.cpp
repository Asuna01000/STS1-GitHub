//Fonctions réalisées par l'étudiant 1 :










//Fonctions réalisées par l'étudiant 2 :

#include <iostream>
using namespace std;

/* Fonctions*/
bool estpair(int x){      /* Fonction pour voir si un nombre est pair ou pas */
    if(x % 2 == 0){     /* On regarde si le resultat de la division euclidienne = a 0 */
        return 1;
    }
    else{
        return 0;
    }
}

int sommeNombre(int x){
}

int main(){
    int n;
 
    cout << "Entrer un nombre :";   /* Demander un int */
    cin >> n;   /* Stocker la la valeur dans n */
    
    cout << estpair(n); /* Afficher le resultat 0=impair, 1=pair*/
    
    return 0;
}








//Fonctions réalisées par l'étudiant 3 :
