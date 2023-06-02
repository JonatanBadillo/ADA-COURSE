#include <iostream>
#include <vector>
using namespace std;

int top(const vector<int>& v, int inicio, int final) {
    // CASO BASE: Cuando el vector tiene tamaño <=2
    if (inicio + 1 >= final) {
        return max(v[inicio], v[final]);
    } else {
        int medio = (inicio + final) / 2; // elemento del medio de nuestro arreglo
        if (v[medio] < v[medio + 1]) { // el máximo está en la parte derecha del vector
            return top(v, medio + 1, final);
        }
        if (v[medio - 1] > v[medio]) { // el máximo está en la parte izquierda del vector
            return top(v, inicio, medio - 1);
        } else {
            // v[medio] es el máximo ya que v[medio] > v[medio+1] y v[medio] > v[medio-1]
            return v[medio];
        }
    }
}

int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(9);
    v.push_back(6);
    v.push_back(4);
    v.push_back(1);

    int inicio = 0;
    int final = v.size() - 1;
    int maximo = top(v, inicio, final);
    cout << "El máximo es: " << maximo << endl;

    return 0;
}