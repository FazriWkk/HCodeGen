#include <iostream>
#include <random>

using namespace std;

int main() {
  // Seed the random number generator with a high-quality source
  random_device rd;
  mt19937 gen(rd());

  // Uniform distribution for 6-digit numbers
  uniform_int_distribution<int> dist(100000, 999999);

  // Generate and print 10 random numbers
  for (int i = 0; i < 10; i++) {
    int randomNumber = dist(gen);
    cout << randomNumber << endl << "";
  }

  cout << endl;
  system("pause");

  return 0;
}
