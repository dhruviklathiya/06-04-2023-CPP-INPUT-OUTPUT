#include<iostream>
using namespace std;
class car{
    public:
    int car_id;
    char car_company_name[20];
    char car_color[20];
    char car_model[20];
    int car_release_year;
};
int main (){
    car car1,car2,car3,car4;
    car1.car_id,car1.car_company_name,car1.car_color,car1.car_model,car1.car_release_year;
    car2.car_id,car2.car_company_name,car2.car_color,car2.car_model,car2.car_release_year;
    car3.car_id,car3.car_company_name,car3.car_color,car3.car_model,car3.car_release_year;
    car4.car_id,car4.car_company_name,car4.car_color,car4.car_model,car4.car_release_year;
    cout<<"Enter 1st Car ID: ";
    cin>>car1.car_id;
    cout<<"Enter 1st Car company name: ";
    cin>>car1.car_company_name;
    cout<<"Enter 1st Car color: ";
    cin>>car1.car_color;
    cout<<"Enter 1st Car model: ";
    cin>>car1.car_model;
    cout<<"Enter 1st Car release year: ";
    cin>>car1.car_release_year;

    cout<<"Enter 2nd Car ID: ";
    cin>>car2.car_id;
    cout<<"Enter 2nd Car company name: ";
    cin>>car2.car_company_name;
    cout<<"Enter 2nd Car color: ";
    cin>>car2.car_color;
    cout<<"Enter 2nd Car model: ";
    cin>>car2.car_model;
    cout<<"Enter 2nd Car release year: ";
    cin>>car2.car_release_year;

    cout<<"Enter 3rd Car ID: ";
    cin>>car3.car_id;
    cout<<"Enter 3rd Car company name: ";
    cin>>car3.car_company_name;
    cout<<"Enter 3rd Car color: ";
    cin>>car3.car_color;
    cout<<"Enter 3rd Car model: ";
    cin>>car3.car_model;
    cout<<"Enter 3rd Car release year: ";
    cin>>car3.car_release_year;

    cout<<"Enter 4th Car ID: ";
    cin>>car4.car_id;
    cout<<"Enter 4th Car company name: ";
    cin>>car4.car_company_name;
    cout<<"Enter 4th Car color: ";
    cin>>car4.car_color;
    cout<<"Enter 4th Car model: ";
    cin>>car4.car_model;
    cout<<"Enter 4th Car release year: ";
    cin>>car4.car_release_year;

    cout<<"ID of 1st car is:"<<car1.car_id<<endl;
    cout<<"Company name of 1st car is:"<<car1.car_company_name<<endl;
    cout<<"Color of 1st car is:"<<car1.car_color<<endl;
    cout<<"Model of 1st car is:"<<car1.car_model<<endl;
    cout<<"Release year of 1st car is:"<<car1.car_release_year<<endl;

    cout<<"ID of 2nd car is:"<<car2.car_id<<endl;
    cout<<"Company name of 2nd car is:"<<car2.car_company_name<<endl;
    cout<<"Color of 2nd car is:"<<car2.car_color<<endl;
    cout<<"Model of 2nd car is:"<<car2.car_model<<endl;
    cout<<"Release year of 2nd car is:"<<car2.car_release_year<<endl;
    
    cout<<"ID of 3rd car is:"<<car3.car_id<<endl;
    cout<<"Company name of 3rd car is:"<<car3.car_company_name<<endl;
    cout<<"Color of 3rd car is:"<<car3.car_color<<endl;
    cout<<"Model of 3rd car is:"<<car3.car_model<<endl;
    cout<<"Release year of 3rd car is:"<<car3.car_release_year<<endl;
    
    cout<<"ID of 4th car is:"<<car4.car_id<<endl;
    cout<<"Company name of 4th car is:"<<car4.car_company_name<<endl;
    cout<<"Color of 4th car is:"<<car4.car_color<<endl;
    cout<<"Model of 4th car is:"<<car4.car_model<<endl;
    cout<<"Release year of 4th car is:"<<car4.car_release_year<<endl;
    return 0;
}
