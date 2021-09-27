FROM ubuntu:16.04

ENV LANG C.UTF-8

#更新源
RUN rm /etc/apt/sources.list 
COPY sources.list /etc/apt/sources.list


RUN apt-get update


#防止Apache安装过程中地区的设置出错
ENV DEBIAN_FRONTEND noninteractive


#安装apache2
RUN apt-get install apache2 -y

#安装php
RUN apt-get install php -y
RUN apt-get install libapache2-mod-php -y  --fix-missing
RUN apt-get install php7.0-mysql -y


#安装mysql
RUN apt-get install mysql-server -y
RUN apt-get install mysql-client -y

#配置apache 更改根目录
RUN echo "AddType application/x-httpd-php .php" >>/etc/apache2/apache2.conf
RUN echo "ServerName localhost:80" >>/etc/apache2/apache2.conf



#修改mysql文件读写
RUN echo "secure_file_priv=''" >> /etc/mysql/mysql.conf.d/mysqld.cnf
RUN service apparmor teardown
RUN chown -R mysql:mysql /var/www/html
RUN chmod 777 /var/www/html

#删除原始文件
RUN rm /var/www/html/index.html

#将题目源码放进去
COPY  src /var/www/html

#将sql文件放进docker
COPY db.sql /root/db.sql
RUN chmod +x /root/db.sql

#因为docker是单个进程的，如果一个进程退出docker就退出，所以需要一个永远不退出的进程，将日志输入到1.txt
RUN touch /var/log/1.txt
RUN chmod +x /var/log/1.txt


#启动脚本
COPY start.sh /root/start.sh
RUN  chmod +x /root/start.sh
ENTRYPOINT cd /root; ./start.sh

#暴露端口
EXPOSE 80

