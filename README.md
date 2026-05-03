# Pathfinder-with-knob
This device features a XIAO RP2040, 3 switches, and a knob. Each has its specific function configured via code.
Here are some photos of the schematic and finished PCB.
<img width="611" height="748" alt="image" src="https://github.com/user-attachments/assets/f3fadae8-89b8-4e1a-9880-45e22c42a8b8" />
<img width="689" height="775" alt="image" src="https://github.com/user-attachments/assets/6de655fb-e70c-48ed-b7e1-773be43cd4e9" />
<img width="620" height="740" alt="image" src="https://github.com/user-attachments/assets/225cfd2d-b165-407b-a478-02ea6202c422" />
And the scheme: 
<img width="862" height="514" alt="image" src="https://github.com/user-attachments/assets/0d602a3e-6c76-494c-a334-c368b4422fa5" />
## Specs
Brain: Seeed Studio XIAO RP2040.

PCB Dimentions: 62.53 mm * 77.96 mm

Inputs: 3 Mechanics switches + 1 Encoder EC11 with bttn.

Outpots: 3 LEDs 

Voltage: 3.3V.

### BOM on table
[Path rotary-bom.csv](https://github.com/user-attachments/files/27323156/Path.rotary-bom.csv)

Name,Purpose,Quantity,Total Cost (USD),Link,Distributor
"Resistors (220Ω - 330Ω)","Resistors for LEDs (I already have it)",1,0.00,"https://es.aliexpress.com/item/1005010049798113.html","I already have it"
"PCB Pathfinder","PCB board designed",1,2.00,"https://jlcpcb.com/","JLCPCB"
"LEDs","Indicator LEDs (I already have it)",3,0.00,"https://es.aliexpress.com/item/1005001414503004.html","I already have it"
"Mechanical Switches","Mechanical switches for the keys.(I already have it)",3,0.00,"https://es.aliexpress.com/item/1005006396423418.html","I already have it"
"Rotary Encoder (Knob)","Rotary encoder with integrated push button.",1,1.00,"https://es.aliexpress.com/item/1005009889978797.html","Aliexpress"
"Seeed Studio XIAO RP2040","Microcontroller",1,4.52,"https://es.aliexpress.com/item/1005006987582110.html","Aliexpress"
