# Final Project Mata Kuliah Intrusion Detection System (IDS)
## Kadek Nesya Kurniadewi (05311840000009)

## Voice Command Door Lock
Dimana dalam project ini saya membuat Kunci Pintu dengan Voice Command yang bisa dikontrol dengan suara kita.
- Saat saya mengatakan "Door Lock" maka pintu akan terkunci
- Saat saya mengaatakan "Door Unlock" maka pintu akan terbuka (tidak terkunci)
### Component and Supplies
1. Arduino UNO R3
2. Kabel Jumper
3. Car Door Lock Actuator
4. Relay 12 volt
5. BD139 Transistor
6. 2.2k Resistor
7. Adapter Wire 12 volt
8. Bluetooth Module HC-05
9. Door Lock
### Alat dan Mesin
1. Lem Tembak/Lem G
2. Soldering Iron
### Aplikasi
1. Arduino UNO pada PC untuk menyambungkan code menuju arduino
2. Arduino Voice Command

## Cara Pembuatan :
1. Membuat rangkaian alat seperti gambar dibawah ini :

![rangkaianalat](https://github.com/NesyaKurnia/FinalProject_IDS_05311840000009_Kadek-Nesya-Kurniadewi/blob/main/rangkaianalat.jpg)

- Connect collector points of transistors to -ive points of relay 1 and relay 2
- Connect +ive wire to NC points of relays 3 and 4
- Connect +ive wire to +ive points of relays 3 and 4
- Connect +ive wire to +ive points of relays 2 and 1
- Connect -ive wire to ON points of relays 3 and 4
- Connect -ive wire to emittor point if transistors
- Connect wire to -ive point of relays 3 and COM point of relay 2
- Connect wire to -ive point of relays 4 and COM point of relay 1
- Connect -ive wire to emittor point if transistors
- Connect resistors to base points of transistors
Car Door Lock connect :
- Connect black wire of car door lock actuator to -ive
- Connect green wire of car door lock actuator to COM point of relay 4
- Connect blue wire of car door lock actuator to COM point of relay 3
- Connect brown wire of car door lock actuator to ON point of relay 1
- Connect white wire of car door lock actuator to ON point of relay 2
Connect to Arduino :
- Connect jumper wire to resistors
- Connect to pin 11 and 12 of arduino
Connect Bluetooth to Arduino :
- Connect jumper wires to bluetooth module
- Connect bluetooth wire to +ive 5 volt and GND
- Connect Rx to Tx and Tx to Rx of arduino and bluetooth module
Connect batery to 12 volt supply
2. Sambungkan kode dari PC/Laptop menuju Arduino (code dapat dilihat [disini](https://github.com/NesyaKurnia/FinalProject_IDS_05311840000009_Kadek-Nesya-Kurniadewi/blob/main/ids.ino) )
3. Sambungkan baterai ke alat yang sudah dirangkai
4. Connect dengan Bluetooth menggunakan aplikasi Arduino Voice Command
