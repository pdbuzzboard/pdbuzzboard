# Disclaimer
This product is not a medical device and is not intended to diagnose, treat, cure, or prevent any disease or medical condition. It should not be used as a substitute for professional medical advice, diagnosis, or treatment. Always consult with a qualified healthcare professional before making any decisions related to your health or using this product in conjunction with a medical treatment plan.

# Introduction
This is a repository for files associated with the PD Buzzboard.  It is open and free to copy.  Any questions can be sent to pdbuzzboard@gmail.com. I hope this content will bring relief to your PD partner as it has to mine.

The PD Buzzboard project has a few variations:
- The "PD Buzzboard" itself, which is a board which sits in your lap, and has vibrating motors on each finger. Users can put this in their lap, place their fingers on the motors, and get vibration on their fingers. This is easiest to build, but users must stay stationary while using.
- The "PD Buzzboard Gloves with One Controller". This variation has a central controllers running the vibration program, typically used in a fanny pack, and wires running from the fanny pack to the gloves. This is more mobile than the buzzboard, as users can walk and move around, but there are some central cables which can get caught on things.
- The "PD Buzzboard Gloves with Separate Controllers". This variation has separate controllers on each hand. This is the hardest to build, but has the most mobility.

# PD Buzzboard
This project will typically take a few hours to build the first time, if you have all the parts and supplies

## Parts & Equipment
### Equipment

This is equipment you must have:
- Soldering Iron - Any one should do, but getting one with clips will make it easier. Here is a random one that should work on Amazon: https://www.amazon.com/Soldering-Iron-Station-Kit-Temperature/dp/B09T3BTDWZ
- Heat Gun - Any heat gun should do, here is one that should work: https://www.amazon.com/SEEKONE-Handheld-Reflector-Embossing-Stripping/dp/B08VFY8THD
- Small phillips head screwdriver
- Computer to program it

### Parts

Working with parts like these, note that they will fail much more often than you would expect of normal consumer products. If you have the budget, I'd recommend getting extras of every part.

- Arduino Uno R3 -	https://www.amazon.com/dp/B008GRTSV6
- USB A-B cable - https://www.amazon.com/AmazonBasics-USB-Printer-Cable-Male/dp/B00NH13DV2
- HiLetgomotorshield – 4 motor	https://www.amazon.com/dp/B01DG61YRM?psc=1&ref=ppx_yo2ov_dt_b_product_details
- Vibrating Motors. We recommend the ones following the Stanford spec: 15,000 rpm -   (meet Stanford spec)	https://www.digikey.com/en/products/detail/vybronics-inc/VW0625AB001G/9974285 but you can use these as an alternative, although their rpm are 12,000 instead of 15,000.	https://www.amazon.com/dp/B0989GN2XY
- Arduino case	https://www.amazon.com/dp/B00UBT87XM OR https://www.amazon.com/gp/product/B0BSLR5LHB (this second one can contain both the motor shield and the Arduino together)
- 1/8”, ¼”, 3/8” heat shrink tubing	https://www.amazon.com/dp/B084GDLSCK
- 22GA wire red and black 	https://www.amazon.com/dp/B07JNRJW37
- USB on off power switch	https://www.amazon.com/dp/B07QQZFYYJ
- USB to power cable	https://www.amazon.com/dp/B0BLKMDM66
- USB power splitter cable	https://www.amazon.com/dp/B085BJRZN2
- Battery power pack (at least 2Amp USB A Output)	
- Command decorating tabs	- https://www.amazon.com/Command-White-Decorate-Damage-Free-17026-40ES/dp/B000M3YGHS
- Lap desk	https://www.amazon.com/dp/B09FTM5XZX
- Wrist rest	https://www.amazon.com/dp/B07D3QJ8WQ
- 2 sided self adhesive velcro	- https://www.amazon.com/Mounting-Double-Side-Reclosable-Fastener-Waterproof/dp/B07CBT5FVP
- Small Cable ties	- https://www.amazon.com/AmazonBasics-Multi-Purpose-Cable-Ties-200-Piece/dp/B087MKMSDY

## Instructions
For instructions on assembly, look here: https://www.youtube.com/watch?v=1PfsVjnPAuQ&t=1456s

### Prepare Central Board
- Take your Arduino Uno and attach the Motor Shield to the top of the Arduino. Line up the motor shield to the end of the board.
- Put your Arduino and Motor Shield into a case.
- Remove the jumper from the Motor Shield.
- Connect USB power source to Motor Shield.
- Connect USB power source to Arduino.

### Prepare Vibrating Motors
- Cut 16 wires total to length. 8 black wires and 8 red wires.
- Strip the ends of the wires.
- Solder the wires to the vibrating motors. Match the red wire from the motor to the red wire, and match the black wire from the motor to the black wire.

### Cover Vibrating Motors With Protective Covers
- Take 4 1/8 heat shrink tubes and cut them in half, so you have 8.
- Take 4 1/4 heat shrink tubes and cut them in half, so you have 8.
- Take 4 3/8 heat shrink tubes and cut them in half, so you have 8.
- Insert a 1/8 heat shink tubing over the black wire, push all the way to the end.
- Insert a 1/4" heat shrink tube and push it over the red and black wires, pushing it all the way to the end.
- Use the heat gun to shrink it.
- Slide 3/8 heat shrink tube over the 1/4" head shield and the motor.
- Use the head gun on this.
- Repeat for all fingers.

### Install Arduino Software
- Install Arduino IDE
- Plug in Arduino
- Install Adafruit Motor Shield Library
- Upload the sketch

### Attach Vibrating Motors to Arduino Motor Shield
- Attach 2 motors into each "slot" in the Arduino Motor Shield. This is because "Motor 1" slot in the motor shield is sending a pattern for "finger 1 on each hand". So 2 blacks and 2 reds in motor 1 and 2 blacks and 2 reds in motor 2, and same for motor 3 and motor 4.
- Tighten the motor shield screws to ensure the motors are held firmly in place.

### Assemble Lapboard
- Place laboard on table, and put wrist guard on end.
- Have the user place their fingers on the board, and mark each spot.
- Label the fingers as 1, 2, 3, 4, with 1 being the index finger and 4 being the pinky finger.
- Place decorating stickers on each spot. 
- Add the central controller (Arduino) to the top-center of the board, securing it with 2 sided velcro.
- Put the correct vibrating motor to each number. For example, the 2 motors coming from the M1 slot on the Arduino Motor Board go to the 1 finger slot. 
- Add cable tie to secure the motor in place.

### Final Power Assembly
- Put the motor shield and arduino power cables into a Y-splitter, so they have 1 usb powering both.
- Put that usb power into a switch.
- Plug the switch into your battery pack.

### Turn It On and Check It
- Turn it on, and check to see if the light inside is flashing.
- It should work in a pattern, with each finger vibrating. This video shows how it should work and sound: https://www.youtube.com/shorts/loSCJDZAPkg



# PD Buzzboard Gloves with One Controller

## Parts List
Coming soon...

## Instructions
More instructions coming soon...

For assembly of the gloves themselves, look here: http://www.youtube.com/watch?v=Otokrrb2WSU 

For assembly of the electrical compontents, look here: https://www.youtube.com/watch?v=dvRL9_7ok0E&t=57s

# PD Buzzboard Gloves with Separate Controllers

## Parts List
Amazon.com: HiLetgo 3pcs Pro Mini Atmega328P 5V/16M Replace ATmega128 Pro Mini Atmega328 328P DC5V 16M for Arduino : Electronics

Amazon.com: Amazon Basics USB 2.0 Charger Cable - A-Male to Mini-B Cord - 3 Feet (0.9 Meters) for Personal Computer. : Electronics

ELECTOP 2 Pack Male to Female USB Cable with On/Off Switch, USB Extension Inline Rocker Switch for Driving Recorder, LED Desk Lamp, USB Fan, LED Strips (amazon.com)

Terminal Block White Screw Terminal Connector Dual Row Electric Barrier Block 12-Position Terminal Strip, 10 Amp 380 V (20): Amazon.com: Industrial & Scientific

finger cots

Amazon.com: ZEPOHCK 10 Pcs Cut Resistant Protection Finger Cots, Finger Sleeve, Finger Cover Life Extender for Kitchen, Work, Sculpture, Anti-Slip, Reusable : Health & Household

archery glove not the exact one I use, but close enough.  you can get cheap ones from China.

Allen Super Comfort 3 Finger Archery Glove | Dick's Sporting Goods (dickssportinggoods.com)

BNTECHGO 26 Gauge Silicone Wire Spool Red and Black Each 25ft 2 Separate Wires Flexible 26 AWG Stranded Tinned Copper Wire: Amazon.com: Tools & Home Improvement

4" cable ties

You'll need a 5v 2A battery pack per hand.

Velcro for wrist strap - Reusable Hook & Loop Strong Grip Fastener Roll 2" x 16' (2" Wide, 16 Feet Long) - Black
https://www.amazon.com/gp/product/B07FLQBG4P/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1

## Instructions
More instructions coming soon...

# Vibration Sensor
To know if your PD Buzzboard is working correctly, you will need a vibration sensor.

## Parts List
Ardiuno Nano - https://www.amazon.com/Arduino-Nano-Every-Single-Board/dp/B07VX7MX27
Vibration Sensor - https://www.amazon.com/gp/product/B0829SZFBL (this was used successfully) OR https://www.amazon.com/gp/product/B07KS5NV4V/ (ordered but not yet tested)

## Instructions
This video gives you the instructions to build it:
https://www.youtube.com/watch?v=qlr-2mkvalQ

## Updated Motor Shield Glove controller (RJ-45) parts list

Outdoor water proof power box 150x110x70 https://www.aliexpress.us/item/2255800845591229.html?spm=a2g0o.order_list.order_list_main.35.25ff1802jqD6wx&gatewayAdapt=glo2usa
RJ-45 cable - controller to glove RJ-45 cable to connect to gloves https://www.aliexpress.us/item/2251832820215572.html?spm=a2g0o.order_list.order_list_main.53.767d1802Ah7Ld3&gatewayAdapt=glo2usaRJ-45 c
RJ-45 passthrough (for the housing)  SELECT STRAIGHT https://www.aliexpress.us/item/3256801104527755.html?spm=a2g0o.order_list.order_list_main.81.585b1802S5D2YO&gatewayAdapt=glo2usa
RJ-45 screw terminal (back of glove) https://www.amazon.com/dp/B09GFF83KV?psc=1&ref=ppx_yo2ov_dt_b_product_details
RJ-45 cables 1 foot for interior of controller https://www.amazon.com/dp/B08MB6XTZK?ref=ppx_yo2ov_dt_b_product_details&th=1

The rest of the parts are commoon to the buzzboard / motorshield gloves (see above)

## Instructions
This video gives you the instructions to build the updated controller housing / RJ-45 gloves
https://www.youtube.com/watch?v=W2gthMw9JYo
