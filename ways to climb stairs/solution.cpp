#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int number_of_stairs;
  cin >> number_of_stairs;
  int results = 0;
  if(number_of_stairs == 1){
    results = 1;
    cout << results << endl;
  } else if(number_of_stairs == 2){
    cout << results << endl;
    results = 2;
  } else{
    int ways[100] = {1, 2};
    for(int i = 3; i <= number_of_stairs; i++){
      ways[i] = ways[i-3] + ways[i-2];
      results += ways[i-3] + ways[i-2];
    } cout << results << endl;
  }
}
