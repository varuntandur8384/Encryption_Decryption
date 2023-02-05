#include <Arduino.h>
#include <encryption.h>
#include <decryption.h>
#include <button.h>
//#include <led.h>
#include <segment_display.h>
#include <buzzer.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(leda,OUTPUT),pinMode(but_a,INPUT_PULLUP);
  pinMode(ledb,OUTPUT),pinMode(but_b,INPUT_PULLUP);
  pinMode(ledc,OUTPUT),pinMode(but_c,INPUT_PULLUP);
  pinMode(ledd,OUTPUT),pinMode(but_d,INPUT_PULLUP);
  pinMode(lede,OUTPUT),pinMode(but_e,INPUT_PULLUP);
  pinMode(ledf,OUTPUT),pinMode(but_f,INPUT_PULLUP);
  pinMode(ledg,OUTPUT),pinMode(but_g,INPUT_PULLUP);
  pinMode(ledh,OUTPUT),pinMode(but_h,INPUT_PULLUP);
  pinMode(ledi,OUTPUT),pinMode(but_i,INPUT_PULLUP);
  pinMode(ledj,OUTPUT),pinMode(but_j,INPUT_PULLUP);
  pinMode(ledk,OUTPUT),pinMode(but_k,INPUT_PULLUP);
  pinMode(ledl,OUTPUT),pinMode(but_l,INPUT_PULLUP);
  pinMode(ledm,OUTPUT),pinMode(but_m,INPUT_PULLUP);
  pinMode(ledn,OUTPUT);
  pinMode(ledo,OUTPUT);
  pinMode(ledp,OUTPUT);
  pinMode(ledq,OUTPUT);
  pinMode(ledr,OUTPUT);
  pinMode(leds,OUTPUT);
  pinMode(ledt,OUTPUT);
  pinMode(ledu,OUTPUT);
  pinMode(ledv,OUTPUT);
  pinMode(ledw,OUTPUT);
  pinMode(ledx,OUTPUT);
  pinMode(ledy,OUTPUT);
  pinMode(ledz,OUTPUT);

  pinMode(encrypt_led,OUTPUT);
  pinMode(decrypt_led,OUTPUT);

  //encryption and decryption button
  pinMode(but_encrypt,INPUT_PULLUP);
  pinMode(display_but,INPUT_PULLUP);

  //Buzzer declaration 
  pinMode(buz,OUTPUT);

  //7 segment display
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  read_a = digitalRead(but_a);
  read_b = digitalRead(but_b);
  read_c = digitalRead(but_c);
  read_d = digitalRead(but_d);
  read_e = digitalRead(but_e);
  read_f = digitalRead(but_f);
  read_g = digitalRead(but_g);
  read_h = digitalRead(but_h);
  read_i = digitalRead(but_i);
  read_j = digitalRead(but_j);
  read_k = digitalRead(but_k);
  read_l = digitalRead(but_l);
  read_m = digitalRead(but_m);
  shift_read = digitalRead(shift_but);
  
  //encryption and decryption button
  read_encrypt = digitalRead(but_encrypt);
  read_display = digitalRead(display_but);
  
  //Serial.println(read_encrypt);
  

  if(read_display == LOW)
  { Serial.println("entered the loop");
    display();
  }
  if(read_encrypt == LOW)
  {
    Serial.println("entered the encrypt loop");
    toggle_encryption();

  }
  int read_encrypt_led = digitalRead(encrypt_led);
  //Serial.println(read_encrypt_led);
  int read_decrypt_led = digitalRead(decrypt_led);
  if( read_a == LOW || read_b == LOW || read_c == LOW|| read_d == LOW || read_e == LOW || read_f == LOW|| read_g == LOW || read_h == LOW || read_i == LOW|| read_j == LOW || read_k == LOW || read_l== LOW|| read_m == LOW )
  {
    Serial.println("alphabate button is pressed");
    if(l == 2)
    {
      Serial.println("l = 7 loop is entered");
      if(read_encrypt_led == HIGH)
      {
        Serial.println("encryption led loop is entered ");
        encryption();
      }
      else if(read_decrypt_led == HIGH)
      {
        Serial.println("decryption led loop is entered ");
        decryption();
      }
    }
    else
    {
      Serial.println("private key is wrong");
      speaker();
    }
  }
}