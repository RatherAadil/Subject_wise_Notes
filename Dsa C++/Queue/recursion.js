function A(n) {
  if (n > 0) {
    A(n - 1);
    console.log(n);
    A(n - 1);
  }
}

A(2);
