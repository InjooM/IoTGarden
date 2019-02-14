# IoTGarden for UGAHacks4
On Feb 8-10, I attended UGA's 4th MLH Hackathon.

## Team (UGA students):
- Me
  - *Year 1 Electrical*
- Joshua Barton
  - *Year 1 Mechanical*
- Daniel Ling
  - *Year 2 Electrical*
- Preston Lee
  - *Year 1 Comp Sci*

## Challenge: Best IoT Hack using a Qualcomm Device
> *Use a Qualcomm device, like the Dragonboard 410C, in your IoT project. Each winning team member will receive their own DragonBoard 410C.*

## Materials we used:
- Dragonboard 410C
- Arduino 101/Uno
- Adafruit/Sparkfun sensors

## Description of process:
### Design:
This hackathon was each of our first hackathons, and we went in with no expectations of what we were going to do. Since we had, as a group,
more hardware experience than software, we decided it would be best to create something hardware-oriented. Thus, we chose to do an IoT hack.
The idea of an automated garden came from the theme of the hackathon: "Sowing the seed for the next generation of coders."
We began with the design of the automated garden: an Arduino taking in sensor data, such as moisture levels and temperature, and somehow
adjusting those points to desired values. None of us have taken a feedback/control theory course, so we went with a simple linear feedback
system. From the Arduino, the data would somehow be transferred to the Dragonboard, and then sent to the cloud, where the data could be
monitored in real time from anywhere. We had to use the Dragonboard as our medium to the Internet, since the Arduino we were given did not
have WiFi capability. Our design process ended on the first night.

### Hardware:
On the second day, we began fabricating our ideas. We split into 2 teams: Josh and Daniel would work on creating the frame of the garden
and soldering the sensors to a perfboard, while Preston and I would work on learning cloud services and configuring the Dragonboard to work
over the Internet and with the Arduino. We worked mostly in Driftmier's Fabrication Lab, which is part of UGA's engineering department.
For the hardware, Josh and Daniel had to find a way to control water flow to the garden, but we didn't have any sort of pump. Eventually,
they came up with the idea to use a bottle shut tightly with a small vacuum inside along with a servo motor to twist the bottle cap open.
When the bottle cap was opened, air was let into the bottle, pushing the water inside the bottle through a tube leading into the garden.

### Software:
Meanwhile, Preston and I set up Internet on the Dragonboard, and experimented with different cloud services, seeing which was the easiest
to learn and use quickly. We tried Google Cloud's BigTable, Firebase, and Arduino's new IoT core, but none of them worked easily for us,
namely because of the data transfer between the Arduino and the Dragonboard. We were not sure how to export the Arduino's data onto the
Dragonboard, and originally planned on exporting the data as a .csv file, which would work easily with BigTable. However, we coudn't find
an easy way to do so. Then we thought of exporting the data as a .txt file, but that proved to be difficult as well. Finally, we settled
on exporting the data onto the Arduino IDE's serial monitor, and running a shell script on the Dragonboard that parsed the data and sent it
to a host (ThingSpeak).

## Conclusion:
The hackathon was fun, and we all learned a little bit from working with each other and with the new devices/services we were given.
Our submission can be viewed [here](https://devpost.com/software/iot-garden-s6jphb)
