# raspberry
raspberry pi can bus communication
#本教程是为树莓派和其他设备例如stm32单片机之间的can通信而作，树莓派通信模块采用MCP2515,源代码已经放在上面了，总共有五个文件，将它们一起拷贝到树莓派的某一个文件夹里，然后树莓派定位到该目录下（cd /home/pi/你的目录），然后一次运行下列代码
sudo make clean
sudo make
sudo ./helo
运行以上代码后，树莓派将能通过MCP2515与stm32进行can通信
如有不懂，可联系邮箱060643yjh@gmail.com
