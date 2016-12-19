int speaker = 9; // membuat variabel Speaker untuk pin 9 digital
void setup() { // void setup sengaja dikosongkan
}
void DO() {
  tone(speaker, 262);  // fungsi variabel untuk nada DO
}
void RE() {
  tone(speaker, 294);  // fungsi variabel untuk nada RE
}
void MI() {
  tone(speaker, 330);  // fungsi variabel untuk nada MI
}
void FA() {
  tone(speaker, 349);  // fungsi variabel untuk nada FA
}
void SOL() {
  tone(speaker, 395);  // fungsi variabel untuk nada SOL
}
void LA() {
  tone(speaker, 440);  // fungsi variabel untuk nada LA
}
void SI() {
  tone(speaker, 494);  // fungsi variabel untuk nada SI
}
void DOO() {
  tone(speaker, 523);  // fungsi variabel untuk nada DOO
}
void DIAM() {
  noTone(speaker);  // fungsi variabel untuk nada DIAM
}
void loop() {
  LA(); delay(500); DO(); delay(500);   MI(); delay(500); DO(); delay(500); SOL(); delay(500); DO(); delay(500); MI(); delay(500); SOL(); delay(500); LA(); delay(1500); MI(); delay(500); // Indonesia Tanah Air Beta
 DO(); delay(500); DO(); delay(500);   DO(); delay(1000); SI(); delay(500); DO(); delay(500); SI(); delay(500); DO(); delay(500); MI(); delay(500); RE(); DIAM(); delay(1000); // pusaka abadi nan jaya
  LA(); delay(500); DO(); delay(500);   MI(); delay(500); DO(); delay(500); SOL(); delay(500); DO(); delay(500); DO(); delay(500); SI(); delay(500); LA(); delay(1000); FA(); delay(500); // Indonesia sejak dulu kalaa
  RE(); delay(500); SI(); delay(500);   DO(); delay(1000); SOL(); delay(300); FA(); delay(300); SOL(); delay(500); FA(); delay(500); SI(); delay(500); DO(); delay(500); DIAM(); delay(500); // slalu di puja-puja bangsa
 SOL(); delay(500); SOL(); delay(500);   SOL(); delay(500); SI(); delay(500); SOL(); delay(500); FA(); delay(500); RE(); delay(500); SI(); delay(500); SOL(); delay(500); DIAM(); delay(500); // tempat lahir beta
  MI(); delay(500); MI(); delay(500);   MI(); delay(500); FA(); delay(500); MI(); delay(500); RE(); delay(500); DO(); delay(500); SI(); delay(500); LA(); delay(500); DIAM(); delay(300);// dibuai dibesarkan bunda
  LA(); delay(500); SI(); delay(500);   DO(); delay(500); SI(); delay(500); RE(); delay(500); MI(); delay(500); FA(); delay(500); LA(); delay(1500); SOL(); delay(500);// tempat berlindung di hari tua
  SOL(); delay(500); DO(); delay(500);   RE(); delay(500); SOL(); delay(300); FA(); delay(500); SOL(); delay(500); FA(); delay(500); SI(); delay(500); DO(); delay(1500); DIAM(); delay(1000);// dibuai dibesarkan bunda
}
