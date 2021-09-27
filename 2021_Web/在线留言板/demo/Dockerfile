FROM ubuntu:14.04

ENV REFRESHED_AT 2019-8-14

ENV LANG C.UTF-8
#更换源
RUN sed -i 's/http:\/\/archive.ubuntu.com\/ubuntu\//http:\/\/mirrors.163.com\/ubuntu\//g' /etc/apt/sources.list
#更新
RUN apt-get update -y
#防止Apache安装过程中地区的设置出错
ENV DEBIAN_FRONTEND noninteractive

# 如 安装mysql
RUN apt-get -y install mysql-server
# 安装apache2
RUN apt-get -yqq install apache2
# 安装php5
RUN apt-get -yqq install php5 libapache2-mod-php5
# 安装php扩展
RUN apt-get install -yqq php5-mysql php5-curl php5-gd php5-intl php-pear php5-imagick php5-imap php5-mcrypt php5-memcache php5-ming php5-ps php5-pspell php5-recode php5-snmp php5-sqlite php5-tidy php5-xmlrpc php5-xsl
#配置Apache信息
RUN echo "ServerName localhost:80" >> /etc/apache2/apache2.conf
#移除Apache初始界面
RUN rm -rf /var/www/html/index.html

RUN sed -i 's/Options Indexes FollowSymLinks/Options None/' /etc/apache2/apache2.conf
#复制本地www文件夹下的文件到apache的网站目录
ADD ./src /var/www/html

COPY start.sh /root/start.sh

RUN chmod +x /root/start.sh

ENTRYPOINT cd /root; ./start.sh

EXPOSE 80
