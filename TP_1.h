#include <iostream>
using namespace std;

class Date {                  
public:                       
	Date(int year, int month, int day); 
    int getYear();
	int getMonth();           
	int getDay();
    bool is_valid();                     
private:                      
	int m_month;              
	int m_day;
    int m_year;				  
};