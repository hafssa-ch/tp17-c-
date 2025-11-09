# Exercice 1 – Séparer proprement une classe unique
## Description
Cet exercice consiste à découper un fichier monolithique Point3D.cpp en deux fichiers séparés :
Point3D.h : contient la déclaration de la classe Point3D, les constructeurs et les accesseurs (getX, getY, getZ).
Point3D.cpp : contient la définition complète des méthodes.
Un main.cpp simple est également créé pour tester la classe en instanciant deux points et en affichant leurs coordonnées.
Le fichier d’en-tête est protégé avec des include-guards pour éviter les inclusions multiples.
Une question bonus demande d’expliquer la différence entre :
#include "Point3D.h" → inclut un fichier local au projet
#include <Point3D.h> → inclut un fichier dans les chemins standards des bibliothèques
# Sortie attendue
<img width="511" height="113" alt="image" src="https://github.com/user-attachments/assets/b0e36a39-e4ae-4015-a73b-b15fa816da43" />


# Exercice 2 – Mini-bibliothèque géométrique
## Description
Cet exercice consiste à créer une mini-bibliothèque Geo2D contenant trois classes :
Point : représente un point 2D
Segment : représente un segment entre deux points, avec une méthode longueur()
Triangle : représente un triangle formé de trois points, avec une méthode perimetre()
L’organisation des fichiers est la suivante :
/include : fichiers d’en-tête (Point.h, Segment.h, Triangle.h)
/src : fichiers source (Point.cpp, Segment.cpp, Triangle.cpp)
Chaque classe possède un constructeur par défaut et un constructeur paramétré.
Le main.cpp utilise cette bibliothèque pour créer des points et calculer le périmètre d’un triangle
Un Makefile minimal permet de compiler facilement le programme.
## Sortie attendue
<img width="487" height="78" alt="image" src="https://github.com/user-attachments/assets/9cb8588f-d308-4eb3-9aa5-3fa653f9fc54" />

# Exercice 3 – Création d’une librairie statique (.a) ou partagée (.so)
## Description
Cet exercice consiste à créer une librairie réutilisable contenant deux classes :
Logger : singleton pour écrire des messages dans un journal
Config : pour lire des clés depuis un fichier JSON
Les fichiers sont séparés en headers (.h) et sources (.cpp).
Le programme se compile en objets puis en librairie :
Librairie statique : libutil.a
Librairie partagée : libutil.so
Un programme testLib.cpp teste la librairie en :
Écrivant un message dans le journal avec Logger
Lisant une clé de configuration avec Config
Le lien avec la librairie se fait via :
g++ testLib.cpp -I./include -L. -lutil -o testLib
Pour la librairie partagée, LD_LIBRARY_PATH doit pointer vers le dossier contenant libutil.so.

## Sortie attendue
<img width="543" height="139" alt="image" src="https://github.com/user-attachments/assets/636de325-f89a-4d73-bc19-9eb7c0d6df1e" />



# Exercice 4 – Classe template et fichier d’en-tête uniquement
## Description
Cet exercice consiste à créer un template de matrice Matrix<T, N, M> de taille fixe.
Toutes les méthodes doivent être définies dans le fichier d’en-tête (Matrix.h) pour être visibles lors de l’instanciation.
Le fichier Matrix.h contient :
Déclaration et définition des méthodes : operator+, operator*, at(i,j)
Surcharge de l’opérateur << pour l’affichage
Le main.cpp teste le template en créant :
Matrix<int, 2, 2> pour des matrices 2×2 d’entiers
Matrix<double, 3, 3> pour des matrices 3×3 de réels
La compilation se fait avec un seul objet : main.o ; aucune compilation séparée pour Matrix n’est nécessaire.

## Sortie attendue
<img width="267" height="440" alt="image" src="https://github.com/user-attachments/assets/39a6bf8f-b969-4276-922e-dd3578c1c403" />


