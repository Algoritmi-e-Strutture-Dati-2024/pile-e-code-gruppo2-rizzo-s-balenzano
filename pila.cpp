#include <iostream>

class Pila {
private:
    int arr[5];  // Array che rappresenta la pila
    int topIndex; // Indice dell'elemento in cima alla pila

public:
    // Costruttore
    Pila() : topIndex(-1) {} // La pila è vuota all'inizio

    
    void push(int elem) {
        if (topIndex < 5) {  // Controlla se la pila non è piena
            topIndex++;
            arr[topIndex] = elem;
            std::cout << "Elemento " << elem << " aggiunto alla pila." << std::endl;
        } else {
            std::cout << "Errore: pila piena!" << std::endl;
        }
    }

   
    int pop() {
        if (topIndex >= 0) {  // Controlla se la pila non è vuota
            int val = arr[topIndex];
            topIndex--;
            return val;
        } else {
            std::cout << "Errore: pila vuota!" << std::endl;
            return -1; // Indica errore
        }
    }

 
    int top() {
        if (topIndex >= 0) {
            return arr[topIndex];
        } else {
            std::cout << "Errore: pila vuota!" << std::endl;
            return -1; // Indica errore
        }
    }

  
    bool isEmpty() {
        return topIndex == -1;
    }
    
    
      int size() const {
        return topIndex + 1;
    }
};

int main() {
    Pila p;  // Crea una pila vuota
  
    p.push(95);
    p.push(60);
    p.push(50);

    // Mostra l'elemento in cima
    std::cout << "Elemento in cima alla pila: " << p.top() << std::endl;  

    // Rimuove l'elemento in cima
    std::cout << "Elemento rimosso: " << p.pop() << std::endl;  

    
    return 0;
}








