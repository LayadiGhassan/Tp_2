#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ChargerChaine(int N) {
    char *chaine = malloc(N * sizeof(char));
    if (chaine == NULL) {
        printf("Error \n");
        exit(1);
    }
    printf("Enter your text :\n");
    scanf("%s", chaine);
    return chaine;
}

int Longueur(char *ch) {
    int length = 0;
    while (ch[length] != '\0') {
        length++;
    }
    return length;
}

void InverserTab(char Tab[], char T[], int m) {
    for (int i = 0; i < m; i++) {
        T[i] = Tab[m - 1 - i];
    }
    T[m] = '\0';
}

void ChargerTab(char *p, char Tab[]) {
    int i = 0;
    while (p[i] != '\0') {
        Tab[i] = p[i];
        i++;
    }
    Tab[i] = '\0';
}

void AfficherTab(char Tab[], int m) {
    printf("Le tableau est : ");
    for (int i = 0; i < m; i++) {
        printf("%c", Tab[i]); 
    }
    printf("\n"); 
}

int main() {
    char *ch;
    int n;
    printf("Enter the max :\n");
    scanf("%d", &n);
    ch = ChargerChaine(n);

    int m = Longueur(ch);
    char Tab[m], T[m];

    ChargerTab(ch, Tab);
    AfficherTab(Tab, m);

    InverserTab(Tab, T, m);
    AfficherTab(T, m);

    free(ch);
    return 0;
}
