# I2C 16x2 LCD with three different microcontrollers
The key learning from this setup is that I2C communication remains the same, regardless of the microcontroller.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; I recently connected an I2C 16×2 LCD with three different microcontrollers:

                             ✅ Arduino UNO
                             
                             ✅ ESP32
                             
                             ✅ NodeMCU (ESP8266)

## 1️⃣ What is I2C?

• Two-wire communication protocol

• Master–slave architecture

• SDA = data, SCL = clock

## 2️⃣ Why only two wires?

• Address-based device selection

• Multiple devices on same bus

## 3️⃣ I2C LCD Pin Mapping

| Microcontroller | SDA Pin | SCL Pin |
|-----------------|--------|--------|
| Arduino UNO | A4 | A5 |
| ESP32 | GPIO21 | GPIO22 |
| NodeMCU (ESP8266) | D2 (GPIO4) | D1 (GPIO5) |


## 4️⃣ What stays the same?

• I2C address (0x27)

• LCD commands

• Communication flow

## 5️⃣ Program

For Arduino UNO and ESP32 :[Click here](https://github.com/Karthikeyanmac/I2C-16-2-LCD-with-three-different-microcontrollers-/blob/main/I2C_lcd.ino)

