# Node-MCU-Sensor-Network-
Having multiple sensors at a place is quite common these days. So why not create a sensor network that sends all the data to a Master and also an android app? This project focuses on the concept of creating a sensor network with multiple slaves and a master.

# How does it work?
I used a TCP server for this purpose. The TCP(Transfer Communication Protocol) generally gets the data from the IP address of each end point node that acts a slave. This is inturn accesed by the Master which will print the data in the serial monitor. We can configure it be displayed on a OLED. The data from the slaves or clients can also be accessed through a mobile app provided if it is connected in the same netwrok.

# Advantages
1.You dont need a server to read the live data with this way. Here your IP address is bieng used as your server.
2.The data is far more secure and not tamperable easily as it works in your network alone,

# Disadvantages
1.It works only when you are connected to a same network.

Iam trying to figure out how to access the data independently when we are connected on a different network.
