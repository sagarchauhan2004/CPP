// variable and data types
#include <iostream>
using namespace std;

int main()
{

    int elephant_count; // Initializes to one

    int lion_count{}; // initalizes to zero

    int dog_count{10}; //  Initializes to 10

    int cat_count{5}; // initializes to 15

    // can use espression as initializer
    int domestic_animals{dog_count + cat_count};

    // int new_number{doesnt_exist}

    // int narrowing_coonversation{2.9};

    cout << "elephant : " << elephant_count << endl;
    cout << "lion count : " << lion_count << endl;
    cout << "dog cound : " << dog_count << endl;
    cout << "cat count : " << cat_count << endl;
    cout << "domesticated animal count : " << domestic_animals << endl
         << endl;

    cout << "functional initialization" << endl;
    int apple_count(5);
    int orange_count(25);
    int fruit_count(9);

    int narrowing_coversation_functional(2.9);

    cout << "apple count : " << apple_count << endl;

    cout << "orange count : " << orange_count << endl;

    cout << "fruit count : " << fruit_count << endl;

    cout << "narrowing conversation :" << narrowing_coversation_functional << endl
         << endl;

    cout << "aasignment initialization" << endl
         << endl;

    int truck_count = 5;
    int car_count = 25;
    int bike_count = 9;
    int vehicle_count = bike_count + truck_count;
    int narrwoing_conversation_assignment = 2.9;

    cout << "truck count : " << truck_count << endl;

    cout << "car count : " << car_count << endl;

    cout << "bike count : " << bike_count << endl;

    cout << "vechle count : " << vehicle_count << endl;

    cout << "narrowing conversation :" << narrwoing_conversation_assignment << endl
         << endl;

    cout << "check the size with sizeof " << endl
         << endl;

    cout << "size of int : " << sizeof(int) << endl;
    cout << "size of float : " << sizeof(float) << endl;
    cout << "size of boolean : " << sizeof(bool) << endl;
    cout << "size of char : " << sizeof(char) << endl;
    cout << "size of double : " << sizeof(double) << endl;
    cout << "size of truck count : " << sizeof(truck_count) << endl;

    return 0;
}
