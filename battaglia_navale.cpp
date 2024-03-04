#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int DIMENSIONE_MAPPA = 10;

// creazione della mappa
void inizializzaMappa(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]);
void creazioneMappa(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]);

// creazione navi X giocatori
void navePiccola(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]);
void naveMedia(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]);
void naveGrande(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]);
void naveGigante(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]);

//  creazione navi X computer
void navePiccolaCompter(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]);
void naveMediaComputer(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]);
void naveGrandeComputer(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]);
void naveGiganteComputer(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]);

int main() {
    
    char mappaGiocatore[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA];
    char mappaComputer[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA];
    
    inizializzaMappa(mappaGiocatore);
    inizializzaMappa(mappaComputer);
    
    creazioneMappa(mappaGiocatore);

    // creazione delle barche X giocatore
    navePiccola(mappaGiocatore);
    naveMedia(mappaGiocatore);
    naveGrande(mappaGiocatore);
    naveGigante(mappaGiocatore);

    // creazione delle barche X computer
    navePiccolaCompter(mappaComputer);
    naveMediaComputer(mappaComputer);
    naveGrandeComputer(mappaComputer);
    naveGiganteComputer(mappaComputer);

    while(true) {
        int x;
        int y;

        cout << "inserisci le cordinate in cui potrebbero essere le navi" << endl;
        cin >> x >> y;

        if(mappaComputer[y][x] == 'X'){
            cout << "COLPITO" << endl;
            mappaComputer[y][x] = 'o';
        } else {
            cout << "ACQUA" << endl << endl;
        }

        x = rand() % 10;
        y = rand() % 10;

        if(mappaGiocatore[y][x] == 'X'){
            cout << "IL COMPUTER TI HA COLPITO" << endl;
            mappaGiocatore[y][x] = 'o';
        } else {
            cout << "IL COMPUTER TI HA MANCATO" << endl;
        }
    }

    system("pause");
    return 0;
}


//inizializza la mappa
void inizializzaMappa(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]) {
    for(int i = 0; i < DIMENSIONE_MAPPA; i++) {
        for(int j = 0; j < DIMENSIONE_MAPPA; j++) {
            mappa[i][j] = 'o'; // inizializzazione mappa
        }
    }
}

void creazioneMappa(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]) {
    for(int i = 0; i < DIMENSIONE_MAPPA; i++) {
        for(int j = 0; j < DIMENSIONE_MAPPA; j++) {
            cout << mappa[i][j] << ' '; // inizializzazione mappa
        }
        cout << endl;
    }
    cout << endl;
}

// nave piccola = 1;
void navePiccola(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]) {
    int x;
    int y;
    
    cout << "inserisci le condinate per inserire la nave 1x1" << endl;
    cin >> x >> y;

    mappa[y - 1][x - 1] = 'X';
    
    for(int i = 0; i < DIMENSIONE_MAPPA; i++) {
        for(int j = 0; j < DIMENSIONE_MAPPA; j++) {
            cout << mappa[i][j] << ' '; // inizializzazione mappa
        }
        cout << endl;
    }
    cout << endl;
}

// nave media = 2;
void naveMedia(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]) {
    int x;
    int y;
    
    cout << "inserisci le condinate per inserire la nave 2x1" << endl;
    cin >> x >> y;

    mappa[y - 1][x - 1] = 'X';
    mappa[y][x - 1] = 'X';

    for(int i = 0; i < DIMENSIONE_MAPPA; i++) {
        for(int j = 0; j < DIMENSIONE_MAPPA; j++) {
            cout << mappa[i][j] << ' '; // inizializzazione mappa
        }
        cout << endl;
    }
    cout << endl;
}

// nave grande = 3;
void naveGrande(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]) {
    int x;
    int y;
    
    cout << "inserisci le condinate per inserire la nave 3x1" << endl;
    cin >> x >> y;

    mappa[y - 1][x - 1] = 'X';
    mappa[y][x - 1] = 'X';
    mappa[y + 1][x - 1] = 'X';

    for(int i = 0; i < DIMENSIONE_MAPPA; i++) {
        for(int j = 0; j < DIMENSIONE_MAPPA; j++) {
            cout << mappa[i][j] << ' '; // inizializzazione mappa
        }
        cout << endl;
    }
    cout << endl;
}

// nave gigante = 4;
void naveGigante(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]) {
    int x;
    int y;
    
    cout << "inserisci le condinate per inserire la nave 4x1" << endl;
    cin >> x >> y;

    mappa[y - 1][x - 1] = 'X';
    mappa[y][x - 1] = 'X';
    mappa[y + 1][x - 1] = 'X';
    mappa[y + 2][x - 2] = 'X';

    for(int i = 0; i < DIMENSIONE_MAPPA; i++) {
        for(int j = 0; j < DIMENSIONE_MAPPA; j++) {
            cout << mappa[i][j] << ' '; // inizializzazione mappa
        }
        cout << endl;
    }
    cout << endl;
}


void navePiccolaCompter(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]) {
    
    int x = rand() % 10;
    int y = rand() % 10; 

    mappa[y - 1][x - 1] = 'X';
}

void naveMediaComputer(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]) {
    
    int x = rand() % 10;
    int y = rand() % 10;

    mappa[y - 1][x - 1] = 'X';
    mappa[y][x - 1] = 'X';
}
void naveGrandeComputer(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]) {

    int x = rand() % 10;
    int y = rand() % 10;

    mappa[y - 1][x - 1] = 'X';
    mappa[y][x - 1] = 'X';
    mappa[y + 1][x - 1] = 'X';
}
void naveGiganteComputer(char mappa[DIMENSIONE_MAPPA][DIMENSIONE_MAPPA]) {
    
    int x = rand() % 10;
    int y = rand() % 10;

    mappa[y - 1][x - 1] = 'X';
    mappa[y][x - 1] = 'X';
    mappa[y + 1][x - 1] = 'X';
    mappa[y + 2][x - 2] = 'X';
}