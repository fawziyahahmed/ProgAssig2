// FAWZIYAH AHMED

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    //I used string here to display the welcome message
    const string welcome = "*****************    Let's measure the Cheese in Cheesy way   *****************";

    //here I tried not to use hard-code for the asterisks
    cout << setw(80) << setfill('*');
    cout << "\n";
    cout << welcome << "\n";
    cout << setw(80) << setfill('*');
    cout << "\n";
    cout << endl;
 

    // declaring the given variables
    const float chz_hold = 2.76;
    const float cost_of_one = 4.12;
    const float profit_of_each = 1.45;
    int Cheese;
 
    //Promoting the user to enter the total amount of cheese produced eacg evening
    cout << "Please Enter the total number of kilograms of cheese produced: ";
    cin >> Cheese;

    //calculating the container
    const int container = Cheese / chz_hold + 1;
    
    
    //calculating the profit and cost
    const double cost = container * cost_of_one;
    const double profit = container * profit_of_each;

    //printing out the results
    //I reset the setfill so that it displays empty spaces, not asterisks
    cout << setfill(' ');
    
    cout << "The number of containers to hold the cheese is:" 
        << setw(31) << container << endl;
    cout << fixed << setprecision(2);
    cout << "The cost for producing" << (' ') << container << (' ') << "container(s) of cheese is: $"
        << setw(23) << cost << endl;
    cout << "The profit from producing" << (' ') << container << (' ') << "container(s) of cheese is: $"
        << setw(20) << profit << endl;
    return 0;

}
