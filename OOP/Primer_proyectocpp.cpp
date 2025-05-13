#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <random>

using namespace std;

struct Carta {  // Corregido: "Cartas" → "Carta"
    string simbolo;
    string valor;
    int puntos;
};

class Mazo {
private:
    vector<Carta> cartas;  // Vector de cartas

public:
    Mazo() {  
        vector<string> simbolos = {"Corazones", "Treboles", "Diamantes", "Picas"};
        vector<string> valores = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
        vector<int> puntos = {11,2,3,4,5,6,7,8,9,10,10,10,10};  

        // Llenamos el mazo con cartas
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 13; j++) {
                cartas.push_back({simbolos[i], valores[j], puntos[j]});
            }
        }

        // Mezclamos el mazo
        shuffle(cartas.begin(), cartas.end(), default_random_engine(time(0)));
    }

    Carta repartirCarta() {
        Carta c = cartas.back();
        cartas.pop_back();
        return c;
    }
};

class Jugador {
public:
    vector<Carta> mano;
    int puntaje;

    Jugador() : puntaje(0) {}

    void recibirCarta(Carta c) {
        mano.push_back(c);
        puntaje += c.puntos;
    }

    void mostrarMano() {
        cout << "Mano del jugador: ";
        for (Carta c : mano) {
            cout << "[" << c.valor << " de " << c.simbolo << "] ";
        }
        cout << " | Puntaje: " << puntaje << endl;
    }
};

int main() {
    Mazo mazo;
    Jugador jugador, crupier;

    // Repartir cartas iniciales
    jugador.recibirCarta(mazo.repartirCarta());
    jugador.recibirCarta(mazo.repartirCarta());
    crupier.recibirCarta(mazo.repartirCarta());
    crupier.recibirCarta(mazo.repartirCarta());

    cout << "Bienvenido a Blackjack!" << endl;
    jugador.mostrarMano();

    // Aquí podemos agregar más lógica del juego
    return 0;
}