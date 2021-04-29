#include <iostream>

int main(int argc, char** argv) {
	// Début du code
    int entiers[] = {0, 5, 10, 15, 20};
    int* pointeur = entiers;

    //*(pointeur+0) = *(pointeur+0) + 2;
    //*(pointeur+1) = *(pointeur+1) + 2;

    for(int i=0 ; i<5 ; i++) {
        *(pointeur+i) = *(pointeur+i) + 2;
    }

    for (int i=0 ; i<5 ; i++) {
        std::cout << *(pointeur+i) << " ";
    }
}
