//Yellow Loops

void go() {

 randomNo1 = random(100);
  if (randomNo1 <30 ) { rollin ();}
  else if (randomNo1 >=30 && randomNo1 <60) { fadein();}
  else if (randomNo1 >= 60 && randomNo1 < 90) { integrate();}
  else if (randomNo1 >= 90) {dodgyflouroin ();}


 
 randomNo2 = random(120);
  if (randomNo2 >= 10 && randomNo2 < 20) { wink ();}
 else  if (randomNo2 < 10) {pinkeyes ();}
 else if (randomNo2 >= 20) {all_on ();}
 


 randomNo3 = random(6);
 if (randomNo3 == 0) { disintegrate();}
 else  if (randomNo3 == 1) {rollout ();}
 else if (randomNo3 == 2) {fadeout ();}
 else if (randomNo3 == 3) {fadewink ();}
 else if (randomNo3 == 4) {randomout ();}
 else if (randomNo3 == 5) {fadesmile();}


}

void all_on () {

  for (int i = 0; i< LED_COUNT; i++){
leds[i] = CHSV (hue, 255, 255);  }
LEDS.show(); 
delay (50000);
 
}


void rollin (){

//eyes and face outline in
for (int i = 0; i< 92; i++){
leds[Outline[i]] = CHSV (hue, 255, 255); LEDS.show(); delay (30); }

for (int i = 0; i< 25; i++){
leds[Leye[i]] = CHSV (hue, 255, 255); LEDS.show(); delay (30); }


for (int i = 0; i< 25; i++){
leds[Reye[i]] = CHSV (hue, 255, 255); LEDS.show(); delay (30); }
  
  //smile
  
while (c1 <32) { c1++; c2--;
leds[Smile[c1]] = CHSV (hue, 255, 255);
leds[Smile[c2]] = CHSV (hue, 255, 255);  
LEDS.show(); delay (30);  }
 c1 = 15;
 c2 = 17;
 
}
//wink

void wink (){
delay (2000);

while (c3 <2) {

leds[Reye[11]] = CHSV (hue, 255, 0); LEDS.show(); 
leds[Reye[12]] = CHSV (hue, 255, 0); LEDS.show(); 
leds[Reye[13]] = CHSV (hue, 255, 0); LEDS.show(); 

delay (30); 

leds[Reye[10]] = CHSV (hue, 255, 0); LEDS.show(); 
leds[Reye[14]] = CHSV (hue, 255, 0); LEDS.show(); 
delay (30); 

leds[Reye[9]] = CHSV (hue, 255, 0); LEDS.show(); 
leds[Reye[15]] = CHSV (hue, 255, 0); LEDS.show(); 

delay (30); 

leds[Reye[8]] = CHSV (hue, 255, 0); LEDS.show(); 
leds[Reye[16]] = CHSV (hue, 255, 0); LEDS.show(); 


delay (30); 

leds[Reye[7]] = CHSV (hue, 255, 0); LEDS.show(); 
leds[Reye[17]] = CHSV (hue, 255, 0); LEDS.show(); 

delay (30); 

leds[Reye[6]] = CHSV (hue, 255, 0); LEDS.show(); 
leds[Reye[18]] = CHSV (hue, 255, 0); LEDS.show(); 


delay (30); 

leds[Reye[5]] = CHSV (hue, 255, 0); LEDS.show(); 
leds[Reye[19]] = CHSV (hue, 255, 0); LEDS.show(); 

delay (30); 

leds[Reye[4]] = CHSV (hue, 255, 0); LEDS.show(); 
leds[Reye[20]] = CHSV (hue, 255, 0); LEDS.show(); 

delay (30); 

leds[Reye[3]] = CHSV (hue, 255, 0); LEDS.show(); 
leds[Reye[21]] = CHSV (hue, 255, 0); LEDS.show(); 

delay (30); 

leds[Reye[2]] = CHSV (hue, 255, 0); LEDS.show(); 
leds[Reye[22]] = CHSV (hue, 255, 0); LEDS.show(); 

delay (30); 

leds[Reye[1]] = CHSV (hue, 255, 0); LEDS.show(); 
leds[Reye[23]] = CHSV (hue, 255, 0); LEDS.show(); 

delay (30); 

leds[Reye[0]] = CHSV (hue, 255, 0); LEDS.show(); 
leds[Reye[24]] = CHSV (hue, 255, 0); LEDS.show(); 

delay (1000); 


leds[Reye[0]] = CHSV (hue, 255, 255); LEDS.show(); 
leds[Reye[24]] = CHSV (hue, 255, 255); LEDS.show(); 

delay (30); 

leds[Reye[1]] = CHSV (hue, 255, 255); LEDS.show(); 
leds[Reye[23]] = CHSV (hue, 255, 255); LEDS.show(); 

delay (30); 

leds[Reye[2]] = CHSV (hue, 255, 255); LEDS.show(); 
leds[Reye[22]] = CHSV (hue, 255, 255); LEDS.show(); 

delay (30); 

leds[Reye[3]] = CHSV (hue, 255, 255); LEDS.show(); 
leds[Reye[21]] = CHSV (hue, 255, 255); LEDS.show(); 

delay (30); 

leds[Reye[4]] = CHSV (hue, 255, 255); LEDS.show(); 
leds[Reye[20]] = CHSV (hue, 255, 255); LEDS.show(); 

delay (30); 

leds[Reye[5]] = CHSV (hue, 255, 255); LEDS.show(); 
leds[Reye[19]] = CHSV (hue, 255, 255); LEDS.show(); 

delay (30); 

leds[Reye[6]] = CHSV (hue, 255, 255); LEDS.show(); 
leds[Reye[18]] = CHSV (hue, 255, 255); LEDS.show(); 

delay (30); 

leds[Reye[7]] = CHSV (hue, 255, 255); LEDS.show(); 
leds[Reye[17]] = CHSV (hue, 255, 255); LEDS.show(); 

delay (30); 


leds[Reye[8]] = CHSV (hue, 255, 255); LEDS.show(); 
leds[Reye[16]] = CHSV (hue, 255, 255); LEDS.show(); 

delay (30); 

leds[Reye[9]] = CHSV (hue, 255, 255); LEDS.show(); 
leds[Reye[15]] = CHSV (hue, 255, 255); LEDS.show(); 

delay (30); 

leds[Reye[10]] = CHSV (hue, 255, 255); LEDS.show(); 
leds[Reye[14]] = CHSV (hue, 255, 255); LEDS.show(); 

delay (30); 

leds[Reye[11]] = CHSV (hue, 255, 255); LEDS.show(); 
leds[Reye[12]] = CHSV (hue, 255, 255); LEDS.show(); 
leds[Reye[13]] = CHSV (hue, 255, 255); LEDS.show(); 

delay (16000); 

c3++;}

c3 = 0;

}

//everything roll out
void rollout (){
while (c4 >0) { 
  if (c4 > 0) {c4--;} 
 if (c5 > 0) {c5--;} 
if (c6 > 0) {c6--;} 

leds[Leye[c6]] = CHSV (hue, 255, 0); LEDS.show(); 


leds[Reye[c6]] = CHSV (hue, 255, 0); LEDS.show();  


leds[Smile[c5]] = CHSV (hue, 255, 0); LEDS.show();  


leds[Outline[c4]] = CHSV (hue, 255, 0); LEDS.show(); 
delay (30); }



 c4 = 92;
 c5 = 33;
 c6 = 25;
delay (2000);
}


void disintegrate() {

if (sw ==1) {hue4 = hue5; sat4 = sat5;}
else if (sw == 0) {hue4 = hue; sat4 = 255;}

for (int i = 0; i< 125; i++){
leds[i] = CHSV (hue, 255, 255);  }

for (int i = 125; i< 175; i++){
leds[i] = CHSV (hue4, sat4, 255); }

LEDS.show(); 

delay (2000);

while (c7 > 0) { 
  
 if (c7 >0) { c7--;}
 if (c8 < 45) {c8 ++;}

 if (c7 <13){ c9--; c10++; 
 leds[Leye[c9]] = CHSV (hue, 255, 0); 
 leds[Leye[c10]] = CHSV (hue, 255, 0); 
 leds[Reye[c9]] = CHSV (hue, 255, 0); 
 leds[Reye[c10]] = CHSV (hue, 255, 0); 
 }


leds[Outline[c7]] = CHSV (hue, 255, 0); 
leds[Outline[c8]] = CHSV (hue, 255, 0); 
  LEDS.show(); 
  delay (d1);


}

while (c12 < 70 ) {
 if (c11 >69) { c11--;}
  if (c12 <70) { c12++;}
if (c11 < 90) {c13 ++; c14--;
leds[Smile[c13]] = CHSV (hue, 255, 0); 
leds[Smile[c14]] = CHSV (hue, 255, 0); 
}

leds[Outline[c11]] = CHSV (hue, 255, 0); 
leds[Outline[c12]] = CHSV (hue, 255, 0); 
LEDS.show(); 
  delay (d1);
}


 c7 = 23;
 c8 = 22;
 c9 = 13;
c10 = 11;
c11 = 92;
c12 = 44;
c13 = -1;
c14 = 33;
sw = 0;
delay (2000);
}


void pinkeyes (){
/*
while (c15 <1) {
all_on ();
c15++;}
  */
 while (huex >=0){ 
if (huex >=0){ huex--;}
if (satx > 200)  {satx = satx -2;}
for (int i = 0; i< 25; i++){
leds[Leye[i]] = CHSV (huex, satx, 255); }

for (int i = 0; i< 25; i++){
leds[Reye[i]] = CHSV (huex, satx, 255); }

LEDS.show(); delay (500); 
 }
 hue5 = huex;
 sat5 = satx;
 huex = 50;
 satx = 255;
  sw =1;
}

void fadeout (){
if (sw ==1) {hue4 = hue5; sat4 = sat5;}
else if (sw == 0) {hue4 = hue; sat4 = 255;}

  while (valx > 0) {valx --;
  for (int i = 0; i< 125; i++){
leds[i] = CHSV (hue, 255, valx);  }
for (int i = 125; i<175; i++) {
  leds[i] = CHSV (hue4, sat4, valx);
}
LEDS.show(); delay (10);
 
  }
 valx = 255;
 sw =0;
 delay (2000);
}

void fadein() {

  while (valy < 255) {valy ++;
  for (int i = 0; i< LED_COUNT; i++){
leds[i] = CHSV (hue, 255, valy);  }
LEDS.show(); delay (10);
 
  }
 valy =0;
}



void fadewink(){

if (sw ==1) {hue4 = hue5; sat4 = sat5;}
else if (sw == 0) {hue4 = hue; sat4 = 255;}

while (valx > 0) {valx --;
for (int i = 0; i< 125; i++){
leds[i] = CHSV (hue, 255, valx);  }
LEDS.show(); delay (10);
 }


delay (2000);

while (valz > 0) {valz --;
for (int i = 125; i<175; i++) {
  leds[i] = CHSV (hue4, sat4, valz); }
 LEDS.show(); delay (10);
}

 valz = 255;
 valx =255;
 sw =0;
 delay (4000);
  
}


void fadesmile(){

if (sw ==1) {hue4 = hue5; sat4 = sat5;}
else if (sw == 0) {hue4 = hue; sat4 = 255;}

while (valx > 0) {valx --;
for (int i = 0; i< 92; i++){
leds[i] = CHSV (hue, 255, valx);  }

for (int i = 125; i< 175; i++){
leds[i] = CHSV (hue4, sat4, valx);  }

LEDS.show(); delay (10);
 }


delay (2000);

while (valz > 0) {valz --;
for (int i = 92; i<125; i++) {
  leds[i] = CHSV (hue, 255, valz); }
 LEDS.show(); delay (10);
}

 valz = 255;
 valx =255;
 sw =0;
 delay (4000);
  
}


void integrate() {



delay (2000);

while (c7 > 0) { 
  
 if (c7 >0) { c7--;}
 if (c8 < 45) {c8 ++;}

 if (c7 <13){ c9--; c10++; 
 leds[Leye[c9]] = CHSV (hue, 255, 255); 
 leds[Leye[c10]] = CHSV (hue, 255, 255); 
 leds[Reye[c9]] = CHSV (hue, 255, 255); 
 leds[Reye[c10]] = CHSV (hue, 255, 255); 
 }


leds[Outline[c7]] = CHSV (hue, 255, 255); 
leds[Outline[c8]] = CHSV (hue, 255, 255); 
  LEDS.show(); 
  delay (d1);


}

while (c12 < 70 ) {
 if (c11 >69) { c11--;}
  if (c12 <70) { c12++;}
if (c11 < 90) {c13 ++; c14--;
leds[Smile[c13]] = CHSV (hue, 255, 255); 
leds[Smile[c14]] = CHSV (hue, 255, 255); 
}

leds[Outline[c11]] = CHSV (hue, 255, 255); 
leds[Outline[c12]] = CHSV (hue, 255, 255); 
LEDS.show(); 
  delay (d1);
}


 c7 = 23;
 c8 = 22;
 c9 = 13;
c10 = 11;
c11 = 92;
c12 = 44;
c13 = -1;
c14 = 33;
sw = 0;
delay (2000);
}


