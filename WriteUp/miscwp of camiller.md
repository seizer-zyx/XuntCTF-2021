## 一、MISC学习（一）
同样先附上链接🔗

```
https://www.xuntctf.top/challenges
```

 - **真·pdf** 
![在这里插入图片描述](https://img-blog.csdnimg.cn/f8efd17066374746ac94f933d9109c94.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)下载后直接用pdf方式打开，可以看到一张猪猪侠的图

![在这里插入图片描述](https://img-blog.csdnimg.cn/b90afc1b7a8945d4a44660669746606e.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)直接Ctrl+A全选复制，在记事本中粘贴即可看到flag
![在这里插入图片描述](https://img-blog.csdnimg.cn/45abd21a1cd24465a28e22d97f08057c.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)

 - **图片有四种格式**
![在这里插入图片描述](https://img-blog.csdnimg.cn/b929ca2ebf634f56873f21dbe44252ee.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)![在这里插入图片描述](https://img-blog.csdnimg.cn/103c488636d44c4a87b8f4a963bd0ed6.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)文件 -- 打开文件  打开保存文件后会发现16进制的代码
![](https://img-blog.csdnimg.cn/aa0900cfe6f4461ca6f97911a28e9ed9.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)
下拉至最后，会在右侧发现flag
![在这里插入图片描述](https://img-blog.csdnimg.cn/def5e9ab79f44f5493f9caea1149e6d9.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)
 - **我的flag裂开了**
 ![在这里插入图片描述](https://img-blog.csdnimg.cn/570d9059fb6a4b8ea9a83aec62107932.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)下载后为.rar文件，解压后发现两个图，分别是jpg 和 png的形式。 
![在这里插入图片描述](https://img-blog.csdnimg.cn/7b56c7d70b844c6dbd476d1f7bcada74.png)点开后，不出意料地打不开.......提示说：看看少了什么东西，迷惑！！！然后去搜搜，发现常见的jpg和png的头文件和尾文件，于是再次用010Editor打开两个文件瞅瞅（同时附上CTF中常见文件头和文件尾：https://blog.csdn.net/qq_43504939/article/details/100116770）

![在这里插入图片描述](https://img-blog.csdnimg.cn/470417d3e8a54600b85869d4dd004c00.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_12,color_FFFFFF,t_70,g_se,x_16)
打开后，不出意料地，果然.....（瞅过一眼，文件尾没问题）![在这里插入图片描述](https://img-blog.csdnimg.cn/707511aa3d1b4d0ea674e5a8b1afee7c.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)![在这里插入图片描述](https://img-blog.csdnimg.cn/ff66956069354649868e90ee91d92ff8.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)直接修改保存,再次打开时，amazing。。。
![在这里插入图片描述](https://img-blog.csdnimg.cn/2fbae590c63b47a28165dc535b0679b2.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)flag就成功找到了，自己拼一下就OK啦

 - **这就是个excel**
因为题目告诉了就是一个excel，所以打开下载文件时直接用WPS表格打开
![在这里插入图片描述](https://img-blog.csdnimg.cn/f730779f08ce4463a55f6fe28eb40f3e.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)啥也不懂，乱点，发现有的上面fx显示为1，有些空白，还是蛮懵逼的，然后就是去搜了下ctf中excel常见提醒设置，知道是二维码。然后就右键-设置单元格格式-自定义-确定，最后就发现框里的1都显示出来了

![在这里插入图片描述](https://img-blog.csdnimg.cn/a4d46350ae9e4f53bb16da534bc413c9.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)然后把它转换为黑白框
![在这里插入图片描述](https://img-blog.csdnimg.cn/1ccf823caed742be89fb287790196e80.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)![在这里插入图片描述](https://img-blog.csdnimg.cn/44554ebc6aad40618da2f46e07d4c433.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)
因为平时我们骚的二维码都是正方形，所以我们调整行列宽距，一模一样的就可以
![在这里插入图片描述](https://img-blog.csdnimg.cn/0baba2d435604f08a4934ae3b5f7aeb4.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)呐，扫描一下就OK啦

 - **Megumin** 
这个所带的附件是一个gif的动图，下载后用Stegsolve打开，Anaylse-frame brower,之后会发现226帧，一帧一帧分析，会发现一个彩色二维码，但是它的码角被挡住了，把它替换掉
![在这里插入图片描述](https://img-blog.csdnimg.cn/ea247cdd073142808c9a51ca66c838fc.png)![在这里插入图片描述](https://img-blog.csdnimg.cn/223f320ba89a4c47900f928005750913.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_18,color_FFFFFF,t_70,g_se,x_16)再次扫描就OK啦。


然后有两个我自己学习misc时的一个大概了解的网站
[CTF学习-MISC杂项解题思路](https://blog.csdn.net/qq_44204058/article/details/119963209?spm=1001.2014.3001.5506)               
[CTF杂项知识点](https://blog.csdn.net/weixin_46555037/article/details/108910195?spm=1001.2014.3001.5506)
这次分享就到这里啦.....


