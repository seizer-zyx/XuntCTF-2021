一.misc
1.pdf，这个是个pdf文件，用鼠标扫了一下图片，发现有个文本框，复制下来就得到了flag。![在这里插入图片描述](https://img-blog.csdnimg.cn/e603916857084a90b055d101ebb07ee8.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBA5oiKNzQ=,size_20,color_FFFFFF,t_70,g_se,x_16#pic_center)
2.图片有四种格式
题目提示用010进行查看，那么文件下载后直接用010打开拉的最底部发现flag，也是一个简单题![在这里插入图片描述](https://img-blog.csdnimg.cn/1d698514e09f481eaa9cb5f2c3a62b2b.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBA5oiKNzQ=,size_20,color_FFFFFF,t_70,g_se,x_16#pic_center)
3.我的flag裂开了
这个题目提示缺少文件头，用010打开后更正文件头便好了
4.![在这里插入图片描述](https://img-blog.csdnimg.cn/15afb264ed4040cebb1936ed13296041.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBA5oiKNzQ=,size_20,color_FFFFFF,t_70,g_se,x_16#pic_center)
打开后更正格式有很多1，对1进行表个填涂，发现是个二维码，用手机扫描一下flag就出来了。
5.Megumin
打开后是个动图，然后逐帧分析发现了个二维码，但是缺少了定位角，补上之后扫描二维码，出现了密码，解密后flag就出来了。
6.Serize的秘密
提示为生日，用apchpr直接爆破，密码就出来了
7.puzzle
我直接用手拼的，拼了我半个多小时。。。。
8.zip加密
提示没有密码，所以想到了伪加密，用010打开后09改为00便能打开文件了



