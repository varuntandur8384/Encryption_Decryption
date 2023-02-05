#ifndef DECRYPTION_H

int dec_pos[26] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
int j = 0;
void decryption()
{
  Serial.println("decryption Mode");
    if(read_a == LOW && shift_read == HIGH)
    {
      Serial.println("button is entered the loop a");
      int z = (A - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      j = j+1;
    }
    if(read_b == LOW && shift_read == HIGH)
    {
      Serial.println("button is entered the loop b");
      int z = (B - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      j = j+1;
      
    }
    if(read_c == LOW && shift_read == HIGH)
    {
      Serial.println("button is entered the loop c");
      int z = (C - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      j = j+1; 
    }
    if(read_d == LOW && shift_read == HIGH)
    {
      Serial.println("button is entered the loop d");
      int z = (D - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      j = j+1;
    }
    if(read_e == LOW && shift_read == HIGH) 
    {
      Serial.println("button is entered the loop e");
      int z = (E - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      j = j+1;
      
    }
    if(read_f == LOW && shift_read == HIGH)
    {
      Serial.println("button is entered the loop f");
      int z = (F - dec_pos[j])%26; 
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      j = j+1;
      
    }
    if(read_g == LOW && shift_read == HIGH)
    {
      Serial.println("button is entered the loop g");
      int z = (G - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      j = j+1;
    }
    if(read_h == LOW && shift_read == HIGH)
    {
      Serial.println("button is entered the loop h");
      int z = (H - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      j = j+1;
      
    }
    if(read_i == LOW && shift_read == HIGH)
    {
      Serial.println("button is entered the loop i");
      int z = (I - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      j = j+1;
      
    }
    if(read_j == LOW && shift_read == HIGH )
    {
      Serial.println("button is entered the loop j");
      int z = (J - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      j = j+1;
    }
    if(read_k == LOW  && shift_read == HIGH)
    {
      Serial.println("button is entered the loop k");
      int z = (K - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      j = j+1;
      
    }
    if(read_l == LOW  && shift_read == HIGH)
    {
      Serial.println("button is entered the loop l");
      int z = (L - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      j = j+1;
      
    }
    if(read_m == LOW  && shift_read == HIGH)
    {
      Serial.println("button is entered the loop m");
      int z = (M - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      j = j+1;
    }
    if(read_a == LOW && shift_read == LOW )
    {
      Serial.println("button is entered the loop n");
      int z = (N - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //j = j+1;
      
    }
    if(read_b == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop o");
      int z = (O - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //j = j+1;
      
    }
    if(read_c == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop p");
      int z = (P - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //j = j+1;
    }
    if(read_d == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop q");
      int z = (Q - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //j = j+1;
      
    }
    if(read_e == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop r");
      int z = (R - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //j = j+1;
      
    }
    if(read_f == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop s");
      int z = (S - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //j = j+1;
    }
    if(read_g == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop t");
      int z = (T - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //j = j+1;
      
    }
    if(read_h == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop u");
      int z = (U - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //j = j+1;
      
    }
    if(read_i == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop v");
      int z = (V - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //j = j+1;
    }
    if(read_j == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop w");
      int z = (W - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //j = j+1;
      
    }
    if(read_k == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop x");
      int z = (X - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //j = j+1;
      
    }
    if(read_l == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop y");
      int z = (Y - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //j = j+1;
    }
    if(read_m == LOW && shift_read == LOW)
    {
      Serial.println("button is entered the loop z");
      int z = (Z - dec_pos[j])%26;
      Serial.println(z-1);
      digitalWrite(led[z-1],HIGH);
      delay(delay_time);
      digitalWrite(led[z-1],LOW);
      //j = j+1;
      
    }
}

#endif
