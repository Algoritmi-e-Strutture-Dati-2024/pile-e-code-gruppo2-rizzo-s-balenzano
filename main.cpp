int main() {
    // Test della classe Pila
    Pila pila;
    pila.push(10);
    pila.push(20);
    std::cout << "Top della pila: " << pila.top() << std::endl;
    std::cout << "Pop dalla pila: " << pila.pop() << std::endl;

    // Test della classe Coda
    Coda coda;
    coda.enqueue(30);
    coda.enqueue(40);
    std::cout << "Front della coda: " << coda.front() << std::endl;
    std::cout << "Dequeue dalla coda: " << coda.dequeue() << std::endl;

    // Test della funzione valuta_polacca
    Coda post;
    post.enqueue(3);  // Operando
    post.enqueue(4);  // Operando
    post.enqueue(-1); // Operatore +
    std::cout << "Risultato notazione polacca: " << valuta_polacca(post) << std::endl;

    return 0;
}
