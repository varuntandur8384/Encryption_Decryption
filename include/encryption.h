#ifndef ENCRYPTION_H
//966#include <button.h>
#include <led.h>

int delay_time = 1000;
int read_a,read_b,read_c,read_d,read_e,read_f,read_g,read_h,read_i,read_j,read_k,read_l,read_m,shift_read,read_encrypt,read_display;
const int A = 1,B = 2,C = 3,D =4,E = 5,F = 6,G = 7,H = 8,I = 9,J = 10,K = 11,L = 12,M = 13,N = 14,O = 15,P = 16,Q = 17,R = 18,S = 19,T = 20,U = 21,V = 22,W = 23,X = 24,Y = 25,Z=26; 
int mes_pos[26] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
int i = 0;

void encryption()
{
  Serial.println("encryption Mode");
    if(read_a == LOW)
    {
      Serial.println("button is entered the loop a");
      int z = (mes_pos[i]+ A)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
    }
    if(read_b == LOW)
    {
      Serial.println("button is entered the loop b");
      int z = (mes_pos[i]+ B)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_c == LOW)
    {
      Serial.println("button is entered the loop c");
      int z = (mes_pos[i]+ C)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_d == LOW)
    {
      Serial.println("button is entered the loop d");
      int z = (mes_pos[i]+ D)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
    }
    if(read_e == LOW)
    {
      Serial.println("button is entered the loop e");
      int z = (mes_pos[i]+ E)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_f == LOW)
    {
      Serial.println("button is entered the loop f");
      int z = (mes_pos[i]+ F)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
     //i = i+1;
      
    }
    if(read_g == LOW)
    {
      Serial.println("button is entered the loop g");
      int z = (mes_pos[i]+ G)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
    }
    if(read_h == LOW)
    {
      Serial.println("button is entered the loop h");
      int z = (mes_pos[i]+ H)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_i == LOW)
    {
      Serial.println("button is entered the loop i");
      int z = (mes_pos[i]+ I)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_j == LOW)
    {
      Serial.println("button is entered the loop j");
      int z = (mes_pos[i]+ J)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
    }
    if(read_k == LOW)
    {
      Serial.println("button is entered the loop k");
      int z = (mes_pos[i]+ K)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_l == LOW)
    {
      Serial.println("button is entered the loop l");
      int z = (mes_pos[i]+ L)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_m == LOW)
    {
      Serial.println("button is entered the loop m");
      int z = (mes_pos[i]+ M)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
    }
    if(read_a == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop n");
      int z = (mes_pos[i]+ N)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_b == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop o");
      int z = (mes_pos[i]+ O)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_c == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop p");
      int z = (mes_pos[i]+ P)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
    }
    if(read_d == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop q");
      int z = (mes_pos[i]+ Q)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_e == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop r");
      int z = (mes_pos[i]+ R)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_f == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop s");
      int z = (mes_pos[i]+ S)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
    }
    if(read_g == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop t");
      int z = (mes_pos[i]+ T)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_h == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop u");
      int z = (mes_pos[i]+ U)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_i == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop v");
      int z = (mes_pos[i]+ V)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
    }
    if(read_j == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop w");
      int z = (mes_pos[i]+ W)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_k == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop x");
      int z = (mes_pos[i]+ X)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_l == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop y");
      int z = (mes_pos[i]+ Y)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
    }
    if(read_m == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop z");
      int z = (mes_pos[i]+ Z)%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //i = i+1;
      
    }
    if(read_a == LOW || read_b == LOW || read_c == LOW|| read_d == LOW || read_e == LOW || read_f == LOW|| read_g == LOW || read_h == LOW || read_i == LOW|| read_j == LOW || read_k == LOW || read_l== LOW|| read_m == LOW)
    {
      i = i+1;
      if(shift_read == LOW)
      {
        i = i-1;
      }
    }
}

#endif
