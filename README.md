## ESP32 Generative Art Display Project
Using the TFT graphics library for Arduino, my code cycles through three different images that are made up of text on an ESP32 TTGO T-Display.

# Set-up
I used PlatformIO to build and upload the code. I have included the build file in the repo, and you should use it to get the same results. In order to upload the code, you need a USB-C cable to connect to the ESP32 with the opposite end of the cable being compatible with your computer. Make sure that whatever cable you are using is a data cable, otherwise you will only be able to power the device and not be able to upload code. Once you connect the ESP32 to your computer, it should turn on and you can use PlatformIO's upload command to upload the built code.

Image lol

# Art Display
After uploading the code, the ESP32 should now be displaying the image above. If you want to hang the display as shown here, you need to use a battery with a JST connector, some thread, and electrical tape. Using a pair of keys, you can wedge the back cover off of the ESP32 to connect the battery. I found that after doing this, I was not able to fit the cover back on, so I taped the battery in place with the thread put in between. I then used additional tape to secure the thread to the top of the device. One thing to consider with this connection method is that is puts constant stress on the tape so it may peel back, so this may not be ideal for long-term installations.
