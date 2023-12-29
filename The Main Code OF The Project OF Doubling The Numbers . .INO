// The Project OF Doubling The Numbers .

// In this program, We want to Receive a Number from The Serial and then print Double that on The Serial Monitor .

// The Main Code OF The Project OF Doubling The Numbers . . INO . .




void setup () {

  Serial.begin (9600);                                                                                                                              // Introducing The Series .

}


void loop () {


  if (Serial.available () > 0 ) {                                                                                                         //

    int TheNumber = Serial.parseInt ();                                                                                                //
    int TheDoubleOFTheNumber = TheNumber * 2;                                                                                         //


    Serial.print (" * * * * The Double OF The Number : * * * * * ");                                                               // Show The Desired Message .
    Serial.print (The Number);                                                                                                    // Show The Desired Message .
    Serial.print (" * * * * Is : * * * * ");                                                                                     // Show The Desired Message .
    Serial.print (TheDoubleOFTheNumber);                                                                                        // Show The Desired Message .


    }


}
