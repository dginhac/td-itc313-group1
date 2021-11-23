# TD2 C++ : Gestion d'une « todo list ».

L'exercice consiste à créer différentes classes permettant de gérer une « todo list ».

## Question 1 : Création des classes basiques Todo et Todolist

Il s'agit ici de concevoir les 2 classes basiques Todo représentant la tâche à mémoriser et Todolist représentant l'ensemble des taches.

La classe Todo comprendra le minimum d'informations nécessaires à l'application, à savoir un identifiant numérique, un titre, une description et un statut pour la tâche.

La classe Todolist comprendra aussi le minimum d'informations nécessaires à l'application, à savoir un tableau de tâches.

1. Ecrire le code des classes Todo et Todolist avec leurs constructeurs, leurs getters et les méthodes permettant d'afficher leurs données.
2. Ecrire une méthode de la classe Todolist permettant d'ajouter une nouvelle tâche dans la liste.
3. Ecrire une méthode de la classe Todolist permettant de modifier le statut d'une tâche de la liste.
4. Ecrire une méthode de la classe Todolist permettant de supprimer une tâche de la liste.

## Question 2 : Ajout de catégories

Il s'agit ici de rajouter la possibilité de créer des catégories de tâches (par exemple : Personnel, Professionnel, Loisirs, …) et de référencer chaque tache créée dans une de ces catégories.

1. Rajouter une classe Category avec son constructeur, getters et méthode permettant d'afficher les données
2. Modifier la classe Todolist pour pouvoir gérer les catégories.
3. Modifier la classe Todo pour pouvoir ajouter une catégorie à une tâche.

## Question 3 : Ajout d'algorithmes

1. Ajouter une méthode/fonction permettant de compter le nombre de tâches faites et à faire.
2. Ajouter une méthode/fonction permettant d'extraire les tâches faites et à faire
3. Ajouter une méthode/fonction permettant d'extraire les tâches par catégorie
4. Ajouter une méthode permettant de trier les tâches par identifiant
5. Ajouter une méthode / fonction permettant de supprimer une tâche identifiée par son titre