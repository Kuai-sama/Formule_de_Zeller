//Création : 24/09/2020       Fait par Kuaï     Github:Kuai-sama
//Modification : 21/01/2021     
/*
   En fonction d'une date rentrée par l'utilisateur, ce programme permet d'obtenir le jour de ladite date
*/
#include <iostream>   //Inclusion de la bibliothèque "iostream"(gère les flux entrées/sorties)
#include <windows.h> //Inclusion du fichier d'en-tête "windows.h"(afficher les caractères spéciaux)
using namespace std;//Simplifie l'ecriturte du code, utilise le nom d'espace standard(enleve les std::)

int main()
{
   unsigned int jour=0, mois=0, annee,debutAnnee=0, finAnnee=0;//Déclaration et initialisation des variables
   SetConsoleOutputCP(CP_UTF8);                            //Permet d'afficher les caractères spéciaux
   
   cout << "                       Formule de Zeller" << endl;
   cout << "Permet de déterminer le jour en fonction d'une date donée" << endl;
   cout << "La date est sous forme jour -> mois -> anée" << endl;

   cout << "Saississez un nombre compris entre 1 et 31 pour le jour : ";
   cin >>jour;
   
   cout << "Saississez un nombre compris entre 1 et 12 pour le mois : ";
   cin >>mois;

   cout << "Saississez un nombre pour l'anée : ";
   cin >>annee;
   switch(mois)
   {
      case 1://Cas 1
      cout<<"vous avez saisi la date du "<<jour<<" "<<"janvier"<<" "<<annee<<endl;
      break;//Sort du switch
          
      case 2://Cas 2
      cout<<"Vous avez saisi la date du "<<jour<<" "<<"fevrier"<<" "<<annee<<endl;
      break;//Sort du switch
          
      case 3://Cas 3
      cout<<"Vous avez saisi la date du "<<jour<<" "<<"mars"<<" "<<annee<<endl;
      break;//Sort du switch
          
      case 4://Cas 4
      cout<<"vous avez saisi la date du "<<jour<<" "<<"avril"<<" "<<annee<<endl;
      break;//Sort du switch
          
      case 5://Cas 5
      cout<<"Vous avez saisi la date du "<<jour<<" "<<"mai"<<" "<<annee<<endl;
      break;
          
      case 6://Cas 6
      cout<<"vous avez saisi la date du "<<jour<<" "<<"juin"<<" "<<annee<<endl;
      break;//Sort du switch
          
      case 7://Cas 7
      cout<<"vous avez saisi la date du "<<jour<<" "<<"juillet"<<" "<<annee<<endl;
      break;//Sort du switch
          
      case 8://Cas 8
      cout<<"Vous avez saisi la date du "<<jour<<" "<<"aout"<<" "<<annee<<endl;
      break;//Sort du switch
          
      case 9://Cas 9
      cout<<"vous avez saisi la date du "<<jour<<" "<<"septembre"<<" "<<annee<<endl;
      break;//Sort du switch
          
      case 10://Cas 10
      cout<<"Vous avez saisi la date du "<<jour<<" "<<"octobre"<<" "<<annee<<endl;
      break;//Sort du switch
          
      case 11://Cas 11
      cout<<"Vous avez saisi la date du "<<jour<<" "<<"novembre"<<" "<<annee<<endl;
      break;//Sort du switch
          
      case 12://Cas 12
      cout<<"Vous avez saisi la date du "<<jour<<" "<<"decembre"<<" "<<annee<<endl;
      break;//Sort du switch
   }

   if(mois==1)//Si le mois est égal à 1(janvier)
   {
       mois=13;//Le mois devient égal à 13
       annee--;//Décrémentation
   }

   if(mois==2)//Si le mois est égal à 2(février)
   {
      mois=14;//Le mois devient égal à 14
      annee--;//Décrémentation
   }

   debutAnnee=(annee/100);//On divise par 100 pour obtenir les deux premiers chiffre de l'année

   finAnnee=(annee-(debutAnnee*100));//Soustrait le nombre de départ au nombre rond, pour obtenir les deux derniers chiffre de l'année

   int resultat = jour+(2.6*(mois+1))+(debutAnnee/4)+(5*debutAnnee+finAnnee)+(finAnnee/4);//Calcul via la formule de zeller
   unsigned int reste=resultat%7;//On cherche le reste du resultat divisé par 7, pour trouver le jour correspondant

  switch(reste)//Selon le reste
  {
    case 0://Cas 0
    cout << "Le jour corespondant à cette date est samedi"<<endl;
    break;//Sort du switch

    case 1://Cas 1
    cout << "Le jour corespondant à cette date est dimanche"<<endl;
    break;//Sort du switch

    case 2://Cas 2
    cout << "Le jour corespondant à cette date est lundi"<<endl;
    break;//Sort du switch

    case 3://Cas 3
    cout << "Le jour corespondant à cette date est mardi"<<endl;
    break;//Sort du switch

    case 4://Cas 4
    cout << "Le jour corespondant a cette date est mercredi"<<endl;
    break;//Sort du switch

    case 5://Cas 5
    cout << "Le jour corespondant à cette date est jeudi"<<endl;
    break;//Sort du switch

    case 6://Cas 6
    cout << "Le jour corespondant à cette date est vendredi"<<endl;
    break;//Sort du switch
  }
    return 0; //0 est renvoyé à la fonction
}
