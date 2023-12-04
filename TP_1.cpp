#include <iostream>
using namespace std;
using namespace Date;
#include "TP_1.h"
#include <vector>

Date(int year, int month, int day){
    m_year = year;
    m_month = month;
    m_day = day;
}

int getYear(){
    return m_year;
}

int getMonth(){
    return m_month;
}

int getDay(){
    return m_day;
}

bool is_valid(){
    vector<int> Month_31 = {1, 3, 5, 7, 8, 10, 12};
    vector<int> Month_30 = {4, 6, 9, 11};
    int it1 = find(Month_30.begin(), Month_30.end(), m_month);
    int it2 = find(Month_31.begin(), Month_31.end(), m_month);
    if(m_year >= 0){
        if (m_month == 2){
            if (m_day <= 29 && m_day >= 1){
                return true;
            }
            else{
                return false;
            }
        }
        if (it2 != Month_31.end()){
           if (m_day <= 31 && m_day >= 1){
                return true;
            }
            else{
                return false;
            } 
        }
        else{
            if (m_day <= 30 && m_day >= 1){
                return true;
            }
            else{
                return false;
            }
        }


    }
    else{
        return false;
    }
}

int main(){
    cout << "Entrez l'annee : ";
    cin >> aa;
    cout << "Entrez le mois : ";
    cin >> mm;
    cout << "Entrez le jour : ";
    cin >> jj;
    Date date1(aa, mm, jj);
    cout << "le jour est: "<< date1.getDay();
    if (is_valid){
        cout << "la date est valide";
    }
    else{
        cout << "la date nest pas valide"
    }
    return 0;
}
