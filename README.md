# Simple library for <b>single</b> DS18B20 on ESP32
#Usage
Put <b>ds18b20.c</b> and <b>ds18b20.h</b> in the same directory as your project code. <br>
Include library with <code>#include ds18b20.h</code> 
To initialize library, call <code>DS_init(GPIO);</code>
To get temperature(in Celcius), call <code>DS_get_temp()</code>
<a>Example code.</a>
