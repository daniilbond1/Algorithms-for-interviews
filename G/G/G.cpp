#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector <vector <int>> city;
    vector <vector <int>> matrix;
    int b = 0;
    int c = 0;
    int a = 0;
    int distance = 0;
    int start = 0;
    int finish = 0;

    int distance_city = 0;
    int max_distance_city = 0;
    int max_distance_city_number = 0;
    vector <int> location;
    vector <int> baned;
    bool stop = false;

        cin >> b;

        for (int k = 0;k < b;k++) {
            cin >> c>> a;
            city.push_back({ c,a });
        }

        cin >> distance;
         cin >>start>>finish;

         location.push_back(start);

        
         while (location[location.size() - 1] != finish) {

             for (int i = 0;i < city.size();i++) {

                 for (int m = 0;m < baned.size();m++) {
                     if (i == baned[m]) {
                         stop = true;
                     }
                 }

                 if (stop == false) {
                     distance_city = abs(city[location[location.size() - 1]][0] - city[i][0]) + abs(city[location[location.size() - 1]][1] - city[i][1]);

                     if (distance_city > max_distance_city && distance_city < distance) {
                         max_distance_city = distance_city;
                         max_distance_city_number = i;
                     }
                 }

                 stop = false;
             }

             if (max_distance_city == 0) {
                 baned.push_back(location[location.size() - 1]);
                 location.pop_back();
             }
             else {
                 location.push_back(max_distance_city_number);
                 max_distance_city = 0;
                 baned.clear();
             }

         }

         cout << location.size() - 1;
    
 
}
