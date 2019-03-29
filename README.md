# mCube_mc36xx_data_notifcation_DA14585
Reference design with mCube mc36xx family on Dialog 14585.

DA14585/DA14586 Reading out an I2C accelerometer and sending notification data
==============================================================================
Example description
This SDK6 DA14585 example shows how to communicate with an I2C accelerometer sensor. The sensor data gets sent over BLE with a notification.

EVA3635/EVA3672 is necessary to run this example. Defining M_DRV_MC36XX_CFG_BUS_I2C in m_drv_mc36xx.c to set sensor running in I2C mode. The application will read sensor data and transmit over BLE in this case.

This example also includes DEMO of sniff and FIFO modes which are special features of mc36xx series. Define SNIFF_DEMO or FIFO_DEMO in user_accelerometer.h. When enable SNIFF_DEMO, sensor will set to sniff mode after 32 samples. It can be waked up once user shake it. 32 samples will be read out and go back to sniff mode again. When enable FIFO_DEMO, sensor will load all the data from FIFO and send the 1st raw data over BLE.

HW and SW configuration
Hardware configuration
This example runs on The DA14585/DA14586 Bluetooth Smart SoC devices.
The Basic or pro Development kit is needed for this example.
Connect the SCL pin of the EVA3672 to pin 1-0 of the development board.
Connect the SDA pin of the EVA3672 to pin 1-2 of the development board

The I2C pins are defined in the m_drv_interface.h file.

The SDO pin is used to select the I2C address, the standard setting in m_drv_mc36xx.c is for SDO low which address is 0x4C.
Connect the USB Development kit to the host computer.
Software configuration
This example requires:
SDK6.0.10
A smartphone with a BLE scanning app (for example BLE scanner on Android or Lightblue on IOS)
SEGGER’s J-Link tools should be downloaded and installed.
How to run the example
For initial setup of the example please refer to this section of the dialog support portal.

Compile and run the project mCube_mc36xx_data_notifcation in Keil µVision 5. Optionally, change the parameters in m_drv_mc36xx.c. Open the BLE scanner app and look for DLG-ACCL. Connect to the device and subscribe to the notifications. You should now be able to see the live X, Y and Z acceleration (in milli g).
