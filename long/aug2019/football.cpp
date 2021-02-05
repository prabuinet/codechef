#include <iostream>

using namespace std;

int football() {
  int N;
  cin >> N;
  int A[150], B[150];
  for(int i = 0; i < N; i++)
    cin >> A[i];
  for(int i = 0; i < N; i++)
    cin >> B[i];

  int max_points = 0;
  for(int i = 0; i < N; i++) {
    int points = A[i] * 20 - B[i] * 10;
    if(points < 0)
      points = 0;
    if(points > max_points)
      max_points = points;
  }

  cout << max_points << endl;
}

int main() {
  int T;
  cin >> T;
  while(T--)
    football();
  return 0;
}
