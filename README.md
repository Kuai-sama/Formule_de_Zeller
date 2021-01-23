# Formule-de-Zeller (en cours d'écriture)

--------------------------

La Formule de Zeller permet de trouver le jour de la semaine d'une date donnée dans le calendrier grégorien.

La forule modifié de Zeller est la suivante:

k = ((q + [2,6(m + 1)] + [s/4] + 5s + d + [d/4])%7)

Pour mieux comprendre on va la remanier un petit-peu!!

k = jour+(2.6*(mois+1))+(debutAnnee/4)+(5*debutAnnee+finAnnee)+(finAnnee/4);
k = k%7
- q et jour sont le quantième, c'est à dire le numéro du jour.

- m et mois sont le numéro du mois sauf est janvier et février qui sont les 13ème et 14ème mois de l’année précédente

- s et debutAnnee sont les deux premiers de l’année

- d et finAnnee sont les deux derniers chiffres de l’année

- k est le reste du résultat obtnue divisé par 7 

Les jours de la semaine (k) sont numérotés selon leur rang.

ex: Le samedi = 0<br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Le dimanche = 1<br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Le lundi =2<br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Le mardi= 3<br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Le jeudi =5<br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Le vendredi =6

--------------------------------

# Notions abordés:

- Variables
- Décrémentation
- Boucles:
    - switch()
    - if<br>   
- Code avec l'espace de nom standard (using namespace std;)

-------------------------------------------
# Comment éxécuter le programme?
1. Télécharger QT creator :

    - Voici un lien pour vous aider [Téléchargemnt de QT 6.0](https://guillaumebelz.github.io/qt6/installation/)
    - Creer un nouveau main.cpp (mettre image)
    - Copier le code de mon fichier [main.cpp](https://github.com/Kuai-sama/Formule-de-Zeller/blob/main/main.cpp)
      
2. Installer le compilateur [MinGW](https://sourceforge.net/projects/mingw/files/latest/download)
 
    - Lancer le .exe et installer le compilateur
    - Lancer un éditeur de texte (ex: bloc-notes)
    - Copier le code du fichier [main.cpp](https://github.com/Kuai-sama/Formule-de-Zeller/blob/main/main.cpp) dans ce fichier
    - Sauvegarder en main.cpp
    - Ouvrir le terminal(cmd) et déplacer vous à l'endroit de votre fichier<br>
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Ex : J'ai mon dossier "Zeller" avec mon .cpp dans celui-ci, il me suffit de faire cd Desktop/Zeller
    - Taper la commande La fonction `g++ main.cpp -o Zeller`. La commande -o permet de créer un .exe au nom de Zeller
    - Taper Zeller ou Zeller.exe dans le terminal pour lancer le programme
 
 3-Téléchrager le [.exe](https://github.com/Kuai-sama/Formule-de-Zeller/blob/main/Zeller.exe)
 
 Lancer le .exe
 
 
 
 
