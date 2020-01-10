/*raspberrypi can 框架*/
#include <stdlib.h>
#include <stdio.h>
#include "MCP2515.h"
#include "mcp2515_new.h"
int main(int argc, char const *argv[])
{
	unsigned char len;
	unsigned char bufRx[9];
	unsigned char bufTx[8] = {1,2,3};
	unsigned char msgID;
	if (MCP2515_Init() == 1)
	{
		return 1;
	}
	while (1)
	{
		len = CAN_Receive_Buffer(bufRx); len返回接收到的字节数；数据放到bufRx, bufRx[len]为发送方id.
		len = 3;定义发送字节数
		CAN_Send_Buffer(bufTx, len, 0x45);发送bufTx数组内容；len发送字节数；0x45发送id
	}
	return 0;
}
