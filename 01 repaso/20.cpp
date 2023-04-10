#include <iostream>
#include <cctype>
using namespace std;

bool es_vocal(char ch);

int main(){
    char letra;
    cout << "Ingrese una letra\n";
    cin >> letra;
	if (es_vocal(letra))
		cout << "Es Vocal"<< endl;
	else cout << "NO Es Vocal"<< endl;
    return 0;
}

bool es_vocal(char ch){
	// convert 'A' to lowercase
	ch = tolower( ch);
    if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
        return true;
    else
        return false;
}
