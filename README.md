### libActivation.so

C'est une bibliothèque qui renferme un programme pour la verification de l'activation de la licence d'une 
application  suivant le description et explication du fonctionnement du programme ci dessous.
Le programme teste si il y a quelque chose dans le fichier key_file.txt. Si le fichier existe alors le programme affiche "key_file.txt introuvable". Sinon le programme teste si le contenu
de key_file.txt est "activated". Si oui alors le programme affcihe "Hello World" car on est en mode premium. Sinon le programme teste le nombre d'essaies restants pour le mode essaie. Si ce nombre est positif alors le programme affiche seulement "Hello" tout simplement
sans afficher "World" car on est en mode essaie(restriction). Sinon elle affiche "Pay for more" pour dire qu'il faut payer pour avoir la version premium. 
Il y a eu utilisation de plusieurs méthodes qui ont été défini dans 
le fichier .cpp et .hpp dans la classe Activation:
getStatus()  est le getter pour savoir si le mode premium est activé ou pas
getPoint() est le getter pour savoir le nombre de points restants pour l'essai dans le fichier "freeTry.txt"
activate() active le mode premium
VerifyActivation() utilise les deux premiers méthodes pour faire les testes.
