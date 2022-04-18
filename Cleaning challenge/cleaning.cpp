#include <iostream>

using namespace std;

int main() {
    cout<<"=========================================="<<endl;
    cout<<"Welcome to Tarik's Carpet Cleaning service"<<endl;

    const double price_small_room =25.0;
    const double price_large_room =35.0;
    const int estimate_valid =30;
    const double tax_rate =0.06;

    double number_small_rooms =0;
    double number_large_rooms =0;

    cout << "How many small rooms?" <<endl;
    cin >> number_small_rooms;
    cout << "How many large rooms?" << endl;
    cin >> number_large_rooms;

    double total_small =(number_small_rooms*price_small_room)+(number_small_rooms*price_small_room*tax_rate);
    double total_large =(number_large_rooms*price_large_room)+(number_large_rooms*price_large_room*tax_rate);
    double total_cost =(number_small_rooms*price_small_room)+(number_large_rooms*price_large_room);
    double all_total = total_small+total_large;


    cout<<"Estimate for carpet cleaning service"<<endl;
    cout<<"Numbers of small rooms: " << number_small_rooms <<endl;
    cout<<"Numbers of large rooms: " << number_large_rooms <<endl;
    cout<<"Price per small room: " << price_small_room <<endl;
    cout<<"Price per large room: " << price_large_room<< endl;
    cout<<"Cost : " << total_cost<<endl;
    cout<<"Tax : " <<(all_total*tax_rate)<<endl;
    cout<<"======================================"<<endl;
    cout<<"Total estimate :"<<all_total<<endl;
    cout<<"This estimate is valid for "<<estimate_valid<<" days"<<endl;

    return 0;
}