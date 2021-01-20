//  24/09/2020      SNIR1       Thomas Bougouin
/*
   En fonction d'une date rentrée par l'utilisateur, ce programme permet d'obtenir le jour de ladite date
*/
#include <iostream>  //inclusion de la bibliothèque "iostream"(gère les flux entrées/sorties)
#include <windows.h> //inclusion du fichier d'en-tête "windows.h"(afficher les caractères spéciaux)
using namespace std;//simplifie l'ecriturte du code, utilise le nom d'espace standard(enleve les std::)

int main()      //fonction principale
{
    unsigned int jour=0, mois=0, anee,debutAnee=0, finAnee=0;//déclaration et initialisation des variables
    SetConsoleOutputCP(CP_UTF8);                            //pour afficher les caractères spéciaux

    //afficher sur la console(de l.14 à l.20)
    cout << "                       Formule de Zeller" << endl;
    cout << "Permet de déterminer le jour en fonction d'une date donée" << endl;
    cout << "Fait par BOUGOUIN Thomas" << endl;
    cout << "La date est sous forme jour -> mois -> anée" << endl;

    cout << "Saississez un nombre compris entre 1 et 31 pour le jour : ";
    cin >>jour;//rentre l'information du jour via le clavier

    cout << "Saississez un nombre compris entre 1 et 12 pour le mois : ";//afficher sur la console
    cin >>mois;//rentre l'information du mois via le clavier

    cout << "Saississez un nombre pour l'anée : ";//afficher sur la console
    cin >>anee;//rentre l'information de l'anée via le clavier

    if(mois==1)//Si le mois est égal à 1(janvier)
    {
        mois=13;//Le mois devient égal à 13
    }

    if(mois==2)//si le mois est égal à 2(février)
    {
        mois=14;//Le mois devient égal à 14
    }

    debutAnee=(anee/100);//On divise par 100 pour obtenir les deux premiers chiffre de l'anée

    finAnee=(anee-(debutAnee*100));//soustrait le nombre de départ au nombre rond, pour obtenir les deux derniers chiffre de l'anée

    int resultat= jour+(2.6*(mois+1))+(debutAnee/4)+(5*debutAnee+finAnee)+(finAnee/4);//calcul via la formule de zeller
    unsigned int  reste=resultat%7;//On cherche le reste du resultat divisé par 7, pour trouver le jour correspondant

  switch(reste)//selon le reste
  {
    case 1://cas 1
    cout << "Le jour corespondant à cette date est samedi"<<endl;//afficher sur la console
    break;//Sort du switch

    case 2://Cas 2
    cout << "Le jour corespondant à cette date est lundi"<<endl;//afficher sur la console
    break;//Sort du switch

    case 3://Cas 3
    cout << "Le jour corespondant à cette date est mardi"<<endl;//afficher sur la console
    break;//Sort du switch

    case 4://Cas 4
    cout << "Le jour corespondant à cette date est mercredi"<<endl;//afficher sur la console
    break;//Sort du switch

    case 5://Cas 5
    cout << "Le jour corespondant a cette date est jeudi"<<endl;//afficher sur la console
    break;//Sort du switch

    case 6://Cas 6
    cout << "Le jour corespondant à cette date est vendredi"<<endl;//afficher sur la console
    break;//Sort du switch

    default://Cas par défault
    cout << "Le jour corespondant a cette date est dimanche"<<endl;//afficher sur la console
    break;//Sort du switch
  }
    return 0; // la fonction renvoie la valeur 0
}
