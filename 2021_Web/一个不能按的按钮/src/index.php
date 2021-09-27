<html><head>
    <meta charset="UTF-8">
    <title>一个不能按的按钮</title>
    <link href="http://libs.baidu.com/bootstrap/3.0.3/css/bootstrap.min.css" rel="stylesheet">
    <style>
        body{
            margin-left:auto;
            margin-right:auto;
            margin-TOP:200PX;
            width:20em;
        }
    </style>
</head>
<body>
<h3>按下按钮获得flag</h3>

<form action="" method="post">
<input disabled="" class="btn btn-default" style="height:50px;width:200px;" type="submit" value="flag" name="auth">
</form>
<?php
    if(isset($_POST['auth'])){
        echo "flag{fa966345577ba81af19408f203db968f}";
    }
?>

</body></html>