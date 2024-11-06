#include <stdio.h>
#include <math.h> /* Knihovna pro matematicke funkce, jako je umocnovani */

int main() {
    float num1, num2, vysledek;  /* Deklarace promenych pro cisla a vysledek */
    int volba;                    /* Promenna pro ulozeni volby uzivatele */

    printf("Vitejte v kalkulacce!\n");

    /* Pozadame uzivatele o zadani prvniho cisla */
    printf("Zadejte prvni cislo: ");
    scanf("%f", &num1);

    /* Pozadame uzivatele o zadani druheho cisla */
    printf("Zadejte druhe cislo: ");
    scanf("%f", &num2);

    /* Zobrazeni menu s operacemi */
    printf("\nJakou operaci chcete provest?\n");
    printf("1. Soucet\n");
    printf("2. Rozdil\n");
    printf("3. Soucin\n");
    printf("4. Podil\n");
    printf("5. Umocneni prvniho cisla druhym\n");
    printf("6. Zbytek pri deleni (modulo)\n");
    printf("Zadejte cislo operace (1-6): ");
    scanf("%d", &volba);

    /* `switch` pro vyber operace na zaklade volby uzivatele */
    switch (volba) {
        case 1:
            /* Soucet: secteme num1 a num2 a vysledek ulozime do promenne vysledek */
            vysledek = num1 + num2;
            /* %.2f: vystup cisla s dvema desetinnymi misty */
            printf("Vysledek: %.2f + %.2f = %.2f\n", num1, num2, vysledek);
            break;

        case 2:
            /* Rozdil: odecteme num2 od num1 a vysledek ulozime do promenne vysledek */
            vysledek = num1 - num2;
            /* %.2f: vystup cisla s dvema desetinnymi misty */
            printf("Vysledek: %.2f - %.2f = %.2f\n", num1, num2, vysledek);
            break;

        case 3:
            /* Soucin: vynasobime num1 a num2 a vysledek ulozime do promenne vysledek */
            vysledek = num1 * num2;
            /* %.2f: vystup cisla s dvema desetinnymi misty */
            printf("Vysledek: %.2f * %.2f = %.2f\n", num1, num2, vysledek);
            break;

        case 4:
            /* Podil: nejdriv overime, zda neni num2 rovno nule */
            if (num2 != 0) {
                vysledek = num1 / num2;
                /* %.2f: vystup cisla s dvema desetinnymi misty */
                printf("Vysledek: %.2f / %.2f = %.2f\n", num1, num2, vysledek);
            } else {
                /* Chyba: delení nulou neni mozne, zobrazime chybovou hlasku */
                printf("Chyba: Deleni nulou neni povoleno.\n");
            }
            break;

        case 5:
            /* Umocneni: pouzijeme funkci pow z math.h k umocneni num1 na num2 */
            vysledek = pow(num1, num2);
            /* %.2f: vystup cisla s dvema desetinnymi misty */
            printf("Vysledek: %.2f ^ %.2f = %.2f\n", num1, num2, vysledek);
            break;

        case 6:
            /* Zbytek pri deleni (modulo): kontrolujeme, zda num2 neni nula */
            if (num2 != 0) {  /* Kontrolujeme, jestli druhe cislo neni nula, abychom predesli deleni nulou */
                /* Pro operaci modulo musi byt obě cisla celociselna (int), proto je pretypujeme a zmenime z float na int*/
                int zbytek = (int)num1 % (int)num2;  /* Prevedeme oba operandy na cele cislo (int) pro modulo */
                /* Výsledek vypíšeme jako celé číslo */
                printf("Vysledek: Zbytek po deleni %d %% %d = %d\n", (int)num1, (int)num2, zbytek);
            } else {
                /* Chyba: deleni nulou neni mozne, zobrazime chybovou hlasku */
                printf("Chyba: Deleni nulou neni povoleno.\n");
            }
            break;

        default:
            /* Osetreni neplatne volby */
            printf("Neplatna volba. Zvolte cislo mezi 1 a 6.\n");
            break;
    }

    return 0; /* Ukonceni programu */
}
