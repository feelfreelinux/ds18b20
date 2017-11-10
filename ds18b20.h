/*
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef DS18B20_H_  
#define DS18B20_H_

void ds18b20_send(char bit);
unsigned char ds18b20_read(void);
void ds18b20_send_byte(char data);
unsigned char ds18b20_read_byte(void);
unsigned char ds18b20_RST_PULSE(void);
float ds18b20_get_temp(void);
void ds18b20_init(int GPIO);

#endif
