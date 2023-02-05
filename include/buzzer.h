#ifndef BUZZER_H

#define buz 49
int k;

void speaker()
{
    for(k=0;k<3;k++)
    {
        digitalWrite(buz,HIGH);

        digitalWrite(leda,HIGH);
        digitalWrite(ledb,HIGH);
        digitalWrite(ledc,HIGH);
        digitalWrite(ledd,HIGH);
        digitalWrite(lede,HIGH);
        digitalWrite(ledf,HIGH);
        digitalWrite(ledg,HIGH);
        digitalWrite(ledh,HIGH);
        digitalWrite(ledi,HIGH);
        digitalWrite(ledj,HIGH);
        digitalWrite(ledk,HIGH);
        digitalWrite(ledl,HIGH);
        digitalWrite(ledm,HIGH);
        digitalWrite(ledn,HIGH);
        digitalWrite(ledo,HIGH);
        digitalWrite(ledp,HIGH);
        digitalWrite(ledq,HIGH);
        digitalWrite(ledr,HIGH);
        digitalWrite(leds,HIGH);
        digitalWrite(ledt,HIGH);
        digitalWrite(ledu,HIGH);
        digitalWrite(ledv,HIGH);
        digitalWrite(ledw,HIGH);
        digitalWrite(ledx,HIGH);
        digitalWrite(ledy,HIGH);
        digitalWrite(ledz,HIGH);
        
        delay(500);
        digitalWrite(buz,LOW);

        digitalWrite(leda,LOW);
        digitalWrite(ledb,LOW);
        digitalWrite(ledb,LOW);
        digitalWrite(ledc,LOW);
        digitalWrite(ledd,LOW);
        digitalWrite(lede,LOW);
        digitalWrite(ledf,LOW);
        digitalWrite(ledg,LOW);
        digitalWrite(ledh,LOW);
        digitalWrite(ledi,LOW);
        digitalWrite(ledj,LOW);
        digitalWrite(ledk,LOW);
        digitalWrite(ledl,LOW);
        digitalWrite(ledm,LOW);
        digitalWrite(ledn,LOW);
        digitalWrite(ledo,LOW);
        digitalWrite(ledp,LOW);
        digitalWrite(ledq,LOW);
        digitalWrite(ledr,LOW);
        digitalWrite(leds,LOW);
        digitalWrite(ledt,LOW);
        digitalWrite(ledu,LOW);
        digitalWrite(ledv,LOW);
        digitalWrite(ledw,LOW);
        digitalWrite(ledx,LOW);
        digitalWrite(ledy,LOW);
        digitalWrite(ledz,LOW);
        delay(500);
    }
}

#endif