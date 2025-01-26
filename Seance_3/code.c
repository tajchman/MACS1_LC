void g(int b) {
 a = a * b;
}

int a;

void f(int c) {
 a = a + c;
}

int main() {
 f(2); g(5);
 return 0;
}

