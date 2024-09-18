#include "Patient.h"

Patient::Patient(std::string surname, std::string name, std::string padtonomgc, std::chrono::year_month_day bornDate){
    _name = name;
    _surname = surname;
    _padtonomgc = padtonomgc;
    _bornDate = bornDate;
    DefineGender();
}

void Patient::DefineGender(){
    std::string last = _padtonomgc.substr(_padtonomgc.size()-3);
    if(last == "вич"){
        _gender = "man";
    }
    else if( last == "вна"){
        _gender = "woman";
    }
    else{
        _gender = "biboba";
    }
}