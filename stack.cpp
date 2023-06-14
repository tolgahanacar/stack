#include <iostream>
#define MAX_SIZE 100

class Stack {
private:
    int stack[MAX_SIZE];
    int top;
public:
    Stack() {
        top = -1; // Yığının başlangıçta boş olduğunu belirtmek için top değerini -1 olarak ayarlıyoruz
    }

    void push(int item) {
        if (top == MAX_SIZE - 1) {
            std::cout << "Yığın dolu! Eleman eklenemiyor." << std::endl;
            return;
        }
        stack[++top] = item; // Elemanı yığına ekliyoruz ve top değerini artırıyoruz
        std::cout << "Eleman eklendi: " << item << std::endl;
    }

    void pop() {
        if (top == -1) {
            std::cout << "Yığın boş! Eleman çıkarılamıyor." << std::endl;
            return;
        }
        int item = stack[top--]; // Top elemanını çıkarıyoruz ve top değerini azaltıyoruz
        std::cout << "Eleman çıkarıldı: " << item << std::endl;
    }

    int peek() {
        if (top == -1) {
            std::cout << "Yığın boş! Peek işlemi gerçekleştirilemiyor." << std::endl;
            return -1;
        }
        return stack[top]; // Top elemanını döndürüyoruz
    }

    bool isEmpty() {
        return (top == -1); // Yığının boş olup olmadığını kontrol ediyoruz
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top eleman: " << stack.peek() << std::endl;

    stack.pop();
    stack.pop();
    stack.pop();

    if (stack.isEmpty()) {
        std::cout << "Yığın boş." << std::endl;
    } else {
        std::cout << "Yığın dolu." << std::endl;
    }

    return 0;
}
