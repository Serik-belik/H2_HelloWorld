#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char chrAnswer;
    char chrHello[] = "Hello World!";
    string arrColors[] = { "\033[31m", "\033[32m", "\033[33m", "\033[34m", "\033[35m", "\033[36m", "\033[37m" }; // May add more
    srand(time(NULL));

    do {
        for (int i = 0; i < (end(chrHello) - begin(chrHello)); i++) {
            cout << arrColors[rand() % (end(arrColors) - begin(arrColors))] << chrHello[i];
        }

        cout << endl << "\33[37m"; // Back to White
        cout << "Once more? Y/N: ";
        cin >> chrAnswer;
    } while (chrAnswer == 'Y');

    return 0;
}
