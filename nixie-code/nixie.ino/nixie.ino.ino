
#define PinA1 9
#define PinB1 8
#define PinC1 7
#define PinD1 6

#define PinA2 5
#define PinB2 4
#define PinC2 3
#define PinD2 2

#define PinA3 0
#define PinB3 1
#define PinC3 13
#define PinD3 12

int digits [11][4] {
  {0,0,0,0},
  {0,0,0,1},
  {0,0,1,0},
  {0,0,1,1},
  {0,1,0,0},
  {0,1,0,1},
  {0,1,1,0},
  {0,1,1,1},
  {1,0,0,0},
  {1,0,0,1},
  {1,0,1,1}
};


void setup() {
  pinMode(PinA1, OUTPUT);
  pinMode(PinB1, OUTPUT);
  pinMode(PinC1, OUTPUT);
  pinMode(PinD1, OUTPUT);

  pinMode(PinA2, OUTPUT);
  pinMode(PinB2, OUTPUT);
  pinMode(PinC2, OUTPUT);
  pinMode(PinD2, OUTPUT);

  pinMode(PinA3, OUTPUT);
  pinMode(PinB3, OUTPUT);
  pinMode(PinC3, OUTPUT);
  pinMode(PinD3, OUTPUT);

  digitalWrite(PinA1, 0);
  digitalWrite(PinB1, 0);
  digitalWrite(PinC1, 0);
  digitalWrite(PinD1, 0);

  digitalWrite(PinA2, 0);
  digitalWrite(PinB2, 0);
  digitalWrite(PinC2, 0);
  digitalWrite(PinD2, 0);

  digitalWrite(PinA3, 0);
  digitalWrite(PinB3, 0);
  digitalWrite(PinC3, 0);
  digitalWrite(PinD3, 0);

}

void loop() {

  digitalWrite(PinA1, 0);
  digitalWrite(PinB1, 0);
  digitalWrite(PinC1, 0);
  digitalWrite(PinD1, 0);

  digitalWrite(PinA2, 0);
  digitalWrite(PinB2, 0);
  digitalWrite(PinC2, 0);
  digitalWrite(PinD2, 0);

  digitalWrite(PinA3, 0);
  digitalWrite(PinB3, 0);
  digitalWrite(PinC3, 0);
  digitalWrite(PinD3, 0);

  delay(200);

  digitalWrite(PinA1, 1);
  digitalWrite(PinB1, 1);
  digitalWrite(PinC1, 1);
  digitalWrite(PinD1, 1);

  digitalWrite(PinA2, 1);
  digitalWrite(PinB2, 1);
  digitalWrite(PinC2, 1);
  digitalWrite(PinD2, 1);

  digitalWrite(PinA3, 1);
  digitalWrite(PinB3, 1);
  digitalWrite(PinC3, 1);
  digitalWrite(PinD3, 1);

  delay(200);

  /*for(int x=0; x<3; x++) {
    digitalWrite(A3, digits[x][3]);
    digitalWrite(B3, digits[x][2]);
    digitalWrite(C3, digits[x][1]);
    digitalWrite(D3, digits[x][0]);

    for(int y=0; y<10; y++) {
      digitalWrite(A2, digits[y][3]);
      digitalWrite(B2, digits[y][2]);
      digitalWrite(C2, digits[y][1]);
      digitalWrite(D2, digits[y][0]);

      for(int z=0; z<10; z++) {
        digitalWrite(PinA1, digits[z][3]);
        digitalWrite(B1, digits[z][2]);
        digitalWrite(C1, digits[z][1]);
        digitalWrite(D1, digits[z][0]);
        delay(500);
      }
    }
  }*/
}
