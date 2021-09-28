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


