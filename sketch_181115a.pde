import processing.serial.*;
PrintWriter output;
Serial udSerial;

 int stop = 0;
void setup() {

  udSerial = new Serial(this, Serial.list()[0], 9600);
  output = createWriter ("Battements.csv");
}

  void draw() {
    if (udSerial.available() > 0) {
      String SenVal = udSerial.readStringUntil(';');
      if (SenVal != null) {
        output.println(SenVal);
        stop ++;
        if(stop > 25){
        output.flush();
        output.close();
        exit(); 
        }
      }
    }
  }

  void keyPressed(){
    output.flush();
    output.close();
    exit(); 
}
