"LE TOUT EN POCHE" Le Langage C++

Ce git contient les listings de ce livre :

ISBN : 2-7440-1554-7

Information seul les programmes qui se trouvent dans les repertoires "New" ont ete compiler avec gcc avec les flags suivant :

g++ -Wall -Wextra -Werror -std=c++98 main.cpp

ou avec Microsoft Visual Studio :
cl -std=c++98 main.cpp

Les listings qui se touvent dans les repertoitres
"Livre" ont ete compiler avec Borland C++ 5.02 avec la commande suivante :

c:\BC5\BIN\bcc32.exe main.cpp

Quelques modification sur les listings du livre a ete pour ameliorer l'utilisation de l' IDE fournit avec Borland C++.
Entre autre l'ajout de la biblioteque <conio.h> et sa commande getch().
Les "\n" par endl pour les retour a la ligne.

Bien que Borland C++ vient de l'antiquite de l'informatique, l'installation fonctionne encore sur Windows 11 et son utilistaion est impossible pour une projet 16 bit.
