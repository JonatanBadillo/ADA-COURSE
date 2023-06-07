#include <iostream>
#include <map>


using namespace std;


int main() {

    // Alumno tendrá como key = ID (int)
	// Alumno tendrá como value = nota	(int)

    map<int,int>mapaAlumnoNota;

    mapaAlumnoNota[8]= 10;
    mapaAlumnoNota[6] = 4;
    mapaAlumnoNota[3] = 4;


    map<int,int>::iterator itera,itera2;  // tengo un iterador que apunta a map<int,int>
    
    itera = mapaAlumnoNota.begin(); // iterador apunta al primer elemento
    cout<< "La nota del alumno "<<itera->first << " es: "<< itera->second << endl;
    
    itera2 = --mapaAlumnoNota.end(); // iterador apunta al ultimo elemento    

    
    cout<< "La nota del alumno "<<itera2->first << " es: "<< itera2->second << endl;
    
    cout << "-------------------------------------\n";

	// Alumno tendrá como key = nombre	(string)
	// Alumno tendrá como value = nota	(int)

	map<string, int> alumnoNota; 

	alumnoNota["santiago"] = 8;	
	alumnoNota["ana"] = 4;			
	alumnoNota["carlos"] = 9;
	alumnoNota["ulises"] = 5;
	alumnoNota["adan"] = 10;

	// begin() retorna un puntero al primer elemento
	// end()   retorna un puntero al ficticio elemento que va despues del ultimo

	map<string, int>::iterator it;	// tengo un iterador que apunta a map<string,int>

	it = alumnoNota.begin();

	cout << "La nota del alumno " << it->first << " es: " << it->second << endl;
}	
