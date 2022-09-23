#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;

struct mokinys{
    string vardas;
    string pavarde;
    int egz;
    vector<int> nd;
    int visindrez;
};

void skaitymas(mokinys Mas[], int n)
{
    int nd1;
    for(int i=0; i<n; i++)
    {
        cout << "Iveskite mokinio varda: ";
        cin >> Mas[i].vardas;
        cout << "Iveskite mokinio pavarde: ";
        cin >> Mas[i].pavarde;
        cout << "Iveskite mokinio egzamino bala: ";
        cin >> Mas[i].egz;
        while(true)
        {
            cout << "Iveskite namu darbu pazymi, jei daugiau pazimiu nera, iveskite 0: ";
            cin >> nd1;
            if(nd1==0)
                break;
            Mas[i].nd.push_back(nd1);
        }
    }
}

double vidurkis(double nd, int m)
{
    double vid;
    vid = nd/m;
    return vid;
}

int sum(mokinys Mas[], int n){
    int visindrez = 0;
    for(int i=0; i<n; i++){
        visindrez += Mas[i].visindrez;
    }
    return visindrez;
}

double mediana(mokinys Mas[], int n){
    for(int i=0; i<n; i++) {
        double mediana;
        if (Mas[i].visindrez % 2 == 0)
        return mediana;
    }
}

void isvedimas(mokinys Mas[], int n)
{
    cout << left << setw(12) << "Vardas" << left << setw(12) << "Pavarde" << left << setw(10) << "Vidurkis" << left << setw(10) << "Mediana" << endl;
    for(int p=0; p<43; p++)
        cout << "-";
    cout << endl;
    for(int i=0; i<n; i++)
    {
        sort(Mas[i].nd.begin(), Mas[i].nd.end());
        cout << left << setw(12) << Mas[i].vardas << left << setw(12) << Mas[i].pavarde << left << setw(10) << vidurkis << left << setw(10) << mediana << endl;
/*
        for(int j=0; j< Mas[i].nd.size(); j++)
        {
            cout << Mas[i].nd[j] << ", ";
        }
        */
    }
}


int main()
{
    int n;
    mokinys Mok[10];
    cout << "Iveskite mokiniu skaiciu: ";
    cin >> n;
    skaitymas(Mok, n);
    isvedimas(Mok, n);
    return 0;
}
