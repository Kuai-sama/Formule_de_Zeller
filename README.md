# Formule-de-Zeller (en cours d'écriture)

--------------------------

La Formule de Zeller permet de trouver le jour de la semaine d'une date donnée dans le calendrier grégorien.

La forule de Zeller est la suivante:

<ins>k = q + [2,6(m + 1)] + [s/4] - 2s + d + [d/4]<ins>.

q étant le quantième, m est le rang du mois dans l'année sauf pour janvier et février qui sont considérés comme les 13e et 14e de l’année précédente, s est la partie séculaire de l’année et d les deux derniers chiffres de l’année, le jour de la semaine est le reste de la division par 7 de k où [ ] désigne la partie entière.


Les jours de la semaine sont numérotés selon leur rang
ex: le dimanche correspond à 1 et le samedi à 0.
Le 20 août 1970 était un jeudi, car k = 20 + [2,6 ´ 9] + [19/4] - 38 + 70 + [70/4] = 96. Le reste de la division de 96 par 7 est 5. 

Si k est négatif, on fait alors (7n + k) où n est choisi de façon à ce que la valeur de l'expression varie de 0 à 6. Par exemple, si k = -23, on fait 28 - 23 = 5.
