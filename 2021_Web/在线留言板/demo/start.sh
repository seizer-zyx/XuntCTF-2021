sleep 1

#启动服务，例如apache2
#具体的启动命令，视系统环境而定
#/etc/init.d/apache2 start
#为了适应各种docker版本，mysql的启动命令建议如下（mysqld除外）
find /var/lib/mysql -type f -exec touch {} \; && service mysql start
flagfile=/var/www/html/db.sql

#   mysql导入sql文件（newwpasswd只是示例密码）
mysqladmin -u root password "123456"
mysql -uroot -p123456 -e "CREATE DATABASE IF NOT EXISTS comment"
mysql -uroot -p123456 comment < $flagfile
rm -f $flagfile
/usr/sbin/apache2ctl -D FOREGROUND
#service apache2 start
#/bin/bash
