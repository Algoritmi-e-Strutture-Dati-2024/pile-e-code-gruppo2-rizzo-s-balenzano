class Coda {
private:
    int arr[5];  // Array per memorizzare gli elementi della coda
    int primo;   // Indice del primo elemento 
    int ultimo;    // Indice dell'ultimo elemento 

public:
    // Costruttore
    Coda() : primo(0), ultimo(0) {}

    // Metodo per aggiungere un elemento alla coda
    void enqueue(int elem) {
        if (ultimo < 5) {  // Verifica se la coda non è piena
            arr[ultimo] = elem;
            ultimo++;
            std::cout << "Elemento " << elem << " aggiunto alla coda." << std::endl;
        } else {
            std::cout << "Errore: coda piena!" << std::endl;
        }
    }

    // Metodo per rimuovere un elemento dalla coda
    int dequeue() {
        if (primo < ultimo) {  // Verifica se la coda non è vuota
            int val = arr[primo];
            primo++;
            return val;
        } else {
            std::cout << "Errore: coda vuota!" << std::endl;
            return -1; // Indica errore
        }
    }

    // Metodo per ottenere l'elemento in testa alla coda senza rimuoverlo
    int front() {
        if (primo < ultimo) {
            return arr[primo];
        } else {
            std::cout << "Errore: coda vuota!" << std::endl;
            return -1; // Indica errore
        }
    }

    // Metodo per verificare se la coda è vuota
    bool isEmpty() {
        return primo == ultimo;
    }
    
     int size() const {
        return ultimo - primo ;
    }
};

int main() {
    Coda c;  // Crea una coda vuota

    // Aggiungiamo degli elementi
    c.enqueue(10);
    c.enqueue(20);
    c.enqueue(30);

    // Mostra l'elemento in testa alla coda
    std::cout << "Elemento in testa alla coda: " << c.front() << std::endl;  

    // Aggiungiamo un altro elemento
    c.enqueue(40);

    // Proviamo a rimuovere un elemento da una coda vuota
    std::cout << "Elemento rimosso: " << c.dequeue() << std::endl;  // Errore: coda vuota!
    
    // Elemento aggiornato in testa alla coda
    std::cout << "Elemento in testa alla coda: " << c.front() << std::endl;
    return 0;
}



















