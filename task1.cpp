// We don't have to write std:: everytime
#include<iostream>
using namespace std;
class hotel{
    public:
    int hotel_id;  
    char hotel_name[50];  
    int hotel_staff;  
};

int main (){
    hotel hotel1;
    hotel hotel2;
    hotel hotel3;
    hotel1.hotel_id,hotel2.hotel_id,hotel3.hotel_id;
    hotel1.hotel_name,hotel2.hotel_name,hotel3.hotel_name;
    hotel1.hotel_staff,hotel2.hotel_staff,hotel3.hotel_staff;
    cout<<"Enter hotel1's id:";
    cin>>hotel1.hotel_id;
    cout<<"Enter hotel1's name:";
    cin>>hotel1.hotel_name;
    cout<<"Enter hotel1's total staff in number:";
    cin>>hotel1.hotel_staff;
    
    cout<<"Enter hotel2's id:";
    cin>>hotel2.hotel_id;
    cout<<"Enter hotel2's name:";
    cin>>hotel2.hotel_name;
    cout<<"Enter hotel2's total staff in number:";
    cin>>hotel2.hotel_staff;
    
    cout<<"Enter hotel3's id:";
    cin>>hotel3.hotel_id;
    cout<<"Enter hotel3's name:";
    cin>>hotel3.hotel_name;
    cout<<"Enter hotel3's total staff in number:";
    cin>>hotel3.hotel_staff;
    
    cout<<"Hotel's name: "<<hotel1.hotel_name<<endl;
    cout<<"Hotel's id: "<<hotel1.hotel_id<<endl;
    cout<<"Total staff in hotel is: "<<hotel1.hotel_staff<<endl;
    cout<<"Hotel's name: "<<hotel2.hotel_name<<endl;
    cout<<"Hotel's id: "<<hotel2.hotel_id<<endl;
    cout<<"Total staff in hotel is: "<<hotel2.hotel_staff<<endl;
    cout<<"Hotel's name: "<<hotel3.hotel_name<<endl;
    cout<<"Hotel's id: "<<hotel3.hotel_id<<endl;
    cout<<"Total staff in hotel is: "<<hotel3.hotel_staff<<endl;

    return 0;
}
