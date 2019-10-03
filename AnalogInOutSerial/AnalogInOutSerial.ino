const int buttonPin1 =2;
const int buttonPin2 =3;

int buttonState =0;


void setup() {
// put your setup code here, to run once:
pinMode (ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);


pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);
}

void loop() {
// put your main code here, to run repeatedly:
if (buttonState = digitalRead (buttonPin1)== LOW)
{
digitalWrite (ledPin1, LOW);
digitalWrite (ledPin2, HIGH);
}

if (buttonState = digitalRead (buttonPin2)== HIGH)
{
digitalWrite (ledPin1, HIGH);
digitalWrite (ledPin2, LOW);

}

}
