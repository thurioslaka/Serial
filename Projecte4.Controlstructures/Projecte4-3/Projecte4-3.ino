int tempAigua = 100;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua < 90)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
else if ( tempAigua >= 90 && tempAigua < 100)
 {
    Serial.print("Aigua apunt de bullir!");
  } 
else if ( tempAigua == 100)
 {
    Serial.print("Aigua a 100C!");
  } 
else
 {
    Serial.print("Aigua bullint!");
  } 
}
void loop()   // we need this to be here even though its empty
{
}

