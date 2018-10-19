# Simple library for <b>single</b> DS18B20 on ESP32
# Usage
Put <b>ds18b20.c</b> and <b>ds18b20.h</b> in the same directory as your project code. <br>
Include library with <code>#include ds18b20.h</code> <br>
To initialize library, call <code>ds18b20_init(GPIO);</code><br>
To get temperature(in Celcius), call <code>ds18b20_get_temp();</code><br>
<a href="https://github.com/feelfreelinux/myesp32tests/blob/master/examples/ds18b20_temperature.c">For example, see this code.</a>
