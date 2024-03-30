// Dart program to generate Fibonacci series

// Function to generate Fibonacci series
List<int> fibonacciSeries(int n) {
  List<int> series = [];
  int a = 0, b = 1;
  series.add(a);
  series.add(b);
  for (int i = 2; i < n; i++) {
    int next = a + b;
    series.add(next);
    a = b;
    b = next;
  }
  return series;
}

void main() {
  int n = 10; // Change the value of n to generate desired number of Fibonacci numbers
  List<int> series = fibonacciSeries(n);
  print("Fibonacci series of $n numbers:");
  print(series);
}
