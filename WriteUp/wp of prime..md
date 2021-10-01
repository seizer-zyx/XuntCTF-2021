# Web

**（1）外星人**——复制粘贴发现...flag出来了...
![在这里插入图片描述](E:\Typora\images\2021092913540524.jpg)

**（2）view_source**

![在这里插入图片描述](E:\Typora\images\20210929135415445.jpg)

根据提示，查看码源
![在这里插入图片描述](E:\Typora\images\20210929135423251.jpg)


**（3）一个不能按的按钮**

打开发现按钮按不了
![在这里插入图片描述](E:\Typora\images\20210929135431738.jpg)
 将post改为ture
![在这里插入图片描述](E:\Typora\images\20210929135439129.jpg)
删掉"disable=""， 刷新
![在这里插入图片描述](E:\Typora\images\20210929135446555.jpg)
 按钮可以按了，按下得到flag
 ![在这里插入图片描述](E:\Typora\images\20210929135503437.jpg)**（4）ezsy_request**
![在这里插入图片描述](E:\Typora\images\20210929135550940.jpg)
根据提示，应该是get或者post请求。打开，首先是get请求
![在这里插入图片描述](E:\Typora\images\20210929135734839.jpg)
     a.直接拼接

![](E:\Typora\images\20210929135757122.jpg)

  b.用postman传参
     ![在这里插入图片描述](E:\Typora\images\20210929135720726.jpg)继续根据提示，用postman进行post传参，得到flag
![在这里插入图片描述](E:\Typora\images\20210929135630253.jpg)
 **（5）夹心饼干**

![在这里插入图片描述](E:\Typora\images\20210929135809452.jpg)根据提示，是个经典的cookie题，拼上cookie.php
![在这里插入图片描述](E:\Typora\images\20210929135822658.jpg)
 根据提示查看response，找到flag
​![在这里插入图片描述](E:\Typora\images\20210929135832865.jpg)

# Crypto

**（1）base16*4**
![在这里插入图片描述](E:\Typora\images\20210929003228496.jpg)
直接在线base64解码
![在这里插入图片描述](E:\Typora\images\20210929003351839.jpg)

 **（2）ezsy_Caesar!**
 ![在这里插入图片描述](E:\Typora\images\20210929003412899.jpg)
 是凯撒密码，f→q，移位11位，用在线解码器，得到flag
 ![在这里插入图片描述](E:\Typora\images\20210929003425475.jpg)**（3)new_base64**

 是用 a-- ' 新定义的密码 
 ![在这里插入图片描述](E:\Typora\images\20210929003442502.jpg)在flag='xxx'处输入flag运行
![在这里插入图片描述](E:\Typora\images\20210929003513458.jpg)
![在这里插入图片描述](E:\Typora\images\20210929003526362.jpg)
发现正好是下方所给的数值根据5→f，11→l，0→a，6→g推出0—64分别代表abcde......由此得到flag

**（4）Railfence Cipher**
![在这里插入图片描述](E:\Typora\images\20210929003608345.jpg)
用一般的栅栏密码解不出来，猜测是w型，果然，栏数为4时flag出现了
![在这里插入图片描述](E:\Typora\images\20210929003557399.jpg)
**（5）Pig！**
![在这里插入图片描述](E:\Typora\images\20210929003621771.jpg)猪圈密码，在线解密yyds 输出的明文存入flag得解
![在这里插入图片描述](E:\Typora\images\20210929003654786.jpg)**（6）what is 阿斯口码?**

![在这里插入图片描述](E:\Typora\images\20210929003703963.jpg)得到一串ASCII码，其对应的字符写入flag得解

# MISC

**（1）真.PDF**——WPS打开，编辑文字,文本框藏在图片下
![在这里插入图片描述](https://img-blog.csdnimg.cn/20210916015745706.jpg?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L20wXzYwODAxNjQ4,size_16,color_FFFFFF,t_70)
**（2）图片有四种格式**
![在这里插入图片描述](https://img-blog.csdnimg.cn/8ef052c7118f4137b684b46a98ced5c8.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBAcHJpbWUud3g=,size_20,color_FFFFFF,t_70,g_se,x_16)
a.根据提示用010打开，搜索flag
![在这里插入图片描述](https://img-blog.csdnimg.cn/938d053a95c84b10b2d3ab45c02eab3b.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBAcHJpbWUud3g=,size_20,color_FFFFFF,t_70,g_se,x_16)

b.改为.txt打开，发现flag，其实有点不明白题目里面四种格式的意思...自己总是喜欢改txt，或许是误打误撞吧。
![在这里插入图片描述](https://img-blog.csdnimg.cn/20210916015803214.jpg?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L20wXzYwODAxNjQ4,size_16,color_FFFFFF,t_70)
 **（3）我的flag裂开了**
 ![在这里插入图片描述](https://img-blog.csdnimg.cn/f0bb6bd57f4d453ba17e6684b779b714.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBAcHJpbWUud3g=,size_19,color_FFFFFF,t_70,g_se,x_16)
得到jpg和png文件，根据提示猜测文件头有问题，用winhex或者010打开，发现的确文件头均有问题，分别改正为FFD8FF，89504E47,保存，再次打开就得到了裂开的flag。在此附上常见的文件头尾总结：[常见文件头尾](https://blog.csdn.net/qq_29277155/article/details/98060616)
 ![在这里插入图片描述](https://img-blog.csdnimg.cn/20210916020055460.jpg)

  **(4)这就是个excel**
  ![在这里插入图片描述](https://img-blog.csdnimg.cn/e974e759c8734194956959741cbda5ad.png)先将文件改为excel形式，打开，发现是个比较经典的题目，附上很详细的解题过程：[MISC excel解题](https://blog.csdn.net/qq_43871179/article/details/118310357)
![在这里插入图片描述](https://img-blog.csdnimg.cn/20210916020144680.jpg?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L20wXzYwODAxNjQ4,size_16,color_FFFFFF,t_70)
需要注意的几个点：
a.已知是二维码或者汉信码，框选时尽量选多，防止不全，并且尽量选为正方形；
b.改单元格格式之后改条件格式的时候，就在选中的时候改，（经历过没选中不停改但是无反应的崩溃）
c.除了调整行高列宽，也可以将二维码截出来调整。

此外，这道题得到的二维码扫描出来是base64密文，解密得到flag

**（5）Megumin**
![在这里插入图片描述](https://img-blog.csdnimg.cn/3a6b5e55e3df4d5f9449e1f2375824f5.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBAcHJpbWUud3g=,size_20,color_FFFFFF,t_70,g_se,x_16)
gif格式，猜测是隐写，用stegsolve打开，分析栏使用Frame Browser逐帧查看，发现二维码
![在这里插入图片描述](https://img-blog.csdnimg.cn/20210916020348809.jpg?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L20wXzYwODAxNjQ4,size_16,color_FFFFFF,t_70)但是码角需要调整，找一个二维码，裁剪粘贴，扫描得出一串密文，用base解密，三重密码，用base64，base32，base16依次解码。的确没那么简单...
![在这里插入图片描述](https://img-blog.csdnimg.cn/20210916020401461.jpg?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L20wXzYwODAxNjQ4,size_16,color_FFFFFF,t_70)
 **（6）serize的秘密**
 ![在这里插入图片描述](https://img-blog.csdnimg.cn/da683a4d3a884ff2a839b907c433c4de.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBAcHJpbWUud3g=,size_20,color_FFFFFF,t_70,g_se,x_16)
加密的zip文件，提示是猪猪侠的生日，生日为八位，推测猪猪侠为02年，尝试用advaced暴力破解，得到密码。

![在这里插入图片描述](https://img-blog.csdnimg.cn/20210916020426499.jpg?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L20wXzYwODAxNjQ4,size_16,color_FFFFFF,t_70)
 **（7）zip加密**——打开为一串base64密文，直接解密。

**（8）2.txt**——感觉有障眼法，打开文件是.exe，没有什么大的收获，改为.zip文件后解压，即可解出。
![在这里插入图片描述](https://img-blog.csdnimg.cn/93bc0a70b33c45c4938825ffd20be711.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBAcHJpbWUud3g=,size_20,color_FFFFFF,t_70,g_se,x_16)**（9）毅哥哥的表白信**
![在这里插入图片描述](https://img-blog.csdnimg.cn/3a6632ab55004bf2bb0048478496e9a2.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBAcHJpbWUud3g=,size_20,color_FFFFFF,t_70,g_se,x_16)改为word文件打开，根据提示清除格式，去掉花里胡哨的东西，显然没什么用......猜测有没有隐藏的文本框，用选择窗格，发现了没注意到的文本框
![在这里插入图片描述](https://img-blog.csdnimg.cn/f3bbd389ac614764af12779b6937253a.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBAcHJpbWUud3g=,size_20,color_FFFFFF,t_70,g_se,x_16)
打开，发现了表白信，MD5 32位小写加密，再倒序，即为flag里面的内容

![在这里插入图片描述](https://img-blog.csdnimg.cn/68ecdc02c35e497cb9fe754987a4d9c7.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBAcHJpbWUud3g=,size_20,color_FFFFFF,t_70,g_se,x_16)

