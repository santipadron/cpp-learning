//forward declarations
int readNumber();
void writeAnswer(int number);

int main() {
  int x { readNumber() };
  int y { readNumber() };
  writeAnswer(x + y);
  
  return 0;
}

