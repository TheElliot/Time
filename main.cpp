#include <iostream>
#include <ctime>

using namespace std;

int main() {
   // current date/time based on current system
   time_t start = time(0);
   cout << "start: " << start << endl;
   for (int i=0; i < 100000; i++ ) {
     cout << i << endl;
   }
    time_t end = time(0);
   cout << "end: " << end << endl;
   int elapsed = end - start;
   cout << "elapsed: " << elapsed << endl;
}