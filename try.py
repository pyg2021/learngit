import torch
from torchvision.models import vgg16  # 以 vgg16 为例
from tensorboardX import SummaryWriter

mynet = vgg16()  # 实例化网络，可以自定义
x = torch.randn(4, 3, 32, 32)  # 随机张量
with SummaryWriter(log_dir='') as sw:  # 实例化 SummaryWriter ,可以自定义数据输出路径
    sw.add_graph(mynet, (x,))  # 输出网络结构图
    sw.close()  # 关闭  sw