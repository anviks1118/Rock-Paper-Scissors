#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void rock() {
    cout << "Rock:" << endl;  
    cout << "     ------- " << endl;
    cout << "   |         |    " << endl;
    cout << "  |           |" << endl;
    cout << " |           |" << endl;
    cout << "  |         |" << endl;
    cout << "    -------" << endl;  
}

void paper() {
    cout << "Paper:" << endl;
    cout << "    --------" << endl;
    cout << "  __|       |" << endl;
    cout << "  |         |" << endl;
    cout << "  |         |" << endl;
    cout << "  |         |" << endl;
    cout << "  ----------" << endl;
}

void scissors() {
    cout << "    _    _" << endl;
    cout << "   (_)  / )" << endl;
    cout << "     | (_/ " << endl;
    cout << "    _+/  " << endl;
    cout << "   //|\ " << endl;
    cout << "  // | )" << endl;
    cout << " (/  |/  " << endl;
}

int main() {
    rock();
    paper();
    scissors();

    return 0;
}