#ifndef DS18B20_H_  
#define DS18B20_H_

void send(char bit);
unsigned char read(void);
void send_byte(char data);
unsigned char read_byte(void);
unsigned char RST_PULSE(void);
float DS_get_temp(void);
void DS_init(int GPIO);

#endif
