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

void send(char bit);
unsigned char read(void);
void send_byte(char data);
unsigned char read_byte(void);
unsigned char RST_PULSE(void);
float DS_get_temp(void);
void DS_init(int GPIO);

#endif
