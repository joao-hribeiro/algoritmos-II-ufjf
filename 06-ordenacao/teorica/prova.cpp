#include <bits/stdc++.h>
using namespace std;

void funcao(int vet[], int n) {
  int i = 0;      // 1
  while (i < n) { // n
    cin >> n;     // n
    i++;          // n
  }
  for (int i = 0; i < n; i++) {   // n + 1
    for (int j = i; j < n; j++) { // n² + n
      cout << vet[j] % i << " ";  // n²
    }
    cout << endl; // n
  }
}
// T(n)=2n² + 6n + 2
// O(n²)
