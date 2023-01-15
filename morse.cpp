#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>
std::unordered_map<std::string, char> morse_code = {
    {'.-', 'A'},
    {'-...', 'B'},
    {'-.-.', 'C'},
    {'-..', 'D'},
    {'.', 'E'},
    {'..-.', 'F'},
    {'--.', 'G'},
    {'....', 'H'},
    {'..', 'I'},
    {'.---', 'J'},
    {'-.-', 'K'},
    {'.-..', 'L'},
    {'--', 'M'},
    {'-.', 'N'},
    {'---', 'O'},
    {'.--.', 'P'},
    {'--.-', 'Q'},
    {'.-.', 'R'},
    {'...', 'S'},
    {'-', 'T'},
    {'..-', 'U'},
    {'...-', 'V'},
    {'.--', 'W'},
    {'-..-', 'X'},
    {'-.--', 'Y'},
    {'--..', 'Z'},
    {'-----', '0'},
    {'.----', '1'},
    {'..---', '2'},
    {'...--', '3'},
    {'....-', '4'},
    {'.....', '5'},
    {'-....', '6'},
    {'--...', '7'},
    {'---..', '8'},
    {'----.', '9'},
    {'/',' '}
};

std::unordered_map<std::string, char> morse_code = {
    {'A', '.-'},
    {'B', '-...'},
    {'C', '-.-.'},
    {'D', '-..'},
    {'E', '.'},
    {'F', '..-.'},
    {'G', '--.'},
    {'H', '....'},
    {'I', '-.-'},
    {'J', '.---'},
    {'K', '-.-'},
    {'L', '.-..'},
    {'M', '--'},
    {'N', '-.'},
    {'O', '---'},
    {'P', '.--.'},
    {'Q', '--.-'},
    {'R', '.-.'},
    {'S', '...'},
    {'T', '-'},
    {'U', '..-'},
    {'V', '...-'},
    {'W', '.--'},
    {'X', '-..-'},
    {'Y', '-.--'},
    {'Z', '--..'},
    {'0', '-----'},
    {'1', '.----'},
    {'2', '..---'},
    {'3', '...--'},
    {'4', '....-'},
    {'5', '.....'},
    {'6', '-....'},
    {'7', '--...'},
    {'8', '---..'},
    {'9', '----.'},
    {' ','/'}
};
std::string morse_ecrit_vers_francais(std::string morse_message) {
    std::string message_francais = "";
    std::string current_char = "";

    for (const char& c : morse_message) {
        if (c == ' ') {
            message_francais += morse_code[current_char];
            current_char = "";
        }
        else {
            current_char += c;
        }
    }
    message_francais += morse_code[current_char];
    return message_francais;
}

std::string francais_vers_morse_ecrit(std::string message){
    std::string morse_message;
    for (const char& c : message) {
        morse_message+=morse_code[c];
    }
    return morse_message;   
}


std::string morse_oral_vers_ecrit(fstream filename);
std::string morse_oral_vers_ecrit(std::string message);

std::string encoder(fstream filename, fstream &resultat_audio);
std::string encoder(std::string message, fstream &resultat_audio);    

std::string morse_ecrit_vers_oral(std::string);
std::string decoder(fstream message_morse);

int main() {
    std::cout <<'E Pour encoder, D pour decoder'<<std::endl;
    char x;
    std::cin >> x;
    if (x == 'E'){
        char c;
        std::cout << 'F si Fichier, T si texte'<<std::endl;
        std::cin >> c;
        if (c=='F'){
            std::string filename;
            std::cout << 'Saisir le nom du fichier'<<std::endl;
            cin >> filename;
            fstream resultat=fopen('resultat_audio','w');
            //encoder(filename,&resultat);
            //return resultat
        }
        if (c=='T'){
            std::string message;
            std::cout << 'Saisir le message'<<std::endl;
            cin >> filename;
            fstream resultat=fopen('resultat_audio','w')
            //encoder(message,&resultat);
            //return resultat
        }
    }
    if (x=='D'){
        std::string audio_filename;
        std::cout << 'Saisir le nom du fichier audio a decoder'<<std::endl;
        cin >> filename;
        myfile=fopen(filename,'r');
        return ( std::string decoder(myfile));


    }


    }



