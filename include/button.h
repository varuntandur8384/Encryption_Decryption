#ifndef BUTTON_H
#define but_a 2
#define but_b 3
#define but_c 4
#define but_d 5
#define but_e 6
#define but_f 7
#define but_g 8
#define but_h 9
#define but_i 10
#define but_j 11
#define but_k 12
#define but_l 13
#define but_m 14
#define shift_but 15
/*#define but_o 16
#define but_p 17
#define but_q 18
#define but_r 19
#define but_s 20
#define but_t 21
#define but_u 22
#define but_v 23
#define but_w 24
#define but_x 25
#define but_y 26
#define but_z 27*/

#define but_encrypt 52
#define display_but 53

int button_state_encrypt = 0;
int read_encrypt_old = 1;
int button_state_decrypt = 0;
int read_decrypt_old = 1;

void toggle_encryption()
{ read_encrypt = digitalRead(but_encrypt);
  Serial.println("toggle loop is entered");
  if(read_encrypt == 1 && read_encrypt_old==0)
    {
      Serial.println("loop is entered");
      if(button_state_encrypt == 0)
      {
        digitalWrite(encrypt_led,HIGH);
        digitalWrite(decrypt_led,LOW);
        delay(500);
        button_state_encrypt = 1;
      }
      else
      {
        digitalWrite(decrypt_led,HIGH);
        digitalWrite(encrypt_led,LOW);
        delay(500);
        button_state_encrypt = 0;
      }
    }
    read_encrypt_old=read_encrypt;
}

/*void toggle_decryption()
{
    if(read_encrypt == 1 && read_decrypt_old==0)
  {
    if(button_state_decrypt == 0)
    {
      digitalWrite(encrypt_led,LOW);
      delay(500);
      button_state_decrypt = 1;
    }
    else
    {
      digitalWrite(encrypt_led,LOW);
      delay(500);
      button_state_decrypt = 0;
    }
  }
  read_decrypt_old=read_encrypt;
}*/

#endif 