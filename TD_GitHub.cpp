//Fonctions réalisées par l'étudiant 1 :

//Ci-dessous la première fonction
bool estMajeur(int age)
    {
        if (age >= 18)
            {
                return true ;
            }

        else 
            {
                return false  ;
            }  
    }
//Ci-dessous la deuxième fonction

#include <stdio.h>
#include <iostream>
#include <math.h> // Nessessaire pour faire fonctioner la fonction 'pow'
using namespace std;

int main()
{
    int Nombre, Exposant, Resultat; //Création des entier Nombre Exposant et Resultat
    cout << "Choisissez un Nombre : ";  //Demande a l'utilisateur de choisir un nombre
    cin >> Nombre;
    cout << "Choisissez un Exposant : "; //Demande a l'utilisateur de choisir un Exposant
    cin >> Exposant;
    Resultat = pow(Nombre,Exposant);  //La fonction 'pow' est utiliser pour l'exposant. 
    cout << Resultat; //Affiche le résultat
    return 0; //Retourne 0
 }
//Ci-dessous la troisième fonction
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    float Prix, Resultat; //Création des réelle Prix et Resultat
    cout << "Choisissez un Prix : ";  //Demande a l'utilisateur de choisir un prix
    cin >> Prix;
    Resultat = Prix+(Prix*(19.6/100));  //Ajout des 19.6% au prix
    cout << Resultat; //Affiche le résultat
    }
//Ci-dessous la dernière fonction
#include <stdio.h>
#include <iostream>
using namespace std;

int PlusGrand(int a, int b, int c)
{
    if(a > b && a > c) //Si le Nombre 1 est le plus grand l'afficher
    {
        cout << a;
    }
    else if(b > a && b >c) //Si le Nombre 2 est le plus grand l'afficher
    {
        cout << b;
    }
    else //Sinon afficher le Nombre 3
    {
        cout << c;
    }
    return 0;
}
int main()
{
    int a, b, c; //Création des entier Nombre1 Nombre2 et Nombre3
    cout << "Choisissez le Nombre 1 : ";  //Demande a l'utilisateur de choisir le nombre 1
    cin >> a;
    cout << "Choisissez le Nombre 2 : ";  //Demande a l'utilisateur de choisir le nombre 2
    cin >> b;
    cout << "Choisissez le Nombre 3 : ";  //Demande a l'utilisateur de choisir le nombre 3
    cin >> c;
    PlusGrand( a, b, c);
}




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
