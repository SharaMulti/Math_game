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

    if (answer == correct) { //1111
        cout << "The concept instead turns into a key, that lodges itself into your inner memory, as you turn around, looking for the next concept\n";
    } else {
        cout << "Your memory begins to fry itself as you can grasp the concept, you burn into nothing but cinders, and join the lots of lost souls in hell\n";
        return 0;
    }

    cout << "\n";
    cout << "As the screams of the damned became a normal occurence for you, you bump into the next concept, limits, you knew yours, and trust me, it was nearing, you begin to wonder how is this even math anymore, how can this be  requirement for schools to teach this to people, its nit like they are gonna use it anymore, you snap back to reality, and get yourself ready to answer\n";
    cout << "\n";
    cout << "The question writes intself in your circuits, engraving in you as if burning coals, you fall into your knees as you endure the pain and try to answer the question given to you\n";
    cout << "\n";
    cout << "Evaluate the following limit:\n";
    cout << "\n";
    cout << "lim (x -> 2) of (x^2 - 4) / (x - 2)\n";
    cin >> answer;

    if (answer == "4") {
        cout << "While your insides tried their best to hold you up, you quickly shout the answer, the burning stops instantly, while the pain lingers in you for a while linger, you take deep breaths, inhaling the sulfur around you, as you open your eyes again, a key has formed from the concept of limits, you take it, and struggling to walk, you go to the next, and final concept\n";
    } else {
        cout << "Your memory begins to fry itself as you can grasp the concept, you burn into nothing but cinders, and join the lots of lost souls in hell\n";
        return 0; 
    }
    cout << "\n";
    cout << "You keep on walking, it helps you distract your insides from that quick burning on limits, as you soon arrive in front of the next concept, or rather, inside, as the walls close around you in several spheres with lines in between to represent them interwining, several objects lie all around the floor, as the walls begin to close in, this, is a Venn diagram\n";
    cout << "\n";
    cout << "The items consist of skulls and rocks, each engraved with a burning number on them:\n";
    cout << "\n";
    cout << "The skulls had engraved the numbers 1, 2, 3, 4, 5\n";
    cout << "\n";
    cout << "While the rocks had 4, 5, 6, 7 on them\n";
    cout << "\n";
    cout << "While not told what you are supposed to do, you asume that you need to tell what numbers connect with rach other\n";
    cin >> answer;

    if (answer == "4,5") {
        cout << "As you put the pieces in the correct places, the walls quickly sink into the floor, and from the floor, a key is spat out, this one with 2 circles as its handle, cute, at least this one did not hurt you directly like the last one\n";
    } else {
        cout << "Your memory begins to fry itself as you can grasp the concept, you burn into nothing but cinders, and join the lots of lost souls in hell\n";
        return 0;
    }

    cout << "";
    cout << "You decide that it is time, your mental wounds have healed, and you make your way, to the gate\n";
    cout << "\n";
    cout << "Soon, you arrive at the gate, the keys, almost via magic, go up on their own and enter their respective locks, they all turn and click in unison, as you are allowed to enter\n";
    cout << "\n";
    cout << "You make your way upwards the stone, as you soon arrive, you see a man in french clothing of the 16XX sitting on a stone throne atop a massive pile of skulls, he is staring and admiring a skull, as he takes notice of you, and caressely throws the skull away\n";
    cout << "\n";
    cout << "-Ah, c'est celui qui a fait du grabuge avec mes pions, je t'accueille dans ton dernier combat, même une machine obsolète du futur ne pourra pas comprendre ce que je ferai une fois que je serai né de nouveau, j'ajouterai... des objets physiques à cela!, c'est génial, tu ne trouves pas?, cela voudrait dire que pour résoudre une seule équation mathématique, il faudrait faire venir des choses de l'extérieur pour même songer à y répondre!, mais bon, j'ai trop monologue, soyons justes, je te laisserai me tuer, si tu réponds, ça!-\n";
    cout << "\n";
    cout << "If you had eyebrows, theyd be raised, you... cannot understand a single word he is saying, but you assume is math related, so you ready yourself to answer his question, as the letters spawn on mid air, and in english (thank god)\n";
    cout << "\n";
    cout << "Convert 1100 (binary) to decimal. Call this result A.\n"; //12
    cout << "\n";
    cout << "2. Evaluate the limit: lim (x -> 1) of [(x^2 - 1) / (x - 1)]. Call this result B.\n"; //2
    cout << "\n";
    cout << "3.1.\n";
    cout << "Set A = {4, 8, 12}\n";
    cout << "Set B = {2, 3, 4, 5, 6}\n"; 
    cout << "\n";
    cout << "Is the sum of 1 + 2 in any of the sets?\n";
    cout << "\n";
    cout << "Enter your answer:\n"; 
    cout << "\n";
    cout << "Not in any (0)\n";
    cout << "In 1 (1)\n";
    cout << "In 2 (2)\n";
    cin >> answer;

    if (answer == "0") {
        cout << "You yell your answer, François Viète looks surprised beyond belief, as the letters dissapear, they turn into a french guillotine, you walk through the skull pile, François Viète looks as you approach, as he sets his head on the guillotine, he will fullfil his part of the deal, you grip the rope that lets go of the blade, as you wait to hear his final words\n";
        cout << "\n";
        cout << "-Ce fut un honneur de rencontrer qu'il existe des moyens fiables pour connaître les mathématiques, merci pour la leçon, comptable glorifié-\n";
        cout << "\n";
        cout << "If you knew french you'd probably shed a tear, but you can't even cry, so you don't eve care, you let go of the rope, and as soon as he gts hit by it, he turns into ash, even if hell cannot be redeemed, you can feel that the place feels more welcoming without his opression over anyone below 18, dead or alive\n";
        cout << "\n";
        cout << "You saved humanity!, THE END\n";
    return 0;
    } else {
        cout << "You came this far, and died a miserable death under the opressing algebra of a french man, you are not mad you lost, you are mad you lost to a french guy, as you draw your last breath, humanity fell into despair, and the avergae grade of students all across the world plummeted to below 50 percent of the passing grade, but that means schools get to charge more, it ruined futures for many people, and it will ruin more\n";
        cout << "\n";
        cout << "GAME OVER";
        return 0;
    }
    return 0;
}