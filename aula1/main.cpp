#include <iostream>
#include <string>

using namespace std;

// & = Endereçamento
// &<var> = Referência
// *<var> = Ponteiro

// ptr => Ponteiro
// ref => Referência
// const => Constância

void mean(float *scores, const int size, float &result)
{
    for (int i = 0; i < size; i++)
        result = scores[i] + result;
    result = result / size;
}

int main()
{
    string name;
    int size;

    float *ptr_scores = nullptr;

    float result = 0;

    cout << "Escreva seu nome: ";
    getline(cin, name);
    cout << "Quantas provas foram feitas?\n";
    cin >> size;
    ptr_scores = new float[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Qual foi a nota da prova " << i + 1 << "?\n";
        cin >> ptr_scores[i];
    }

    mean(ptr_scores, size, result);
    cout << "Sua media foi: " << result << "\n";

    delete[] ptr_scores;

    return 0;
}