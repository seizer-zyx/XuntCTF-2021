<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>黑客帝国</title>
</head>
<body style="background:url(http://image.nbd.com.cn/uploads/articles/images/730524/____500997682_banner.jpg); text-align: center; ";>
    <h1 style="font-size: 500%; color: white;"> 欢迎来到黑客的世界 </h1>
    <h1 style=" color: red; opacity: 0.3;"> 每一秒都很重要 </h1>
    <div><p><h3 style=" color: black; opacity: 0.05;"> 密码是100-200中的某一个数 </h3></p></div>
    <form action="" method="post">
        <input type="number" name="key">
        <input type="submit" value="提交">
    </form>
    <?php 
        $random = (date('s') * date('m')) % 100 + 100;
        $key = $_POST['key'];
	if(isset($key)){
            if($random == $key){
                echo "flag{978badf22af155cabc8584e4210811d1}";
            }
            else{
                echo "error key!";
            }
        }
    ?>
</body>
</html>
