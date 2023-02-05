#ifndef SEGMENT_DISPLAY_H
//#include <Arduino.h>
/*byte seg_1[17] = {0x77,0x7F,0x39,0x3F,0x79,0x71,0x7D,0x76,0x06,0x1F,0x38,0x5C,0x73,0x6D,0x78,0x3E,0x6E};
byte seg_2[17] = {0x77,0x7F,0x39,0x3F,0x79,0x71,0x7D,0x76,0x06,0x1F,0x38,0x5C,0x73,0x6D,0x78,0x3E,0x6E};
byte seg_3[17] = {0x77,0x7F,0x39,0x3F,0x79,0x71,0x7D,0x76,0x06,0x1F,0x38,0x5C,0x73,0x6D,0x78,0x3E,0x6E};
byte seg_4[17] = {0x77,0x7F,0x39,0x3F,0x79,0x71,0x7D,0x76,0x06,0x1F,0x38,0x5C,0x73,0x6D,0x78,0x3E,0x6E};*/

//#define but_seg_3 30
//#define but_seg_4 31
//int l = 0,dth=1000 ;
int a = 42,b = 43,c = 44,d = 45,e = 46,f = 47,g = 48;
int l=0;
void display()
{
  int dth=1000 ;
  int read_display = digitalRead(display_but);
  //Serial.println(read_display);
  if(read_display ==LOW)
  { 
    while(l<=10)
    {
        if(l == 0)
        {  
            digitalWrite(a,HIGH);
            digitalWrite(b,HIGH);
            digitalWrite(c,HIGH);
            digitalWrite(d,HIGH);
            digitalWrite(e,HIGH);
            digitalWrite(f,HIGH);
            digitalWrite(g,HIGH);

            digitalWrite(a,LOW);
            digitalWrite(b,LOW);
            digitalWrite(c,LOW);
            digitalWrite(d,LOW);
            digitalWrite(e,LOW);
            digitalWrite(f,LOW);
        
            l = l+1;
            Serial.println(l);
            delay(dth);
            break;
        }
        if(l == 1)
        {
            Serial.println(l);
            digitalWrite(a,HIGH);
            digitalWrite(b,HIGH);
            digitalWrite(c,HIGH);
            digitalWrite(d,HIGH);
            digitalWrite(e,HIGH);
            digitalWrite(f,HIGH);
            digitalWrite(g,HIGH);

            digitalWrite(c,LOW);
            digitalWrite(b,LOW);
            l = l+1;
            delay(dth);
            break;
    }
        
    if(l == 2)
    {
        Serial.println(l);
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);

        digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(g,LOW);
        digitalWrite(e,LOW);
        digitalWrite(d,LOW);
        l = l+1;
        delay(dth);
        break;
    }

    if(l == 3)
    { Serial.println(l);
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
    
        digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(g,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        delay(dth);
        l = l+1;
        break;
    }
    if(l == 4)
    { Serial.println(l);
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
    
        digitalWrite(f,LOW);
        digitalWrite(b,LOW);
        digitalWrite(g,LOW);
        digitalWrite(c,LOW);
        delay(dth);
        l = l+1;
        break;

    }
    if(l == 5)
    { Serial.println(l);
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
    
        digitalWrite(a,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        delay(dth);
        l = l+1;
        break;
    }
    if(l == 6)
    { Serial.println(l);
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
    
        digitalWrite(f,LOW);
        digitalWrite(a,LOW);
        digitalWrite(g,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        delay(dth);
        l = l+1;
        break;
    }
    if(l == 7)
    { Serial.println(l);
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);
    
        digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        delay(dth);
        l = l+1;
        break;
    }
    if(l == 8)
    { Serial.println(l);
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);

        digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(e,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
        delay(dth);
        l = l+1;
        break;
    }
    if(l == 9)
    { Serial.println(l);
        digitalWrite(a,HIGH);
        digitalWrite(b,HIGH);
        digitalWrite(c,HIGH);
        digitalWrite(d,HIGH);
        digitalWrite(e,HIGH);
        digitalWrite(f,HIGH);
        digitalWrite(g,HIGH);

        digitalWrite(a,LOW);
        digitalWrite(b,LOW);
        digitalWrite(c,LOW);
        digitalWrite(d,LOW);
        digitalWrite(f,LOW);
        digitalWrite(g,LOW);
        delay(dth);
        l = l+1;
        l = 0;
        break;
    }
  }
  }
}

#endif