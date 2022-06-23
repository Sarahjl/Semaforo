int vermelho1 = 8;
int vermelho2 = 2;
int vermelho3 = 5;
int vermelho4 = 11;

int verde1 = 6;
int verde2 = 0;
int verde3 = 3;
int verde4 = 9;

int amarelo1 = 7;
int amarelo2 = 1;
int amarelo3 = 4;
int amarelo4 =10;


void setup()
{
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(vermelho1, HIGH);
  digitalWrite(vermelho2, HIGH);
  
  digitalWrite(verde3, HIGH);
  digitalWrite(verde4, HIGH);
  
  delay(2000); // Wait for 1000 millisecond(s)
  
  digitalWrite(verde3, LOW);
  digitalWrite(verde4, LOW);
  
  digitalWrite(amarelo3, HIGH);
  digitalWrite(amarelo4, HIGH);
  
  delay(2000); // Wait for 1000 millisecond(s)
  
  digitalWrite(amarelo3, LOW);
  digitalWrite(amarelo4, LOW);
  
  digitalWrite(vermelho3, HIGH);
  digitalWrite(vermelho4, HIGH);
  
   digitalWrite(vermelho1, LOW);
  digitalWrite(vermelho2, LOW);
  
  digitalWrite(verde1, HIGH);
  digitalWrite(verde2, HIGH);
  
  delay(2000); // Wait for 1000 millisecond(s)
  
  digitalWrite(verde1, LOW);
  digitalWrite(verde2, LOW);
  
  digitalWrite(amarelo1, HIGH);
  digitalWrite(amarelo2, HIGH);
  
  delay(2000); // Wait for 1000 millisecond(s)
  
  digitalWrite(amarelo1, LOW);
  digitalWrite(amarelo2, LOW);
  
  digitalWrite(vermelho1, HIGH);
  digitalWrite(vermelho2, HIGH);
  
  digitalWrite(vermelho3, LOW);
  digitalWrite(vermelho4, LOW);
}