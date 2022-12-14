#导入socket模块
import socket
import cv2
import numpy
#创建socket
skt = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
#绑定地址和端口
skt.bind(('192.168.137.1', 6050))
#循环
while True:
    #调用接受消息
    data, addr = skt.recvfrom(65507)
    print(data)
    data = numpy.fromstring(data, dtype='uint8')  # 按uint8转换为图像矩阵

    image = cv2.imdecode(data, 1)  # 图像解码


    cv2.imshow("1", image)  # 展示图片
    cv2.waitKey(1)

    #接受成功回复消息

    print('server Done')
    #关闭链接
skt.close()