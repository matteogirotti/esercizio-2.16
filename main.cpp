#include <iostream>

int main() {
    float prezzoBiglietto;
    float provvigione;
    float prezzoFinale;
    printf("il prezzo del biglietto e': ");
    scanf("%f", &prezzoBiglietto);
    provvigione = prezzoBiglietto * 0.15;
    if(provvigione<5) provvigione= 5;
    prezzoFinale = prezzoBiglietto + provvigione;
    printf("il valore della provvigione e': %.2f euro\n", provvigione);
    printf("il prezzo finale del biglietto e': %.2f euro\n", prezzoFinale);

}
