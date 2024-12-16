#include <iostream>
#include <ctime> 
using namespace std; 
int main() {
    int utcoffsethours;
    string answer; 
    double diff_t; 

    //problem 1
    time_t now = time(nullptr);
    cout << "current time: " << ctime(&now);

    //problem 2
    cout << "to input a time zone offset from UTC (in hours)." << endl;
    cin >> utcoffsethours;

    now += utcoffsethours * 3600;
    tm* timezonetime = gmtime(&now);
    cout << "current time with that offset: " << asctime(timezonetime);

    //problem 2
    cout << "what does cis stand for?" << endl; 
    time_t start = time(nullptr);
    cin >> answer;
    time_t end = time(nullptr);

    diff_t = difftime(end, start);
    cout <<"it took you " << diff_t << " seconds:" << endl;

 
}