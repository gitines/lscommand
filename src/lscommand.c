#include <stdio.h>
#include <stdlib.h>

int main() {
    // Ouvrir le répertoire courant
    DIR *dir = opendir(".");

    if (dir == NULL) {
        perror("Erreur lors de l'ouverture du répertoire");
        return 1;
    }

    // Lire le contenu du répertoire
    struct dirent *entry;

    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    // Fermer le répertoire
    closedir(dir);

    return 0;
}