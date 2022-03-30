#include <stdio.h>
#include <iostream>
#include <math.h> // Nessessaire pour faire fonctioner la fonction 'pow'
#include <algorithm>  //std::min()
using namespace std;

|//--------------------------------------------//|
|  //°--------------------------------------°//  |
|  // Fonctions réalisées par l'étudiant 1 : //  |
|  //°--------------------------------------°//  |
|//--------------------------------------------//|

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
    
int exposant(int nbre, int expo)
{
 return pow(nbre, expo);  //La fonction 'pow' est utiliser pour l'exposant. 
}

float TVA(int prix)
{
    return prix+(prix*(19.6/100));
}

int PlusGrand(int a, int b, int c)
{
    if(a > b && a > c) //Si le Nombre 1 est le plus grand l'afficher
    {
        return a;
    }
    else if(b > a && b >c) //Si le Nombre 2 est le plus grand l'afficher
    { 
        return b;
    }
    else //Sinon afficher le Nombre 3
    { 
        return c;
    }
}

// Faure Bryan


//----------------------------------------
//Fonctions réalisées par l'étudiant 2 : |
//----------------------------------------
    
bool estPair(int nb){      /* Fonction pour voir si un nombre est pair ou pas */
    if(mb % 2 == 0){     /* On regarde si le resultat de la division euclidienne = a 0 */
        return 1;
    }
    else{
        return 0;
    }
}

int sommeNombre(int nb){
    int result = 0;	//initialisation de la variable result à 0
    
    for(int i=0; i<=nb; i++){
        result += i;	//Ajouter au resultat le prchain nombre
    }
    return result;
}

float salaireNet(int salaire){
    return salaire -1 0.23 * salaire;	//retourne le salaire - 23%
}

int plusPetit(int a, int b, int c){
    return std::min({a, b, c}); //retourne le min entre les nombres entre
}

// Sene Tom


//------------------------------------------------------------------
// Les mains pour les étudiants 1 et 2 (pour tester les Fonctions).|
//------------------------------------------------------------------

// Main de l'étudiant 1 :
    
//int main()
//{
    // Fonction estMajeur
//    int age;
//    cout << "Age : ";
//    cin >> age;
//    cout << estMajeur(age);

    // Fonction exposant
//    int Nombre, Exposant; //Création des entier Nombre Exposant et Resultat
//    cout << "Choisissez un Nombre : ";  //Demande a l'utilisateur de choisir un nombre
//    cin >> Nombre;
//    cout << "Choisissez un Exposant : "; //Demande a l'utilisateur de choisir un Exposant
//    cin >> Exposant;
//    cout << exposant(Nombre, Exposant);
//    return 0; //Retourne 0

    // Fonction TVA
//    float Prix; //Création des réelle Prix
//    cout << "Choisissez un Prix : ";  //Demande a l'utilisateur de choisir un prix
//    cin >> Prix;
//   cout << TVA(Prix);

    // Fonction plusGrand
//    int a, b, c; //Création des entier Nombre1 Nombre2 et Nombre3
//    cout << "Choisissez le Nombre 1 : ";  //Demande a l'utilisateur de choisir le nombre 1
//    cin >> a;
//    cout << "Choisissez le Nombre 2 : ";  //Demande a l'utilisateur de choisir le nombre 2
//    cin >> b;
//    cout << "Choisissez le Nombre 3 : ";  //Demande a l'utilisateur de choisir le nombre 3
//    cin >> c;
//    cout << PlusGrand( a, b, c);

//}

//-----------------------------------------------------------------------------------------
    
//Main de l'étudiant 2 :

//int main(){
    //Fontcion estPair
//    int n;
//    cout << "Entrer un nombre :";
//    cout << estpair(n); /* Afficher le resultat 0=impair, 1=pair*/

    // Fonction sommeNombre
//    int Num;
//    cout << "Number:";
//    cin >> Num;
//    cout<< sommeNombre(Num);

    // Fonction salaireNet
//    int wage;
//    cout<< "Salaire : ";
//    cin >> wage;
//    cout << salaireNet(wage);

    //Fonction plusPetit()
//    int a, b, c;
//    cout << "Number 1 : ";
//    cin >> a;
//    cout << "Number 2 : ";
//    cin >> b;
//    cout << "Number 3 : ";
//    cin >> c;
//    cout << plusPetit( a, b, c);
//    return 0;
//}

//----------------------------------------
//Fonctions réalisées par l'étudiant 3 : |
//----------------------------------------
    // Pas de 3eme étudiant.
