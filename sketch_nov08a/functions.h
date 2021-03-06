/* all functions, excluded       ||
|| translate_IR()                ||
|| - mostly used for remote      ||
|| control                       */

void moveServo(int pos1 = 0, int delayMS1 = 750){
  myservo.write(pos1);
  delay(delayMS1);
}

void setRelay(boolean lr, boolean rr, boolean fwrd, int delayMS = 0){
  if(lr == true){
    digitalWrite(left_relay, HIGH);
  }
  else{
    digitalWrite(left_relay, LOW);
  }
  if(rr == true){
    digitalWrite(right_relay, HIGH);
  }
  else{
    digitalWrite(right_relay, LOW);
  }
  if(fwrd == true){
    digitalWrite(frev_relay, LOW);
  }
  else{
    digitalWrite(frev_relay, HIGH);
  }
}

void toggle(int pin, String button = "UNDEFINED: PLEASE DEFINE BUTTON IN CALL: <toggle>"){
  Serial.println(". -> " + button + " -> toggled!");
  digitalToggle(pin);
}

void moveStep1(boolean clockWise, int revolution){
  if(clockWise == true){
    step1.step(revolution);
  }
  else{
    step1.step(-revolution);
  }
}

boolean inUse(boolean use){
  if(use == true){
    return true;
  }
  else if(use == false){
    return false;
  }
}
