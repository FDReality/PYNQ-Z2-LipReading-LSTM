import torch
import torch.nn as nn
import numpy as np

np.set_printoptions(threshold=np.inf)       # 不限制numpy显示的列数
np.set_printoptions(suppress=True)          #设置numpy数据不以科学计数法输出
np.set_printoptions(linewidth=np.inf)       #设置numpy每一行显示的个数，这里直接设置为最大值


pthfile = r'C:/Users/fd_reality/Desktop/Ceshi/weight.pth'

net = torch.load(pthfile)

# print(type(net)) # 类型是 dict
# print(len(net)) # 长度为 4，即存在四个 key-value 键值对
# print(net)
for k in net.keys():
    print(k) # 查看四个键，分别是 model,optimizer,scheduler,iteration


class Rnn(nn.Module):
    def __init__(self, in_dim, hidden_dim, n_layer, n_class):
        super(Rnn, self).__init__()
        self.n_layer = n_layer
        self.hidden_dim = hidden_dim
        self.lstm = nn.LSTM(in_dim, hidden_dim, n_layer, batch_first=True)
        self.classifier = nn.Linear(hidden_dim, n_class)

    def forward(self, x):
        out, _ = self.lstm(x)
        out = out[:, -1, :]
        out = self.classifier(out)
        return out

net = Rnn(28, 64, 1, 5)
net.state_dict()
net.load_state_dict(torch.load(pthfile))
net.eval()


parameters = net.parameters()
for p in parameters:
    numpy_para = p.detach().cpu().numpy()
    print(type(numpy_para))
    # print(numpy_para)
    print(numpy_para.shape)
    # print(numpy_para)  # 取第一列和第二列
    print(numpy_para)  # 取第一列和第二列
    np.savetxt('D:/FPGA/PLDChunyu/22/test1.txt',numpy_para,delimiter=',')
