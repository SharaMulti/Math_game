#include <iostream>
#include <bitset>   // Para binario
#include <cmath>    // Para funciones matemáticas
using namespace std;

int main() {

    cout << "You are the last of your kind, a kind of antique calculators that were thrown out by math teachers who understand that the future holds withing calculators that don't display syntax error with the lack of the understandment of the subject, after some testing on your body, you gained a soul, you decided to use math to your favor, and break through the laws of physic to open a portal to hell, to kill the man that made your entire life loose its meaning\n";
    cout << "\n";
    cout << "François Viète (The guy who added letters to math)\n";
    cout << "\n";
    cout << "You don't do this only for you, you do it for all the kids whose lifes he has ruined with impossible expectations of memory requirements for all kids and young teens, you set out to hell\n";
    cout << "\n";
    cout << "You walk to a gate, and you are greeted by 3 floating concepts, as concerning as that should be, you understand their porpuse, to guard your target, it seems that Satan has given this man high esteem, higher than some of the worst people to have ever lived, but there is the guy who invented homework so you think how bad could this guy really be\n";
    cout << "\n";
    cout << "The first one of the gatekeepers is none others than binary, which is ironic considering how this game is made and how you are made, and, if we are simluation, how the entire world is made, too much philosophy, you are presented with the question\n";
    cout << "\n";
    cout << "What is 1010 + 0101 in binary?\n";
    string answer;
    cin  >> answer;

     int sum = 10 + 5;  //  1010 = 10, y 0101 = 5

    // Convertimos la suma a binario
    string correct = bitset<8>(sum).to_string();

    // Quitamos los ceros a la izquierda automáticamente
    correct.erase(0, correct.find_first_not_of('0'));

    if (answer == correct) {
        cout << "Correct!\n";
    } else {
        cout << "Wrong. The correct answer is: " << correct << "\n";
    }

    return 0;
}