// We don't have to write std:: everytime
#include<iostream>
using namespace std;
class hotel{
    // Private:
    // int hotel_id;  
    // char hotel_name[50];  
    // int hotel_staff;
    public:
    int hotel_id;  
    char hotel_name[50];  
    int hotel_staff;  
};
int main (){
    hotel hotel1;
    hotel1.hotel_id,hotel1.hotel_name,hotel1.hotel_staff;
    cout<<"Enter hotel1's id:";
    cin>>hotel1.hotel_id;
    cout<<"Enter hotel1's name:";
    cin>>hotel1.hotel_name;
    cout<<"Enter hotel1's total staff in number:";
    cin>>hotel1.hotel_staff;
    cout<<"Hotel's name: "<<hotel1.hotel_name<<endl;
    cout<<"Hotel's id: "<<hotel1.hotel_id<<endl;
    cout<<"Total staff in hotel is: "<<hotel1.hotel_staff<<endl;
    return 0;
}
