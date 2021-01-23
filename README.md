# Formule-de-Zeller (en cours d'écriture)

--------------------------

La Formule de Zeller permet de trouver le jour de la semaine d'une date donnée dans le calendrier grégorien.

La forule de Zeller est la suivante:

k = q + [2,6(m + 1)] + [s/4] - 2s + d + [d/4].


q étant le quantième, m est le rang du mois dans l'année sauf pour janvier et février qui sont considérés comme les 13e et 14e de l’année précédente, s est la partie séculaire de l’année et d les deux derniers chiffres de l’année, le jour de la semaine est le reste de la division par 7 de k où [ ] désigne la partie entière.


Les jours de la semaine sont numérotés selon leur rang
ex: le dimanche correspond à 1 et le samedi à 0.
Le 20 août 1970 était un jeudi, car k = 20 + [2,6 ´ 9] + [19/4] - 38 + 70 + [70/4] = 96. Le reste de la division de 96 par 7 est 5. 

Si k est négatif, on fait alors (7n + k) où n est choisi de façon à ce que la valeur de l'expression varie de 0 à 6. Par exemple, si k = -23, on fait 28 - 23 = 5.

--------------------------------

# Notions abordés:

- Variables
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
 
 
 
 
