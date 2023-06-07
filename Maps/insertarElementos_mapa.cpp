#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, double> empresa;
    map<int, double> oficina;
    map<int, double>::iterator ite;

    empresa.insert(make_pair(1, 650));    // Inserto el trabajador 1
    empresa.insert(make_pair(3, 620));    // Inserto el trabajador 2

    oficina.insert(make_pair(2, 520.50));
    oficina.insert(make_pair(4, 575));

    cout << "Los trabajadores de oficina son" << endl;

    for (map<int, double>::iterator it = oficina.begin(); it != oficina.end(); ++it) {
        cout << it->first << ' ' << it->second << endl;
    }

    // Añadir los trabajadores de Oficina a Empresa

    empresa.insert(oficina.begin(), oficina.end());

    cout << "Los trabajadores de Empresa son" << endl;

    for (map<int, double>::iterator it = empresa.begin(); it != empresa.end(); ++it) {
        cout << it->first << ' ' << it->second << endl;
    }

    return 0;
}
