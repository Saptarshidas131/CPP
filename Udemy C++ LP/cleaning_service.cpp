/*
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days
*/

#include<iostream>

using namespace std;

int main()
{
    // constants
    const float charge_small_room {25.00};
    const float charge_large_room {35.00};
    const float sales_tax {0.06};
    const int days_valid {30};


    //variables
    int small_rooms {0}, large_rooms {0};
    float cost, tax;

    // input
    cout<<"Welcome to Frank's Room Cleaning Service"<<endl;
    cout<<"How many small rooms do you want to be cleaned? "<<endl;
    cin>>small_rooms;
    cout<<"How many large rooms do you want to be cleaned? "<<endl;
    cin>>large_rooms;

    // estimates
    cout<<"Estimate for carpet cleaning service"<<endl;
    cout<<"Number of small rooms: "<<small_rooms<<endl;
    cout<<"Number of large rooms: "<<large_rooms<<endl;
    cout<<"Price per small room: $"<<charge_small_room<<endl;
    cout<<"Price per large room: $"<<charge_large_room<<endl;
    cost = (small_rooms * charge_small_room) + (large_rooms * charge_large_room);
    cout<<"Cost $:"<<cost<<endl;
    tax = cost * sales_tax;
    cout<<"Tax: $"<<tax<<endl;
    cout<<"======================================"<<endl;
    cout<<"Total  estimate: $"<<cost+tax<<endl;
    cout<<"This estimate is valid for "<<days_valid<<" days"<<endl;

    return 0;
}

