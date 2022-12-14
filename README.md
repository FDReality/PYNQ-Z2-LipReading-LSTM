# 基于PYNQ-Z2的唇语识别神经网络加速器
# 1.简介
该项目为2022年全国大学生FPGA创新设计竞赛一等奖作品，将此项目开源，感谢GitHub上诸多大佬无私的分享。这是本人第一次使用GitHub开源，如有问题还请多多包涵
具体内容参见另外一个Branch-master，不是很懂Git上这个分支是怎么安排的（进行一个烂的摆）
# 2.项目介绍
1.HLS LSTM网络IP核的搭建，主要由DMA接口设计和主体网络计算推导两部分组成，生成的IP导入Vivado中构建电路。这里想要做详细了解的可以去看Xilinx官方的PYNQ使用教程。其中还包含一个weight文件，可以将其中内容换成自己LSTM网络训练出的权重和偏置。  
2.Vivado 电路主要由DMA、LSTM、ZYNQ三个核心组成，具体的连接图可以参考哈工大的深度神经网络结构教学，该项目也是站在“巨人肩膀”上才艰难实现的，这里感谢他们对入门者无微不至的详细讲解。  
3.Jupyter Notebook 上面主要包括权重文件和硬件Overlay文件，主体执行程序详见三个.ipynb文件，程序实现功能笼统来说就是三个部分，将PYNQ做为发送端到电脑接受摄像头捕获的图像；opencv抓取嘴部特征；截取嘴部图片通过DMA送入LSTM推导IP核并获得输出结果。  
4. Pycharm main.py文件为电脑做为接收端，获取图片并显示。其他三个文件用来建立自己的训练集并进行LSTM模型建立，输出模型的权重和偏置（Pytorch）。另：.m文件是我在Matlab上做数据处理用的，详情可以参考 https://www.cnblogs.com/picassooo/p/13504533.html  
# 3.问题总结
在PYNQ-Z2开发的过程中遇到了各种各样的问题，包括连不上网、不正常工作、无法开机等等等等等等等等等等问题，这里做个小的总结：  
1.刚拿到板子的时候可以直接去找板子入门的资料，***严格***按照上面说的来做。此处建议安装串口助手（Putty），可以直接从端口访问到板子，方便排查问题和联网。  
2.如果第一次拿到板子想尽各种方法都无法正常使用板子，在排除SD卡烧录文件、跳线帽、供电、网线等等问题后，可以怀疑是板子坏掉了。倒霉蛋如是说  
3.usb线需要注意是带有数据传送功能的，普通的只有充电功能的线可能会存在一定问题。  
4.可以通过资源管理器直接访问板载文件 ***//pynq//xilinx*** 如果网络中找不到该目标，可以参考 https://blog.csdn.net/qq_33451523/article/details/106301488  
5.如果无法通过浏览器访问Jupyter，且板载文件可以正常访问，串口也显示正常，可以重新烧录SD卡的image镜像，此处建议先对板载文件复制。  
6.如果偶尔发现电源指示灯正常，而板子没有启动，即蓝黄灯不亮，可以将SD卡拔出，朝他吹气（雾），在重新插入检查是否可以正常启动。看起很离谱但是确实有效emmmmm  
7.板子联网教程详见 https://blog.csdn.net/qq_40178878/article/details/102883729   
遇到问题，善用各种搜索软件，我在开发过程中遇到的种种设备上的问题都在网上找到了答案，这里先感谢分享病因的前辈们，再大致将问题总结如上，**肯定不全面**，但希望能尽量减少后人要走的弯路  
# 4.写在最后
