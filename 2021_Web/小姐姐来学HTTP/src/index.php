<?php
	error_reporting(0);
    setcookie("Sex", "1");
    $sex = $_COOKIE['Sex'];                     //  我们只对小姐姐服务
    $protocol = $_SERVER['SERVER_PROTOCOL'];    //  你的协议太低级了，我用的是HTTP/3.0
    $software = $_SERVER['HTTP_USER_AGENT'];    //  你必须使用网协开发得xiyounet99999.0浏览器才可以访问
    $ip = $_SERVER['HTTP_X_FORWARDED_FOR'];              //  你必须从本地访问
    $charset = $_SERVER['HTTP_ACCEPT_CHARSET']; //  我只认得utf-8
    if($sex == '0'){
        if($protocol == 'HTTP/3.0'){
            if($software == 'xiyounet99999.0'){
                if($ip == '127.0.0.1'){
                    if($charset == 'utf-8'){
                        echo "Hello，小姐姐！flag就是\"猪猪\"的md5加密(～￣▽￣)～！";
                    }else{
                        echo "<h3>我只认得utf-8</h3>";
                    }
                }else{
                    echo "<h3>你必须从必须本地访问</h3>";
                }
            }else{
                echo "<h3>你必须使用网协开发得xiyounet99999.0浏览器才可以访问</h3>";
            }
        }else{
            echo "<h3>协议太低级了，访问我们的网站要用最新的HTTP/3.0！</h3>";
        }
    }else{
        echo "<h3>我们只对小姐姐服务！</h3>";
    }
    

?>
