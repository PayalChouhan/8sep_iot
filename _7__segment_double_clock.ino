int pins[7]={12,11,10,9,8,7,6};
 int ssd [10][7]=
{{1,1,1,1,1,1,0},
{0,1,1,0,0,0,0},
{1,1,0,1,1,0,1},
{1,1,1,1,0,0,1},
{0,1,1,0,0,1,1},
{1,0,1,1,0,1,1},
{1,0,1,1,1,1,1},
{1,1,1,0,0,0,0},
{1,1,1,1,1,1,1},
{1,1,1,1,0,1,1},
};
int select[2]={2,1};                                                                                                                                                                          
  void setup() {
    for(int i=0; i<7; i++){
      pinMode(pins[i],OUTPUT);
      pinMode(select[0],OUTPUT);
      pinMode(select[1],OUTPUT);
      digitalWrite(select[0],1);
      digitalWrite(select[1],1);
    }
  }


void loop() {
  for(int k=0;k<10;k++){
  for(int s=0;s<10;s++){
    for(int t=0;t<20;t++){
      digitalWrite(select[0],0);
      for(int i=0;i<7;i++){
        digitalWrite(pins[i],ssd[k][i]);
      }                                                                                                                                                                                                                                                                
    delay(15);
      digitalWrite(select[0],1);
      digitalWrite(select[1],0);
      for(int i=0;i<7;i++){
        digitalWrite(pins[i],ssd[s][i]);
      }
       delay(15);
       digitalWrite( select[1] ,1);
        }
         }
}
}

