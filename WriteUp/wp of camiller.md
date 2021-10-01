## 一、Web学习

## 前言：

九月份刚刚接触到CTF，非常感兴趣，虽然经常什么都还不懂，虽然电脑经常遇到千奇百怪的问题，但正是在这些磨砺中成长的，接下来的日子里，要继续加油啊！
## 正文开始
这里附上参加比赛的链接
```
https://www.xuntctf.top/
```

 

 - **外星人？**

```
http://xiyounet-ctftraing-web.node.xuntctf.top:10084/
```
打开网址后会发现一张图片，Ctrl+A全选复制，粘贴到随便一个文本框就OK!

 **- view_source**

```
http://xiyounet-ctftraing-web.node.xuntctf.top:10081/
```
打开后发现是这样：![在这里插入图片描述](https://img-blog.csdnimg.cn/cb124fd5bcbc41ac905b4cfe6d60f30c.png)直接尝试查看源代码：Ctrl+U
![在这里插入图片描述](https://img-blog.csdnimg.cn/533bd0f1cff8402da601b9655d65a266.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)flag就出现了

 - **一个不能按的按钮**


```
http://xiyounet-ctftraing-web.node.xuntctf.top:10082/
```


![在这里插入图片描述](https://img-blog.csdnimg.cn/cd059b2cb2704fadac82c9b5fd460116.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)解题思路：需要对前端中各种标签有大概的印象（HTML标签及其属性）
如：![在这里插入图片描述](https://img-blog.csdnimg.cn/5432928c88b8448594ce3911d629c4cb.png)
题目说了不能按的按钮，果然按不动，根本没有反应，这时再次尝试查看源代码：F12（Ctrl+U点了之后不能修改源代码）
![在这里插入图片描述](https://img-blog.csdnimg.cn/6fee7499fb314f43ae4d5be52d5c686d.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)删掉红色的disabled后，再尝试点击flag按钮，就可以得到flag了

 **- ezsy_request**

```
http://xiyounet-ctftraing-web.node.xuntctf.top:10083/
```
打开后发现post传参
![在这里插入图片描述](https://img-blog.csdnimg.cn/bf104f040f7646b8b70bebd6c953af98.png)在网上搜索后get到方法
![在这里插入图片描述](https://img-blog.csdnimg.cn/b51abbc6da23448fa5c9ef4b4576b8b3.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)

[学习方法网址](https://blog.csdn.net/weixin_44614983/article/details/104127108?ops_request_misc=&request_id=&biz_id=102&utm_term=ctfwebget%E5%92%8Cpost%E4%BC%A0%E5%8F%82&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-0-104127108.pc_search_result_hbase_insert&spm=1018.2226.3001.4187)
![在这里插入图片描述](https://img-blog.csdnimg.cn/0ddbedeb49a34e4099c85a149e868de0.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)点击F12，使用Hackbar完成post传参（添加方法🔗里也有）
![在这里插入图片描述](https://img-blog.csdnimg.cn/8d9ca9798c2449bfa6026441a4b1d31f.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)
![在这里插入图片描述](https://img-blog.csdnimg.cn/117016b7a6ce44c583ae0d32a8b32496.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)🆗，大功告成

 **- 夹心饼干**
 ![在这里插入图片描述](https://img-blog.csdnimg.cn/af664ae056dc428cbd962b7c934f80ea.png)在网上搜索夹心饼干，可以了解到：Cookie实际上是一小段的文本信息。客户端请求服务器，如果服务器需要记录该用户状态，就使用response向客户端浏览器颁发一个Cookie。客户端浏览器会把Cookie保存起来。当浏览器再请求该网站时，浏览器把请求的网址连同该Cookie一同提交给服务器。服务器检查该Cookie，以此来辨认用户状态。[^1]

跳转页面后，按F12，选择网络，点击“重新载入”。
![在这里插入图片描述](https://img-blog.csdnimg.cn/6ed05d7d013744dd9ed1c0337895cc24.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)点击第一行，会发现“Look-Here=cookie.php”![在这里插入图片描述](https://img-blog.csdnimg.cn/fea49d446b6547e4bf716498ff92b3d6.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)在url加上“/cookie.php"访问
![在这里插入图片描述](https://img-blog.csdnimg.cn/380402d11b6a4bfe97ddc0c0569860f0.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)再次点击第一行即可发现flag
![在这里插入图片描述](https://img-blog.csdnimg.cn/cc33c2ea7ac54278b159706fb02ba269.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)
[^1]: ：Cookie实际上是一小段的文本信息。客户端请求服务器，如果服务器需要记录该用户状态，就使用response向客户端浏览器颁发一个Cookie。客户端浏览器会把Cookie保存起来。当浏览器再请求该网站时，浏览器把请求的网址连同该Cookie一同提交给服务器。服务器检查该Cookie，以此来辨认用户状态。原文链接：https://blog.csdn.net/weixin_45599193/article/details/108127429

 **- 一起来玩啊**

```
http://xiyounet-ctftraing-web.node.xuntctf.top:10086/
```
进来之后，俄罗斯方块，嗯？？？大型迷惑现场![在这里插入图片描述](https://img-blog.csdnimg.cn/0ebd32acd8d946f5ab83cd85b49487f2.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)静静的看着游戏结束后，看到提醒
![在这里插入图片描述](https://img-blog.csdnimg.cn/def5ded44bd74a4db5f2be692bf7250c.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)这时按F12查看源代码，在网络里可以发现：
![在这里插入图片描述](https://img-blog.csdnimg.cn/efd5b6a960d74fe6adac11c303cdf6f3.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)
点击两次，跳转页面
![在这里插入图片描述](https://img-blog.csdnimg.cn/7621b2ef3a78420691455dd09d0497b5.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)在url中将0修改为1k,10k或100k,进行尝试，发现score=100000时，flag就显示出来了
![在这里插入图片描述](https://img-blog.csdnimg.cn/2b0aec8a6be147d8aa0d34255f7fbf25.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBATHhza3kyMzg=,size_20,color_FFFFFF,t_70,g_se,x_16)

## 一、MISC学习（一）

同样先附上链接🔗

```
https://www.xuntctf.top/challenges
```

 - **真·pdf** 
   ![在这里插入图片描述](E:\Typora\images\f8efd17066374746ac94f933d9109c94.png)下载后直接用pdf方式打开，可以看到一张猪猪侠的图

![在这里插入图片描述](E:\Typora\images\b90afc1b7a8945d4a44660669746606e.png)直接Ctrl+A全选复制，在记事本中粘贴即可看到flag
![在这里插入图片描述](E:\Typora\images\45abd21a1cd24465a28e22d97f08057c.png)

 - **图片有四种格式**
   ![在这里插入图片描述](E:\Typora\images\b929ca2ebf634f56873f21dbe44252ee.png)![在这里插入图片描述](E:\Typora\images\103c488636d44c4a87b8f4a963bd0ed6.png)文件 -- 打开文件  打开保存文件后会发现16进制的代码
   ![](E:\Typora\images\aa0900cfe6f4461ca6f97911a28e9ed9.png)
   下拉至最后，会在右侧发现flag
   ![在这里插入图片描述](E:\Typora\images\def5e9ab79f44f5493f9caea1149e6d9.png)
 - **我的flag裂开了**
   ![在这里插入图片描述](E:\Typora\images\570d9059fb6a4b8ea9a83aec62107932.png)下载后为.rar文件，解压后发现两个图，分别是jpg 和 png的形式。 
   ![在这里插入图片描述](E:\Typora\images\7b56c7d70b844c6dbd476d1f7bcada74.png)点开后，不出意料地打不开.......提示说：看看少了什么东西，迷惑！！！然后去搜搜，发现常见的jpg和png的头文件和尾文件，于是再次用010Editor打开两个文件瞅瞅（同时附上CTF中常见文件头和文件尾：https://blog.csdn.net/qq_43504939/article/details/100116770）

![在这里插入图片描述](E:\Typora\images\470417d3e8a54600b85869d4dd004c00.png)
打开后，不出意料地，果然.....（瞅过一眼，文件尾没问题）![在这里插入图片描述](E:\Typora\images\707511aa3d1b4d0ea674e5a8b1afee7c.png)![在这里插入图片描述](E:\Typora\images\ff66956069354649868e90ee91d92ff8.png)直接修改保存,再次打开时，amazing。。。
![在这里插入图片描述](E:\Typora\images\2fbae590c63b47a28165dc535b0679b2.png)flag就成功找到了，自己拼一下就OK啦

 - **这就是个excel**
   因为题目告诉了就是一个excel，所以打开下载文件时直接用WPS表格打开
   ![在这里插入图片描述](E:\Typora\images\f730779f08ce4463a55f6fe28eb40f3e.png)啥也不懂，乱点，发现有的上面fx显示为1，有些空白，还是蛮懵逼的，然后就是去搜了下ctf中excel常见提醒设置，知道是二维码。然后就右键-设置单元格格式-自定义-确定，最后就发现框里的1都显示出来了

![在这里插入图片描述](E:\Typora\images\a4d46350ae9e4f53bb16da534bc413c9.png)然后把它转换为黑白框
![在这里插入图片描述](E:\Typora\images\1ccf823caed742be89fb287790196e80.png)![在这里插入图片描述](E:\Typora\images\44554ebc6aad40618da2f46e07d4c433.png)
因为平时我们骚的二维码都是正方形，所以我们调整行列宽距，一模一样的就可以
![在这里插入图片描述](E:\Typora\images\0baba2d435604f08a4934ae3b5f7aeb4.png)呐，扫描一下就OK啦

 - **Megumin** 
   这个所带的附件是一个gif的动图，下载后用Stegsolve打开，Anaylse-frame brower,之后会发现226帧，一帧一帧分析，会发现一个彩色二维码，但是它的码角被挡住了，把它替换掉
   ![在这里插入图片描述](E:\Typora\images\ea247cdd073142808c9a51ca66c838fc.png)![在这里插入图片描述](E:\Typora\images\223f320ba89a4c47900f928005750913.png)再次扫描就OK啦。


然后有两个我自己学习misc时的一个大概了解的网站
[CTF学习-MISC杂项解题思路](https://blog.csdn.net/qq_44204058/article/details/119963209?spm=1001.2014.3001.5506)               
[CTF杂项知识点](https://blog.csdn.net/weixin_46555037/article/details/108910195?spm=1001.2014.3001.5506)
这次分享就到这里啦.....

